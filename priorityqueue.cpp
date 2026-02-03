//priority Queue all operations 
//max heap 
#include<bits/stdc++.h>
using namespace std;
void priorityQueueOperations(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(15);
    pq.push(36);
    pq.push(99);
    cout << "size : " << pq.size() << endl;
    cout << "top element : " << pq.top() << endl;
    cout << "Priority Queue is : ";
    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

}
int main(){
    priorityQueueOperations();
    cout << endl;
    return 0;
}