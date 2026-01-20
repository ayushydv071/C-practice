#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n>90){
        cout << "A+ Grade \n";

    }else if (n>80){
        cout << "A grade \n";

    }else if (n>=50){
        cout << "B grade \n";

    }else {
        cout << "C grade \n";
    }
    return 0;
}