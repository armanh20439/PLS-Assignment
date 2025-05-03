#include <bits/stdc++.h>
using namespace std;

// Heap Dynamic: Size and contents can grow or shrink during runtime
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
