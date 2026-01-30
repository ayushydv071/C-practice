#include<iostream>
using namespace std;
bool checkPrime(int n){
    for (int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }

    }
    return true;
}
int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        int rem=n%10;
        n /= 10;
        sum+=rem;
    }
    return sum;
}
bool checkArmstrong(int n){
    int original = n;
    int temp = n;
    int Digitcount = 0;
    while (temp > 0){
        Digitcount++;
        temp /= 10;
    }
    temp = n;
    int sum = 0;
    while(temp > 0){
        int digit=temp%10;
        int pow=1;
        for(int i=0; i<=digit; i++){
            pow=pow*digit;
        }
        sum += pow;
        temp /= 10;
    }
    return original == sum;
}
int main(){
    int n;
    while(true){
        cout << "Enter the number : ";
        cin >> n;
        if (n<100 || n>999){
            cout << "Enter a valid three digit number" << endl;
            continue;
        }
        if (!checkPrime(n)){
            cout << "Your number is not a prime ... Enter a valid prime number" << endl;
            continue;
        }
        int Digitsum = sumOfDigits(n);
        if (Digitsum%3==0){
            cout << "Your number is divisible by 3 ...try another number " << endl;
            continue;
        }
        if (checkArmstrong(n)){
            cout << "Its a armstrong number .. try another number " << endl;
            continue;
        }
        cout << "Your secure password is :" << "2" << Digitsum << endl;
        break;
    } 
    return 0;
}