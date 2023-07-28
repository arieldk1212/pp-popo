#include <iostream>


struct Person {
  std::string name;
  int age;
  bool adult=false;
};

int main() {
  Person ariel;
  int var = 4;
  int &ref = var;
  // std::cout << &ref;
  int *ptr = nullptr;
  int arr[2] = {1,2};
  int *ptr  = &arr[0];

  return 0;
}