//all vectors functions
#include<bits/stdc++.h>
using namespace std;
void fnctsvectors(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.emplace_back(10);
    for (auto i : v){
        cout << i << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    v.pop_back();
    for (auto i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << v.empty() << endl;
}
void IterationInVector(){
    vector<int> v1 = {10,20,30,40,50,60};
    for (auto i : v1){
        cout << i << " ";
    }
    cout << endl;
    vector<int>::iterator it = v1.begin();
    cout <<  "Printing the first element of vector : " << *it << " ";
    cout << endl;
    auto it2 = v1.begin()+3;
    cout << "Priting the fourth element of vector : " << *it2 << " ";
    cout << endl;
    auto it3 = v1.end()-1;
    cout << "It will print the last element of the vector : " << *it3 << " ";
    cout << endl;
    vector<int> v2(5,25);
    cout << endl;
    v1.swap(v2);
    cout << "after swap :";
    for(auto i : v1){
        cout << i << " ";
    }
    cout << endl;

}
void moreoperations(){
    vector<int> v2={55,66,77,88,99};
    v2.erase(v2.begin()+1);//it will erase second element
    v2.insert(v2.begin(),44);//it will insert 44 in the begining
    v2.insert(v2.end()-2, 3,87);//it will insert 87 3 times in second last position
    for (auto i:v2){
        cout << i << " ";

    }
    cout << endl;
}
int main(){
    fnctsvectors();
    IterationInVector();
    moreoperations();
    cout << endl;
    return 0;
}