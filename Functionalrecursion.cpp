//using functinal recursion that return anything 
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if (n==0){
        return 0;
    }
    return n + sum(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << "Sum is : " << sum(n) << endl;
    return 0;
}