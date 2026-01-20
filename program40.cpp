#include<iostream>
using namespace std;
int main(){
    int n=4;
    //upper half
    for (int i=0; i<n; i++){
        int num=1;
        for (int j=0; j<i+1; j++){
            cout << num;
            num++;
        }
        //spaces
        for (int j=0; j<(n+2-(2*i)); j++){
            cout << " ";
        }
        //numbers
        for (int j=i+1; j>0; j--){
            cout << j;
        }
    
    cout << endl;

    }
    //lower half
    for (int i)
    return 0;
}