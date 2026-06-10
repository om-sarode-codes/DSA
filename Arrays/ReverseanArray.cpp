#include<iostream>
using namespace std;

int main(){
    int arr[]={55,25,65,47,85};
    int  n=sizeof(arr)/sizeof(int);

    int st=0;
    int end=n-1;
    for(int i=0;i<n;i++){
        if(st < end){
            swap(arr[st++],arr[end--]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  

}