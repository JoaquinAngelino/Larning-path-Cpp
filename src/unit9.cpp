#include <unit9.h>
#include <typeinfo>
#include <iostream>

using namespace std;

void vectorsImplementation() {
    vector<int> v = { 1, 2, 0, 1, 2, 3, 4, 5, 10, 6, 7, 8 };

    cout << "front " << v.front() << endl;
    cout << "end " << v.back() << endl;

    cout << "vector for ";
    for (const auto& value : v) {
        cout << value << " ";
    }

    //   Capacity and resizing
    v.reserve(15);
    cout << endl << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    sort(v.begin(), v.end());
    cout << "after sort: ";
    for (const auto& value : v) {
        cout << value << " ";
    }

    auto it = find(v.begin(), v.end(), 33);

    if (it != v.end()) {
        cout << "\nElement found: " << *it << endl;
    }
    else {
        cout << "\nElement not found" << endl;
    }

    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);

    cout << "size " << v.size() << ", capacity " << v.capacity() << " after 6 items were pushed: ";
    for (const auto& value : v) {
        cout << value << " ";
    }
    int firstElement = v[50]; // No bounds checking
    cout << "\n v[] " << firstElement << ", ";

    try {
        int secondElement = v.at(50); // Bounds checking
        cout << "\n v.at() " << secondElement;
    }
    catch (const std::exception& e) {
        cerr << '\n' << e.what();
    }

}
