#include <bits/stdc++.h>
using namespace std;

// Fixed Heap Dynamic: Allocate fixed size using 'new' (heap memory)
int main() {
    int *arr = new int[5]; 
    cout << "Enter 5 elements:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Fixed Heap Dynamic Array Elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
