/* fileio.h */

#ifndef FILEIO_H
#define FILEIO_H

#include <vector>
#include <string>
#include "constants.h"

int loadData(const std::string filename, vector<process> &myProcesses);

int saveData(const std::string filename, vector<process> &myProcesses);

#endif