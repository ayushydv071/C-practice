//all stack operations
#include<bits/stdc++.h>
using namespace std;
void operationsStack(){
    stack<int> st={5,6,7,8};
    st.push(1);
    st.push(15);
    for (auto i : st){
        cout << i << " ";
    }
    cout << endl;
    st.pop();
    for (auto i : st){
        cout << i << " ";
    }
    cout << endl;

    stack<int> st1={17,15,11};
    st.swap(st1);
    for (auto i : st){
        cout << i << " ";
    }
    cout << endl;
    cout << "size of stack is : " << st.size() << endl;
    cout << "is stack empty : " << st.empty() << endl;
    cout << "it will print the top element : " << st.top() << endl;


}
int main(){
    operationsStack();
    cout << endl;
    return 0;
}