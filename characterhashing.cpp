#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter the strings : ";
    cin >> s;

    int hash[26]={0};
    for (int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while (q--){
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}