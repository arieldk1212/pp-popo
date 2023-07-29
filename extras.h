#pragma once
#include <string>
#include <fstream>
#include <iostream>


namespace EXR {

  typedef std::string string;

  class File {
  public:
    string filename;

    // this struct will contain data for the backend's DB desired Model.
    struct Process {
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
        file << std::system(("pidstat >> " + filename + ".txt").c_str());
        file.close();
      }
    }
  };


  void getProcesses();


  

  void getProcesses();
























}