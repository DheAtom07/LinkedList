#include<iostream>
using namespace std;
int arraySum(int arr[]);

int main(){
    int a[10];
    cout<<"Enter 10 elements with space : ";
    for(int i=0;i<10;i++){
    cin>>a[i];
    }
    int answer=arraySum(a);
    cout<<"The sum of all 10 elements is : "<<answer;
    return 0;
}

int arraySum(int arr[]){
    int sum1=0;
    for(int i=0;i<10;i++){
        sum1+=arr[i];
    }
    return sum1;
}
