#include <iostream>
#include "array.h"

using namespace std;

int main(int argc, char *argv[])
{
    Array<int> arr;

    cout << arr.get_size() << " " << arr.get_capacity() << endl;

    for (int i = 0; i < 5; ++i) {
        arr.push_back(i);
    }

    cout << arr.get_size() << " " << arr.get_capacity() << endl;

    int a = arr.pop_back();

    cout << a << endl;

    arr.push_back(5);
    cout << a << endl;

    while (!arr.is_empty()) {
        cout << arr.pop_back() << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; ++i) {
        arr.push_back(i * i);
    }

    for (auto it : arr) {
        cout << it << " ";
    }

    cout << endl;

    auto b = arr.at(-6);

    cout << b;

    return 0;
}
