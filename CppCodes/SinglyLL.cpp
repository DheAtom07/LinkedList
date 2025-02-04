#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
    Node(int v){
        value=v;
        next=NULL;
    }
};

void insertAtStarting(Node*Head,int v){
    Node* newElement=new Node(v);
    newElement->next=Head;
    Head=newElement;
}

void display(Node* Head){
    Node* temp=Head;
    while (temp!=NULL){
        cout<<temp->value<<"->"<<" ";
        temp=temp->next;
    }
}

int main(){

    Node* Head=NULL;
    int j;
    for(int i=0;i<10;i++){
        cin>>j;
        insertAtStarting(Head,j);
    }
    display(Head);
}