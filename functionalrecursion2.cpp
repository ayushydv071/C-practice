//factorial of n using functional recursion
#include<bits/stdc++.h>
using namespace std;
int factrecursion(int n){
    if (n==0){
        return 1;
    }
    return n*factrecursion(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << "Factorial is : " << factrecursion(n) << endl;
    return 0;

}