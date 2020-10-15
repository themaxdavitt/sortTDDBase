/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"

namespace {
    // swap the two elements
    void swap(int& n1, int& n2) {
        int t = n1;
        n1 = n2;
        n2 = t;
    }
    
    // order two elements
    void order(int& n1, int& n2) {
        if (n1 > n2) {
            swap(n1, n2);
        }
    }
}

// sort of int vector
void sort(std::vector<int>& v) {

    // vecotrs of size 0 or 1 are already sorted
    if (v.size() < 2)
        return;

    // order the two elements
    order(v[0], v[1]);
}
