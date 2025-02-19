#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* previousi;
    Node* next;
    Node (int v){
        value=v;
        previousi=NULL;
    };
};

void appendInStarting(Node* &ending,int i){

    Node* starterElement= new Node(i);
    starterElement->previousi=ending;
    ending=starterElement;

};

void appendInEnding(Node* &Head,int j){

    Node* endingElement=new Node(j);
    endingElement->next=endingElement;
    Head=endingElement;

}

void display(Node* ending){ //Try &ending also

    Node* tmp=ending;

    while (tmp!=NULL) {
        cout<<tmp->value<<endl;
        tmp=tmp->previousi;
    }

};

int main(){

    Node* Head=NULL;
    appendInStarting(Head, 10);
    appendInStarting(Head, 20);
    appendInEnding(Head, 50);
    appendInStarting(Head, 30);
    display(Head);
}