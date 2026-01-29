#include<iostream>
using namespace std;
int numbercheck(int arr[], int size){
    int x=5;
    int count=0;
    for (int i=0; i<size; i++){
        if(arr[i]==x){
            count+=1;
        }
    }
    return count;
}
int main(){
    int size;
    cout << "size will be : ";
    cin >> size;
    int arr[size];
    for (int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "x comes in array " << numbercheck(arr,size) << " times" << endl;
    return 0;
}