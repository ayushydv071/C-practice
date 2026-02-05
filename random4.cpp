#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to check if a number is divisible by 3
bool isDivisibleBy3(int num) {
    return num % 3 == 0;
}

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check if a number is Armstrong number
bool isArmstrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 3; // We're dealing with 3-digit numbers
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    
    return sum == originalNum;
}

int main() {
    int number;
    bool valid = false;
    
    cout << "========== SECURE PASSWORD GENERATOR ==========" << endl;
    cout << "This program generates a secure password based on a 3-digit number." << endl;
    cout << "=============================================" << endl;
    
    while (!valid) {
        cout << "\nEnter a 3-digit number: ";
        cin >> number;
        
        // Validate if it's a 3-digit number
        if (number < 100 || number > 999) {
            cout << "Invalid! Please enter a number between 100 and 999." << endl;
            continue;
        }
        
        cout << "\nValidating number " << number << "..." << endl;
        
        // Step 1: Check if prime
        if (isPrime(number)) {
            cout << "✗ Number is PRIME. Please enter another number." << endl;
            continue;
        }
        cout << "✓ Number is not prime." << endl;
        
        // Step 2: Check if divisible by 3
        if (isDivisibleBy3(number)) {
            cout << "✗ Number is divisible by 3. Please enter another number." << endl;
            continue;
        }
        cout << "✓ Number is not divisible by 3." << endl;
        
        // Step 3: Check if Armstrong number
        if (isArmstrongNumber(number)) {
            cout << "✗ Number is an Armstrong number. Please enter another number." << endl;
            continue;
        }
        cout << "✓ Number is not an Armstrong number." << endl;
        
        // Step 4: Generate password
        valid = true;
        int digitSum = sumOfDigits(number);
        string password = "2" + to_string(digitSum);
        
        cout << "\n========== PASSWORD GENERATED ==========" << endl;
        cout << "Original Number: " << number << endl;
        cout << "Sum of Digits: " << digitSum << endl;
        cout << "Generated Password: " << password << endl;
        cout << "========================================" << endl;
    }
    
    return 0;
}
