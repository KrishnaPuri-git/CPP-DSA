#include<iostream>
#include<bits/stdc++.h>

#include<string>
#include<algorithm>
using namespace std;

int main(){
    /*
    cout<<'a'-'A'<<endl;
    string str="UppERlOwEr";

    //convert to upper case

    for(int i=0; i<sizeof(str); i++){

        if(str[i]>='a' && str[i]<='z'){ // convert to upper case

            str[i]=str[i]-32;
        }
    }

    cout<<str<<endl;

    str="UppERlOwEr";
    for(int i=0; i<sizeof(str); i++){

        if(str[i]>='A' && str[i]<='Z'){ // conv to low case

            str[i]=str[i]+32;
        }
    }
    cout<<str<<endl;
    */

    // using buit-in func

    string str="RAceCAr";

    transform(str.begin(),str.end(),  str.begin(), ::toupper);
    cout<<str<<endl;
    //transform from begin, to end, do it from ind begin, and in uppercase

    str="RAceCAr";
    transform(str.begin(),str.end(),  str.begin(), ::tolower);
    cout<<str<<endl;

return 0;
}