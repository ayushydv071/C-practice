// minimum priority queue all operations
// min heap
#include<bits/stdc++.h>
using namespace std;
void MinHeap(){
    priority_queue<int , vector<int>, greater<int>> pq;
    pq.push(15);
    pq.push(10);
    pq.push(53);
    pq.push(11);
    cout << "Size : " << pq.size() << endl;
    cout << "top element : " << pq.top() << endl;
    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

}
int main(){
    MinHeap();
    cout << endl;
    return 0;
}