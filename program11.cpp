#include<iostream>
using namespace std;
int main (){
    int n , sum = 0, i = 1;
    cout << "Enter the number :";
    cin >> n;
    while (i < n){
        i++;
        if (i%2!=0){
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nsum : " << sum << endl;
    return 0;
}