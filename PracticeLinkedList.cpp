#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};
void printList(Node* head){
    Node* temp = head;
    while (temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    vector<int> arr = {10,20,30,40};
    Node* head = nullptr;
    Node* tail = nullptr;
    for (auto x : arr){
        Node* newnode = new Node(x);
        if (head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    printList(head);
    return 0;
}
