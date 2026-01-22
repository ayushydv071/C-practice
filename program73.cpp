//for each loop in vectors
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(45);
    vec.push_back(65);
    vec.pop_back();
    cout << vec.size() << endl;
    for (int i: vec){
        cout << i << endl;
    }
}