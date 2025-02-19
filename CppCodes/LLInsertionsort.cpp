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
void insertionSort(Node* Head)
{
    Node* iterNode=Head;
    Node* iterInner=Head;
    int valOfInsert;
    cout<<"1"<<endl;
    while (iterNode!=NULL){
        if (iterNode->next==NULL){
            break;
        }
        valOfInsert=(iterNode->next)->value;
        iterNode->next=(iterNode->next)->next;
        Node* temp=new Node(valOfInsert);
        // cout<<"2"<<endl;

        while (iterInner->next!=NULL && iterInner->next->value<valOfInsert){
            cout<<"3"<<endl;
            iterInner=iterInner->next;
        }
        temp->next=iterInner->next;
        iterInner->next=temp;
    }
}
void display(Node* Head)
{
    Node* temp=Head;
    while (temp!=NULL){
        cout<<" -> "<<temp->value;
        temp=temp->next;
    }
}
int main(){
    Node* Head=NULL;
    insertAtStarting(Head,10);
    insertAtStarting(Head,20);
    insertAtStarting(Head,90);
    insertAtStarting(Head,60);
    insertAtStarting(Head,40);
    insertAtStarting(Head,30);
    display(Head);
    insertionSort(Head);
    display(Head);

}