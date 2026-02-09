//printing numbers from N to 1
#include<bits/stdc++.h>
using namespace std;
void reversePrinting(int i , int n){
    if (i < 1){
        return;
    }
    cout << i << " ";
    reversePrinting(i-1,n);
}
int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    reversePrinting(n,n);
    cout << endl;
    return 0; 
}