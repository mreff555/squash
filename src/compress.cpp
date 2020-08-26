/******************************************************************/
/*                                                                */
/*  Program: Squash                                               */
/*  Class: compress                                               */
/*  Desc:                                                         */
/*                                                                */
/*                                                                */
/*                                                                */
/*                                                                */
/*                                                                */
/*                                                                */
/*                                                                */
/*                                                                */
/******************************************************************/

#include "constant.hpp"
#include "compress.hpp"
#include <iostream>
#include <cstring>

using namespace Squash;

Compress::Compress()
{

}

Compress::~Compress()
{

}

void Compress::compressBuffer(char *hash, const char *buffer, size_t size)
{
  
}

/******************************************************************/
/*                                                                */
/*  Function: countConsecutiveMatches                             */
/*  Description: Returns the count of consecutive                 */
/*    fields of a specified width.  This will need                */
/*    to be modified to use with unicode                          */
/*                                                                */
/*  Input: input buffer, buffer size, byte width                  */
/*  Output: none                                                  */
/*  Return: Final count                                           */
/*                                                                */
/******************************************************************/
size_t Compress::countConsecutiveMatches(const char* b, size_t sz, size_t byteWidth)
{
  size_t qty = 0;
  if(b && byteWidth > 0 &&sz > (byteWidth * byteWidth))
  {             
    size_t j;
    size_t consecMatch;
    for(size_t i = 0; i < sz; ++i)
    {
      j = i;
      consecMatch = 0;
      while(!(b[j] ^ b[j + byteWidth]))
      {
        if(++consecMatch > byteWidth)
        {
          // should never happen ERROR
        }
        else if(consecMatch == byteWidth)
        {
          ++qty;
          break;
        }
        ++j;
      } // END while(!(b[j] ^ b[j + byteWidth]))
    } // END for(size_t i = 0; i < sz; ++i)
  } // END if(b && byteWidth > 0 &&sz > (byteWidth * byteWidth))
  else
  {
    // ERROR Invalid input
  }
  return qty;
}

size_t Compress::isOctetInString(const char* buffer, const unsigned char octet)
{
  size_t out = 0;
  for(size_t i = 0; i < strlen(buffer); ++i)
  {
    if(!(buffer[i] ^ octet))
    {
      out = i;
      break;
    }
  }
  return out;
}
 
