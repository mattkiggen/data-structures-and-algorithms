#ifndef ARRAYS_ARRAY_H
#define ARRAYS_ARRAY_H

#include <cstddef>
#include <memory>

class Array {
public:
    explicit Array(int length);
    ~Array();

     std::unique_ptr<int[]> items;
     void insert(int x);
     int indexOf(int x);
     void removeAt(int index);
     int size();

private:
    int length;
    int count;
};

#endif //ARRAYS_ARRAY_H
