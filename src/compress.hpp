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

#ifndef __COMPRESS_HPP__
#define __COMPRESS_HPP__

#include <cstddef>

#ifdef WITH_PT_SUITE
#include <ptsuite.hpp>
#endif // WITH_PT_SUITE

#ifdef WITH_LOGGER
#include <logger.hpp>
#endif // WITH_LOGGER

namespace Squash
{
  class Compress
  {
    public:
    Compress();
  
    ~Compress();
  
//    private:
    void compressBuffer(char *hash, const char *buffer, size_t size);
  
    size_t countConsecutiveMatches(const char* b, size_t sz, size_t byteWidth);
  
    size_t isOctetInString(const char* buffer, const unsigned char octet);
  };
}
#endif /* __COMPRESS_HPP__ */
