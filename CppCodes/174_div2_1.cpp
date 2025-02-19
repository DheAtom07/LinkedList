#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int output[n];
    int checker;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        checker=1;
        if(m!=3 && m!=4){
            int arr1[m-2];
            cin>>arr1[0];
            cin>>arr1[1];
            for(int p=0;p<m-4;p++){
                cin>>arr1[p+2];
                if (arr1[p]==1 && arr1[p+1]==0 && arr1[p+2]==1){
                    checker=0;
                }
            }
            output[i]=checker;
        }else if(m==3){
            int k;
            cin>>k;
            output[i]=checker;
        }else{
            int k;
            cin>>k;
            cin>>k;
            output[i]=checker;
        }
    }
    for(int l=0;l<n;l++){
        if(output[l]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}