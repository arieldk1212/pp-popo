#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <iterator>

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

  std::vector<int> vec = {1, 2, 3, 4, 5};

  std::vector<int>::iterator ptr;

  for (ptr = vec.begin(); ptr < vec.end(); ptr++) {
    std::cout << *ptr;
  }

  std::map<int, std::string> student;
  student[1] = "Ariel";
  student.size();

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