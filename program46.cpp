//pass by value
#include<iostream>
using namespace std;
int changeX(int x){
    x = 2*x;
    return x;
}
int main(){
    int x = 10;
    cout << changeX(x) << endl;
    cout << x << endl;
    return 0;
}