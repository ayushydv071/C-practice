#include<iostream>
using namespace std;

int order(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = n / 10;
    }
    return count;
}

int power(int r, int x){
    int ans = 1;
    for(int i = 0; i < x; i++){
        ans = ans * r;
    }
    return ans;
}

int checkArmstrong(int n){
    int temp = n;
    int sum = 0;
    int x = order(n);

    while(temp){
        int digit = temp % 10;
        sum += power(digit, x);
        temp = temp / 10;
    }
    return sum == n;
}

int main(){
    int n;
    cin >> n;
    cout << "number is " << checkArmstrong(n) << endl;
    return 0;
}