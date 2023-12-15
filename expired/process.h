#pragma once
#include "tyepos.h"

class Process {
public:
  string username;

  struct CPU {
    int totalCpuCores;
    int cpuCores;
    int cpuPercent;
  };
};