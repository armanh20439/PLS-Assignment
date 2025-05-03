#include <bits/stdc++.h>
using namespace std;

// a type of array where the size of the array is known at compile time (fixed) but the storage is allocated at runtime (dynamic)
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Fixed Stack Dynamic Array Elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}