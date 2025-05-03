#include <bits/stdc++.h>
using namespace std;

// a region of memory that allows for flexible and dynamic allocation and deallocation of memory blocks during program execution
int main() {
    vector<int> arr;
    int n, ele;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> ele;
        arr.push_back(ele); 
    }
    cout << "Heap Dynamic Array Elements: ";
    for(auto val : arr) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
