#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {45, 12, 78, 34, 89, 23, 56, 90, 67};
    
    cout << "Original vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    
    // Sort vector in descending order
    sort(vec.begin(), vec.end(), greater<int>());
    
    cout << "Sorted vector (descending order): ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
