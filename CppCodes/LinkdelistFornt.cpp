#include<iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node(int val){
        value=val;
        next=NULL;
    };
};

void insertAtFront(Node* &Head, int v){
    Node* frontelement= new Node(v);
    // Head->next=Head;
    frontelement->next=Head;
    Head=frontelement;
}

void display(Node* Head){
    Node* tmp=Head;
    // cout<<"Hello";
    while (Head!=NULL){
        cout<<tmp->value<<endl;
        tmp=tmp->next;
    }
}

int main(){
    Node* Head=NULL;
    insertAtFront(Head,10);
    insertAtFront(Head,20);
    insertAtFront(Head,30);
    display(Head);
    return 0;
}