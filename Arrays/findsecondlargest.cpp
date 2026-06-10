#include<iostream>
using namespace std;
int main(){
    int arr[]={84,58,68,52,47};
    int n=sizeof(arr)/sizeof(int);

    int largest=INT32_MIN;
    int secondlargest=INT32_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            secondlargest=largest;
            largest=arr[i];
        }else if(arr[i] > secondlargest && largest != secondlargest){
            secondlargest=arr[i];
        }
    }
    cout<<"second largest number : "<<secondlargest;

}