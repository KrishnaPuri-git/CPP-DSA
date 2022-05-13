#include <bits/stdc++.h>
using namespace std;

int lvl(int cubesleft){

    int i=1, lvl =0;
    while(cubesleft > 0){

        cubesleft = cubesleft - ((i*(i+1))/2);
        
        if(cubesleft<0){
            break;
        }
        
        i++;
        lvl++;
    }
    return lvl;
}

int main(){

    int cubes; cin>>cubes;
    cout<<lvl(cubes)<<endl;
    
return 0;
}