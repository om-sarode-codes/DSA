#include<iostream>
using namespace std;


void linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"key idx number : "<< i;
            return;
        }
    }
    cout<<"key not found !";


}
int main(){
    int arr[]={55,78,98,56,15,25,47};
    int n=sizeof(arr)/sizeof(int);
    linearsearch(arr,n,9);

    

    return 0;
}