#include <iostream>
#include <vector>
#include "Container.h"

using namespace std;

int main() {
    Container<int> v;

    v.add(10);
    cout << v.random_elem() << endl;
    cout << v.random_elem() << endl;
    cout << v.random_elem() << endl;
    cout << v.random_elem() << endl;
    cout << v.random_elem() << endl;
    v.erase(3);
}
