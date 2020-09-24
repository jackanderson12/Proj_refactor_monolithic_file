/* utils.h */

#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include "constants.h"

void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);

process getNext(vector<process> &myProcesses);

int getSize(vector<process> &myProcesses);

int handleMissingData(vector<process> &myProcesses);

#endif