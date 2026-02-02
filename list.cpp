//all operations in a list
#include<bits/stdc++.h>
using namespace std;
void operationsInList(){
    list<int>ls;
    ls.push_back(2);
    ls.push_back(5);
    ls.push_back(7);
    ls.push_front(0);
    for (auto i : ls){
        cout << i << " ";
    }
    cout << endl;
    ls.pop_back();
    cout << "After poping list is : ";
    for (auto i : ls){
        cout << i << " ";
    }
    cout << endl;
    list<int> ls1={10,20,60,57};
    ls.swap(ls1);
    cout << "After swap our list is : ";
    for (auto i : ls){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    operationsInList();
    cout << endl;
    return 0;

}
