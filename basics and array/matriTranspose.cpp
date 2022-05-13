#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void Transpose(int r, int c){

    int mat[r][c];

    for(int i=0; i<r; i++){

        for(int j=0; j<c; j++){

            cout<<"Enter Elem="<<endl;
            cin>>mat[i][j];

        }
    }


    for(int i=0; i<r; i++){

        for(int j=i; j<c; j++){

            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }

     for(int i=0; i<r; i++){

         for(int j=0; j<c; j++){

             cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    cout<<"enter r and c="<<endl;
    int r,c; cin>>r>>c;
    Transpose(r, c);

return 0;
}