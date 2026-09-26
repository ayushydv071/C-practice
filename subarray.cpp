//print all the subarrays 
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {3, 4, 5, 6};
    int n = arr.size();
    for (int len = 1; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            for (int j = i; j < i + len; j++) {
                cout << arr[j];
            }
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
