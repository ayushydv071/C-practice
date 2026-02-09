#include<bits/stdc++.h>
using namespace std;
void backtracking(int i, int n){
    if (i < 1){
        return;
    }
    backtracking(i-1,n);
    cout << i << " "; 
}
int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;
    backtracking(n,n);
    cout << endl;
    return 0;
}