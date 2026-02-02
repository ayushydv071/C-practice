//all pairs functions
#include<bits/stdc++.h>
using namespace std;
void undrstndpairs(){
    pair<int,int> p={1,3};
    cout << p.first << " " << p.second << endl;

}
void nestedpair(){
    pair<int, pair<int,int>> p1={1,{2,3}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;
}
void arryPair(){
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout << arr[1].second << " " << arr[2].first << " " << arr[2].second << endl;
}
int main(){
    undrstndpairs();
    nestedpair();
    arryPair();
    cout << endl;
    return 0;

}