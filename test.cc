#include <iostream>
#include <cstdint>

int main(void) {
  if ((*(uint16_t *)"\0\xff" < 0x100)) {
    std::cout << "Big endian" << std::endl;
  } else {
    std::cout << "Little endian" << std::endl;
  }
  return 0;
}
