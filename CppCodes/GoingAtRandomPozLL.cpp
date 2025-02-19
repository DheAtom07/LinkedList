#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
    Node (int i){
        value=i;
        next=NULL;
    }
};

void insertValueAtPoz(Node* &Head,int j, int val){

    Node* insertElementAt=new Node(val);
    Node* tmp=Head;
    int foo=0;
    while (foo<j-1){
        tmp=tmp->next;
    };
    Node* tmp_1=tmp;
    tmp=insertElementAt;
    insertElementAt=tmp_1;
    cout<<"Hello";

};

void display(Node* Head){
    Node* sigmaMale=Head;
    cout<<"Hello";
    while (sigmaMale!=NULL){
        cout<<sigmaMale->value<<endl;
        sigmaMale=sigmaMale->next;
    }
};

int main(){
    Node* Head=NULL;
    insertValueAtPoz(Head,1,1);
    insertValueAtPoz(Head,2,2);
    insertValueAtPoz(Head,3,3);
    insertValueAtPoz(Head,4,4);
    insertValueAtPoz(Head,5,5);
    display(Head);
}