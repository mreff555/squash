
/******************************************************************/
/*                                                                */
/*  Program: Squash                                               */
/*  Class: decompress                                               */
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

#ifndef __DECOMPRESS_HPP__
#define __DECOMPRESS_HPP__

#ifdef WITH_PT_SUITE
#include <ptsuite.hpp>
#endif // WITH_PT_SUITE

#ifdef WITH_LOGGER
#include <logger.hpp>
#endif // WITH_LOGGER

namespace Squash
{
  class Decompress
  {
    public:
    Decompress();
  
    ~Decompress();
  
    private:
    //void decompressBuffer(char *hash, const char *buffer, size_t size);
  
    //size_t countConsecutiveMatches(const char* b, size_t sz, size_t byteWidth);
  
    //void getValidKeyMinor(char *key, const char *buffer, size_t size);
  };
}
#endif /* __DECOMPRESS_HPP__ */
