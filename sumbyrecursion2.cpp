#include<bits/stdc++.h>
using namespace std;
void sumRecursion(int i,  int n, int sum){
    if (i>n){
        cout << sum << " ";
        return;
    }

    sumRecursion(i+1,n,sum+i);
}
int main(){
    int n;
    cin >> n;
    int i=1;
    sumRecursion(i, n, 0);
    cout << endl;
    return 0;
}