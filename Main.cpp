// main configuration for processes using pidstat | grep <program name>
// output to txtfile containing the process info.
#include <iostream>
#include <fstream>

typedef std::fstream FILE;

void close_file(FILE* filename){
  filename.close();
}


int main() {

  // std::system("pidstat | grep spotify >> ProcessInfo.txt");

  FILE process_file;

  process_file.open("processes.txt", std::ios::out);

  if(!process_file){
    std::cout << "Error in file creation.";
  }else {
    std::cout << "File Created";
  }


  close_file(&process_file);

  return 0;
}
