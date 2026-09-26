#include<bits/stdc++.h>
using namespace std;
int recursion(int num , int rev){
    if (num == 0){
        return rev;
    }
    rev = (rev * 10) + (num % 10);
    return recursion(num/10, rev);
}
bool isPal(int n){
    int num;
    cin >> num;
    if (recursion )

}