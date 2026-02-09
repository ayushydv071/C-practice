#include<bits/stdc++.h>
using namespace std;
void LinearRecursion(int i , int n){
    if(i>n){
        return;
    }
    cout << i << " ";
    LinearRecursion(i+1,n);
}
int main(){
    int n;
    cout << "enter number : ";
    cin >> n;
    int i=1;
    LinearRecursion(i,n);
    cout << endl;
    return 0;
}