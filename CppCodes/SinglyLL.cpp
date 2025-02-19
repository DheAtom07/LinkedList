#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node* next;
    Node (int v){
        value=v;
        next=NULL;
    }
};
void insertAtStarting(Node* &Head,int v)
{
    Node* newElement=new Node(v);
    newElement->next=Head;
    Head=newElement;
}
void insertAtEnd(Node* Head,int j)
{
    Node* element=new Node(j);
    Node* tmp=Head;
    while (tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=element;
    tmp->next->next=NULL;
}
void insertAsIthElement(Node* Head,int i, int j)
{
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
void deleteIthElement(Node* Head,int i)
{
    Node* temp=Head;
    for( int k=1 ; k < i-1 ; k++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
void display(Node* Head)
{
    Node* temp=Head;
    while (temp!=NULL){
        cout<<" -> "<<temp->value;
        temp=temp->next;
    }
}
void deleteElement(Node* Head,int j,int i=1)
{                     // Deletes ith repetation of j
    int counter1;
    // cout<<"Hello";
    counter1=0;
    Node* temp=Head;
    while (counter1<i){
        temp=temp->next;
        if (temp->next->value==j){
            counter1++;
        }
        cout<<"Hello";
        if (temp==NULL) {
            cout<<"Hag diyaa ...."<<endl;
            break;
        }
    }
    temp->next=temp->next->next;
}
int main(){
    Node* Head=NULL;
    int j;
    for(int i=0;i<10;i++){
        cout<<"Enter "<<i+1<<"th Element Here : ";
        cin>>j;
        insertAtStarting(Head,j);
    }
    insertAsIthElement(Head,4,11);
    // deleteIthElement(Head,7);
    deleteElement(Head, 4);
    insertAtEnd(Head,111);
    cout<<"Kindly if you want to enter starting element use That function. "<<endl;
    display(Head);
}