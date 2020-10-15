/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"

// sort of int vector
void sort(std::vector<int>& v) {

    // vecotrs of size 0 or 1 are already sorted
    if (v.size() < 2)
        return;

    // swap the two elements
    int t = v[0];
    v[0] = v[1];
    v[1] = t;
}
