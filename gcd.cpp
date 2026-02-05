#include<bits/stdc++.h>
using namespace std;
void checkGCD(int n1, int n2){
    for (int i=min(n1,n2); i>=1; i--){
        if(n1%i==0 && n2%i==0){
            cout << i;
            break;
        }
    }
}

int main(){
    int n1;
    cout << "enter n1 : ";
    cin>> n1;
    int n2;
    cout << "enter n2 : ";
    cin >> n2;
    checkGCD(n1,n2);
    cout << endl;
    return 0;
}