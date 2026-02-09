#include<bits/stdc++.h>
using namespace std;
void backtrack(int i , int n){
    if (i>n){
        return;
    }
    backtrack(i+1,n);
    cout << i << " ";
}
int main(){
    int n;
    cin >> n;
    int i=1;
    backtrack(i,n);
    cout << endl;
    return 0;

}