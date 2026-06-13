#include <iostream>
#include<cstring>
using namespace std;

void uppercase(char str[],int n){
       for(int i=0;i<n;i++){
        char ch=str[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }else{
            str[i]=ch-'a'+'A';
        }
    }
}

int main(){
    char str[]="ApPle";
    uppercase(str,strlen(str));
    cout<<str;


}