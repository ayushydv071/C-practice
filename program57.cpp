#include<iostream>
using namespace std;
int revNum(int num){
    while (num>=10){
        int rem = num % 10;
        cout << rem;
        num = num/10;
    }
    return num;
}
int main(){
    int num=56;
    cout << revNum(num) << endl;
    return 0;
}