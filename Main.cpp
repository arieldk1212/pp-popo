#include <iostream>
#include "afile.h"
#include "tyepos.h"

// https://linuxhint.com/check_memory_usage_process_linux/
// https://www.programiz.com/dsa/binary-search-tree
// https://www.programiz.com/dsa/hash-table
// https://learn.microsoft.com/en-us/cpp/cpp/unions?view=msvc-170

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
