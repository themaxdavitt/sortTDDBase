/*
    sort_t.cpp

    Test program for sort functions
*/

#include "sort.hpp"
#include <cassert>
#include <vector>

int main() {

    {
        std::vector<int> v;
        assert(v.empty());
        assert(v.size() == 0);

        sort(v);

        assert(v.empty());
        assert(v.size() == 0);
    }

    {
        std::vector<int> v;
        v.push_back(1);
        assert(!v.empty());
        assert(v.size() == 1);

        sort(v);

        assert(!v.empty());
        assert(v.size() == 1);
    }

    {
        std::vector<int> v;
        v.push_back(2);
        v.push_back(1);
        assert(!v.empty());
        assert(v.size() == 2);

        sort(v);

        assert(!v.empty());
        assert(v.size() == 2);
        assert(v[0] == 1);
        assert(v[1] == 2);
    }

    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        assert(!v.empty());
        assert(v.size() == 2);

        sort(v);

        assert(!v.empty());
        assert(v.size() == 2);
        assert(v[0] == 1);
        assert(v[1] == 2);
    }

    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        assert(!v.empty());
        assert(v.size() == 3);

        sort(v);

        assert(!v.empty());
        assert(v.size() == 3);
        assert(v[0] == 1);
        assert(v[1] == 2);
        assert(v[2] == 3);
    }

    return 0;
}
