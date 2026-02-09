#include<bits/stdc++.h>
using namespace std;
void sumRecursion(int i, int sum){
    if (i<1){
        cout << sum << " ";
        return;
    }
    sumRecursion(i-1,sum+i);
}
int main(){
    int n;
    cin >> n;

    sumRecursion(n, 0);
    cout << endl;
    return 0;
}