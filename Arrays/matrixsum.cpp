#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    int n=3;int m=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"matrix : "<<arr[i][j]<<" ";;
        }
    }
    cout<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"matrix sum : "<<sum;



   
    return 0;
}