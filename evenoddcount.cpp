#include<bits/stdc++.h>
using namespace std;
void EvenOddCount(vector<int> v){
    int evenCount=0;
    int oddCount=0;
    for (auto i=0; i < v.size(); i++){
        if(v[i]%2==0){
            evenCount+=1;
        }else{
            oddCount+=1;
        }
    }
    cout << "Even numbers in vector : " << evenCount << endl;
    cout << "odd numbers in vector : " << oddCount << endl;
}
int main(){
    vector<int> v;
    int n;
    cout << "Enter size : ";
    cin >> n;
    cout << "Enter elements : ";
    for (auto i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    EvenOddCount(v);
    cout << endl;
    return 0;
}