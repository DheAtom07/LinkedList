#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node* next;
    Node* previous;
    Node(int v){
        value=v;
        next=NULL;
        previous=NULL;
    }
};
void insertFirstElement(Node* &Head,Node* &Back,int v)
{
    Node* tempNode=new Node(v);
    Back=tempNode;
    Head=tempNode;
}
void insertInBeginning(Node* &Head,Node* &Back,int a)
{
    Node* tempnode=new Node(a);
    if (Head==NULL && Back==NULL){
        insertFirstElement(Head,Back,a);
    }
    else{
        tempnode->next=Head;
        Head->previous=tempnode;
        Head=tempnode;
    }
}
void insertInEnding(Node* &Head,Node* &Back,int v)
{
    Node* tempnode=new Node(v);
    if (Head==NULL && Back==NULL){
        insertFirstElement(Head,Back,v);
    }
    else{
        tempnode->previous=Back;
        Back->next=tempnode;
        Back=tempnode;
    }
}
void displayFromFront(Node* Head)
{
    Node* temp=Head;
    while (temp!=NULL){
        cout<<" -> "<<temp->value;
        temp=temp->next;
    }
    cout<<endl;
}
void displayReverseOrder(Node* Back)
{
    Node* tmp=Back;
    while (tmp!=NULL){
        cout<<" -> "<<tmp->value;
        tmp=tmp->previous;
    }
    cout<<endl;
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
    insertInEnding(Head,Back,4000);
    insertInEnding(Head,Back,6900);
    displayFromFront(Head);
    displayReverseOrder(Back);
}