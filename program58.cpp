#include<iostream>
using namespace std;
int checkPow(int num){
    while (num>1){
        if (num % 2 != 0){
            cout << "Not a power of 2";
            break;
        }
        num = num / 2;
    }
    return num;
}
int main(){
    int num;
    cin >> num;
    cout << checkPow(num) << endl;
    return 0;
}