//operation son dequeue
#include<bits/stdc++.h>
using namespace std;
void dequeOperations(){
    deque<int> dq={10,20,30,40,50,60};
    dq.push_back(21);
    dq.push_front(0);
    for (int i : dq){
        cout << i << " ";
    }
    cout << endl;
    dq.pop_back();
    dq.pop_front();
    for (int i : dq){
        cout << i << " ";
    }
    cout << endl;
    deque<int> dq1={14,24,34,44};
    dq.swap(dq1);
    for (int i : dq){
        cout << i << " ";
    }
    cout << endl;
    auto it1 = dq1.begin()+2;
    cout << "Third element of the dequeue is : " << *it1 << endl;
    dq1.insert(dq1.begin()+2,33);
    for (auto i : dq1){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    dequeOperations();
    cout << endl;
    return 0;
}