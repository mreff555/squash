#include "compress.hpp"
#include "decompress.hpp"

#include <cstring>
#include <iostream>
#include "constant.hpp"

using namespace Squash;

int main(int argc, char** argv)
{
  Squash::Compress c;

  const char* buffer = {"sdfjhskdfhskdfhs≠iufhujherer  123434"};
  std::cout << c.countConsecutiveMatches(buffer, strlen(buffer), 2) << "\n";
  std::cout << c.isOctetInString(buffer, DEF_KEY_MINOR) << "\n"; 
}
