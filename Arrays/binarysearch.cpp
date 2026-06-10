#include<iostream>
using namespace std;


void binaryserach(int arr[],int n,int key){
    int st=0;
    int end=n-1;
    while (st <= end)
    {
        int mid=(st+end)/2;
        if(arr[mid] == key){
            cout<<"Found key at index:: "<<mid;
            return;
            
        }else if(arr[mid] < key){
            st=mid+1;
        }else{
            end=mid-1;
        }
      
    }
    

    


}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    binaryserach(arr,n,40);

    

    return 0;
}