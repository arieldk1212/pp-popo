#include <iostream>
#include "afile.h"
#include "tyepos.h"

using namespace SYS;

int main() {

  std::cout << "Enter File Name";

  string filename;
  std::cin >> filename;
  string* fptr = &filename;

  File file;
  file.filename = *fptr;
  file.fCreation(*fptr);


  return 0;
}
