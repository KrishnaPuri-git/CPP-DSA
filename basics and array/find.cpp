// matric is both row and col wise sorted
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void find(int r, int c, int target){
    
    int mat[r][c];
    for(int i=0; i<r; i++){

        for(int j=0; j<c; j++){

            cout<<"Enter Elem="<<endl;
            cin>>mat[i][j];

        }
    }

    int i=0, j=c-1, flag=0;
    while(i<r && j>=0){

        if(mat[i][j]==target){

            flag=1;
            cout<<i<<" "<<j<<" =Found here"<<endl;
            break;
        }

        else{
            if(target < mat[i][j])
            j--;

            else
            i++;
        }
    }
if(flag==0)
cout<<"not found"<<endl;
}

int main(){

    cout<<"enter r and c and target="<<endl;
    int r,c,target; cin>>r>>c>>target;


    find(r, c, target);

return 0;
}
