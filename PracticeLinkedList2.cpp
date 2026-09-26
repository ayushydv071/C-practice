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
void InsertAtBegin(Node* &head,int value){
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
}

void InsertAtLast(Node* &head,int value){
    Node* newnode = new Node(value);
    Node* temp = head;
    if (head == NULL){
        head = newnode;
        return;
    }
    while (temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void InsertAtPosition(Node* &head,int value,int pos){
    Node* newnode = new Node(value);
    if (pos==0){
        newnode->next = head;
        head = newnode;
        return;
    }
    Node* temp = head;
    for (int i=0; i<pos-1; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next=newnode;

}

void printList(Node* head){
    Node* temp = head;
    while (temp != NULL){
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
    cout << "Original List: ";
    printList(head);
    cout << "After Insertion: ";
    InsertAtBegin(head,5);
    printList(head);
    cout << "After Insertion at last: ";
    InsertAtLast(head,50);
    printList(head);
    cout << "After Insert at a pos: ";
    InsertAtPosition(head,25,3);
    printList(head);
    return 0;
}