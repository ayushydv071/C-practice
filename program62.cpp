 #include<iostream>
 #include<climits>
 using namespace std;
 int main(){
    int size = 5;

    int num[size];
    
    int smallest = INT_MAX;

    int largest = INT_MIN;

    for (int i=0; i<size; i++){
        cin >> num[i];
    }
    for (int i=0; i<size; i++){
        smallest = min(num[i], smallest);
        largest = max(num[i],largest);
    }
    cout << "Smallest is :" << smallest << endl;
    cout << "Largest is :" << largest << endl;
    return 0;

 }