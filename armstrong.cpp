#include<bits/stdc++.h>
using namespace std;
bool checkarmstrong(int n){
    int original = n;
    int temp = n;
    int sum = 0;
    while (temp > 0){
        int rem = temp%10;
        sum = sum+(rem*rem*rem);
        temp/=10;
    } 
    return original == sum;
}
int main(){
    int n;
    cout << "Enter any number: ";
    cin >> n;
    if (checkarmstrong(n)==true){
        cout << "Armstrong number";
    }
    else{
        cout << "not a armstrong number";
    }
    cout << endl;
    return 0;
}