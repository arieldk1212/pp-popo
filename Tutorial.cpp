#include <iostream>
#include <cstring>

#define LOG(x) std::cout << x
// #define INTEGER int

void increment(int& value);

#if 0
std::cout << "wont print";
#endif;
// if we put extern insted of static it means that the linker will look
// for the value in an external file
// static means that it "private" in a class an no other translation unit 
// will see it in the global scope
static int s_Value = 5;

extern int c_Value;

int main() {
  int var = 8;
  int& check = var;
  char* buffer = new char[8];
  memset(buffer, 0, 8);
  LOG(check);
  increment(var);
  LOG(check);
  LOG(c_Value);
  char** ptr = &buffer;

  delete[] buffer;
  return 0;
}

void increment(int& value) {
  value++;
}