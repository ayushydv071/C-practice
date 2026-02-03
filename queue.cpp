//all queue operations
#include<bits/stdc++.h>
using namespace std;
void queueOperations(){
    queue<int> q;
    int arr[]={1,4,7,2,5,8,3,6,9};
    for (int i : arr){
        q.push(i);
    }
    q.back()+=5;
    cout << q.back() << endl; 
    cout << q.front() << endl;
    cout << "size : " << q.size() << endl;

}
int main(){
    queueOperations();
    cout << endl;
    return 0;
}