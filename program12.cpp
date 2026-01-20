#include<iostream>
using namespace std;
int main(){
    int n , sum = 0;
    cout << "Enter number :";
    cin >> n;
    for (int i =1; i <= n; i++){
        if (i%2==0){
            cout << i << " ";
            sum += i;
        }

    }
    cout << "\n Sum is :" << sum << endl;
    return 0;
}