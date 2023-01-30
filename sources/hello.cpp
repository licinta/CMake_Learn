#include "../include/chello"
#include "iostream"
void hello() { std::cout << "Hello !\n"; }
void say_hello(const char *name1, const char *name2) {
  std::cout << name1 << ": hello, " << name2 << std::endl;
}
