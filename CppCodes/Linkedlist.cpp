#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
    Node(int val){
        value=val;
        next=NULL;
    }
};

void insertAtStarting(Node* &head,int v){
    Node* node1=new Node(v);
    node1->next=head;
    head=node1;
}

void display(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->value<<endl;
        tmp=tmp->next;
    }
    delete tmp;
}
int main(){

    Node* head=NULL;
    insertAtStarting(head,10);
    insertAtStarting(head,20);
    insertAtStarting(head,30);
    display(head);
    delete head;
    return 0;
}