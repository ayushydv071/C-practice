#include<iostream>
using namespace std;
int binaryToDec(int binaryNum){
    int ans=0,pow=1;
    while (binaryNum > 0){
        int rem = binaryNum%10;
        binaryNum = binaryNum / 10;
        ans += rem * pow;
        pow *= 2;  
    }
    return ans;
}
int main(){
    int binaryNum=101010;
    cout << binaryToDec(binaryNum) << endl;
    return 0;
}