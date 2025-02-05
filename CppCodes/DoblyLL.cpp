#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
    Node* previous;
    Node(int v){
        value=v;
        next=NULL;
        previous=NULL;
    }
};

void insertInBeginning(Node* &Head,Node* &Back,int a){
    Node* tempnode=new Node(a);
    tempnode->next=Head;
    Back=tempnode;
    Head=tempnode;
    Back=Head;
}

void display(Node* Head){
    Node* temp=Head;
    while (temp!=NULL){
        cout<<" -> "<<temp->value;
        temp=temp->next;
    }
}

int main(){
    Node* Head=NULL;
    Node* Back=NULL;
    int j;
    for(int i=0;i<10;i++){
        cout<<"Enter "<<i<<" th Element : ";
        cin>>j;
        insertInBeginning(Head,Back,j);
    }
    display(Head);
}