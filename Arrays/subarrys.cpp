#include <iostream>
using namespace std;

void sumofsubarrays(int arr[],int n){

   for(int st=0;st<n;st++){
    for(int end=st;end<n;end++){
        int sum=0;
        for(int i=st;i<=end;i++){
            sum=sum+arr[i];
        }
        cout<<"sum of subarrys :"<<sum<<endl;
    }
    cout<<endl;
   }
}

int main(){
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(int);
     sumofsubarrays(arr,n);
    return 0;
}