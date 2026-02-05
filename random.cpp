#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 23, 89, 56, 78, 34, 90, 67};
    int n = 9;
    
    int maxElement = arr[0];
    int maxIndex = 0;
    
    // Find the largest element and its index
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Largest element: " << maxElement << endl;
    cout << "Index of largest element: " << maxIndex << endl;
    
    return 0;
}
