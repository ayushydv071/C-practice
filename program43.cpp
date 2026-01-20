 #include<iostream>
 using namespace std;
 int MinOfTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
    }
    int main(){
        cout << MinOfTwo(10,5) << endl;
        return 0;   
 }