//write a code to generate a secure code which is the sum of all possible palindrome numbers between given two numbers
#include<iostream>
using namespace std;
bool checkPalindrome(int n){
    int temp = n;
    int num=0;
    while (temp>0){
        int r = temp % 10;
        num = num*10 + r;
        temp /= 10;
    }
    return num == n;
}
int main(){
    int n1,n2;
    cout << "Enter Two numbers : ";
    cin >> n1 >> n2;
    int sum=0;
    for (int i=n1; i<=n2; i++){
        if (checkPalindrome(i)){
            sum=sum+i;
        }
    } 
    cout << "Your password is : " << sum << endl;
    return 0;
}