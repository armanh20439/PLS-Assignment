#include <bits/stdc++.h>
using namespace std;

// Stack Dynamic: Size determined at runtime (VLA - Variable Length Array)
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Stack Dynamic Array Elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
