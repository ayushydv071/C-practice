//sum of Digits of a number
#include<iostream>
using namespace std;
int Digitsum(int n){
    int last_digit,num=0;
    while(n>0){
        last_digit= n%10;
        n=n/10;
        num+=last_digit;
    
    }
    return num;
}
int main(){
    int n;
    cout << "Enter a number: :";
    cin >> n;
    cout << "Sum of Digits: " << Digitsum(n) << endl;
    return 0;
}