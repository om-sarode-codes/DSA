#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    string str = "hello";
    string str1="hello";


   if(str.length()!=str1.length()){
    cout<<"not qual";
    return 0;
   }
    
   for(int i=0;i<str.length();i++){
    if(str[i]!= str1[i]){
        cout<<"not qual to";
        return 0;
    }
   }

   cout<<"equal string ";

    return 0;
}
