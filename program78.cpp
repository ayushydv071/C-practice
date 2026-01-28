#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "How many numbers do you want to enter? ";
    cin >> size;
    
    // Create an array to store numbers
    int arr[100];
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "\n--- Unique Elements and Their Positions ---\n";
    
    // Check each element to see if it appears only once
    for (int i = 0; i < size; i++) {
        int count = 0;  // Count how many times this number appears
        
        // Count how many times arr[i] appears in the whole array
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        // If count is 1, this element appears only once (it's unique)
        if (count == 1) {
            cout << "Position: " << i << "  |  Number: " << arr[i] << endl;
        }
    }
    
    return 0;
}
