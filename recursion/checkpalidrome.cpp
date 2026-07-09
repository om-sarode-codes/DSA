#include<iostream>
using namespace std;
bool palindrome(string str,int st,int end){

    if(st>=end){
        return true;
    }

    if(str[st]!=str[end]){
        return false;
    }


    return palindrome(str,st+1,end-1);

    

}

int main(){
    string str="racecar";
   if(palindrome(str,0,str.size()-1)){
       cout<<"palindrome";
       
    }else{
        cout<<"not palindrome";
    }


    return 0;
}