//some more functions of vectors
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(12);
    vec.push_back(23);
    vec.push_back(56);
    vec.push_back(78);
    vec.push_back(22);
    vec.pop_back();
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(2) << endl;
    return 0;
}