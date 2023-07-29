#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "tyepos.h"

namespace SYS {}; 

class File {
public:
  string filename;

  struct CPU {
    float check;
  };
  // this struct will contain data for the backend's DB desired Model.
  struct  Process {
    int PID;
    int UID;
    double cpuPercent;
    int CPU = 0;
    string command;
  };

  void fCreation(string &filename) {
    std::ofstream file(filename+".txt");
    if(!file) {
      std::cout << "Error While creating file - " << filename;
    }else {
      std::cout << "Created file - " << filename;
    }
    if(!file.is_open()) {
      std::cout << "File Status Error";
    }else {
      file << std::system(("pidstat -u >> " + filename + ".txt").c_str());
      file.close();
    }
  }
};


