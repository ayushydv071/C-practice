//Insert element at the begining of a linklist
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
    while (temp!=nullptr){
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* Insert(Node* head,int value){
    Node* newnode = new Node(value);
    newnode -> next = head;
    head = newnode;
    return head;
}
int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    cout << "List before insertion: ";
    printList(head);
    head = Insert(head,5);
    cout << "List after insertion: ";
    printList(head);
    cout << endl;
    return 0;


}