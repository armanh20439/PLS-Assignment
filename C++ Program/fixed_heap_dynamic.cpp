#include <bits/stdc++.h>
using namespace std;

// Fixed Heap Dynamic: Allocate fixed size using 'new' (heap memory)  size of the array is known at compile time (fixed)
int main() {
    int *arr = new int[5]; 
    cout << "Enter 6 elements:" << endl;
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    cout << "Fixed Heap Dynamic Array Elements: ";
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
