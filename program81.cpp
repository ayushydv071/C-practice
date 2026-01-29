#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={45,56,89,78,12,36,99,45,78};
    int Largest = INT_MIN;
    for (int i: vec){
        if (i>Largest){
            Largest=i;
        }
    }
    cout << Largest << endl;
    return 0;

}
