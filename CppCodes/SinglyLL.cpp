#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
    Node (int v){
        value=v;
        next=NULL;
    }
};

void insertAtStarting(Node* &Head,int v){
    Node* newElement=new Node(v);
    newElement->next=Head;
    Head=newElement;
}

void insertAsIthNode(Node* Head,int i, int j){
    Node* newElement=new Node(j);
    int k=2;
    Node* temp=Head;
    while (k<i){
        temp=temp->next;
        k++;
    }
    newElement->next=temp->next;
    temp->next=newElement;
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
    int j;
    for(int i=0;i<10;i++){
        cout<<"Enter "<<i+1<<"th Element Here : ";
        cin>>j;
        insertAtStarting(Head,j);
    }
    insertAsIthNode(Head,4,11);
    cout<<"Kindly if you want to enter starting element use That function. "<<endl;
    display(Head);
}