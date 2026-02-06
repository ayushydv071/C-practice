#include<iostream>
using namespace std;
bool checkPrime(int n){
    for (int i=2; i<n; i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        sum+=rem;
    }
    return sum;
}
bool checkArmstrong(int n){
    int sum = 0, temp = n;
    while(temp > 0){
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;

    }
    return sum == n;
}
int main(){
    int n;
    while(true){
        cout << "Enter a number: ";
        cin >> n;
        if (n<100 || n>999){
            cout << "Number should be of 3 digits" << endl;
            continue;
        }
        if (!checkPrime(n)){
            cout << "Not a prime number Try again" << endl;
            continue;
        }
        int digitsum=sumOfDigits(n);
        if (digitsum % 3 == 0){
            cout << "Number divisible by 3 , take another number" << endl;
            continue;
        }
        if (checkArmstrong(n)){
            cout << "Number is a Armstrong number ....take another one" << endl;
            continue;
        }
        cout << "Secure passcode is : " << "2" << digitsum << endl;
        break;
    }
    return 0;
}