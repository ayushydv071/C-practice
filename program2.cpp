#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age < 18){
        cout << "can not vote " << endl;
    }else{
        cout << "can vote " << endl;
    }
    return 0;

}