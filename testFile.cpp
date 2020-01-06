#include <iostream>
#include <stdlib.h>

size_t getStrSize(char * demo)
{
  size_t x = 0;
  while (demo[x++]){}
  return x;
}

int main()
{
  std::cout << "This is a test" << std::endl;
  return 0;
}
