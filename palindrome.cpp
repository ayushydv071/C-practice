#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(int n){
    int original = n;
    int rev=0;
    int temp = n;
    while (temp>0){
        int r = temp % 10;
        rev = rev*10 + r;
        temp /= 10;
    }
    return original == rev;
}
int main(){
    int n;
    cout << "enter number : ";
    cin >> n;
    if (checkPalindrome(n)){
        cout << "Palindrome";
    }else{
        cout << "not a Palindrome";
    }
    cout << endl;
    return 0;
}