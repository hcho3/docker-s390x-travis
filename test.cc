#include <iostream>
#include <cstdint>

inline int is_system_little_endian() {
  const uint32_t value = 0x01;
  const void* address = static_cast<const void*>(&value);
  const uint8_t* least_significant_address = static_cast<const uint8_t*>(address);
  return ((*least_significant_address == 0x01) ? 1 : 0);
}

int main(void) {
  if (is_system_little_endian()) {
    std::cout << "Little endian" << std::endl;
  } else {
    std::cout << "Big endian" << std::endl;
  }
  return 0;
}
