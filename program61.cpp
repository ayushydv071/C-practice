#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[]={10,25,54,1,6,-85,74};
    int size=7;
    
    int smallest = INT_MAX;
    for (int i=0; i<size; i++){
        if (num[i] < smallest){
            smallest = num[i];
        }
    }
    cout << "Smallest number is :" << smallest << endl;
    return 0;
}