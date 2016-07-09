#include <iostream>
#include "array.h"

using namespace std;

int main(/*int argc, char *argv[]*/)
{
    Array<int> arr_1;
    Array<int> arr_2;

    for (int i = 0; i < 5; ++i) {
        arr_1.push_back(i);
        arr_2.push_back(i + 5);
    }

    auto arr_3 = arr_1 + arr_2;

    arr_3 << 111 << 222 << 333;

    for (auto it : arr_3) {
        cout << it << endl;
    }

    return 0;
}
