#pragma once

#include <vector>
using namespace std;



class Tuple{
    std::vector<int> _fields; // should be generalized to Field
    int size;
};

class Table{
    std::vector<Tuple> tuples;
    int tuple_count;
};