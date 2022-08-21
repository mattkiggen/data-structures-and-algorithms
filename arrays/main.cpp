#include "array.h"
#include <iostream>

using namespace std;

int main() {
    Array numbers(3);
    numbers.insert(1);
    numbers.insert(2);
    numbers.insert(3);
    numbers.insert(4);
    numbers.removeAt(1);

    cout << numbers.indexOf(2) << endl;
    cout << numbers.indexOf(1) << endl;

    for (int i = 0; i < numbers.size(); i++)
        cout << numbers.items[i] << endl;

    return 0;
}
