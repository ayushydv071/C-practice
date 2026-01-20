//checking for a power of 2 number 
#include<iostream>
using namespace std;
void checkPow(int num){
    if (num>=1 && ((num & (num-1)) == 0)){
        cout << "Power of 2";
    }else{
        cout << "not a power of 2";
    }
}
int main(){
    int num;
    cin >> num;
    checkPow(num);
    cout << endl;
    return 0;
}