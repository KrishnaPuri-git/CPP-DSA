// better approach available with divide and concur
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void multiply(int r1, int c1, int r2, int c2){

    int mat1[r1][c1];

    for(int i=0; i<r1; i++){

        for(int j=0; j<c1; j++){

            cout<<"Enter Elem="<<endl;
            cin>>mat1[i][j];

        }
    }

    int mat2[r2][c2];

    for(int i=0; i<r2; i++){

        for(int j=0; j<c2; j++){

            cout<<"Enter Elem="<<endl;
            cin>>mat2[i][j];

        }
    }

    int ans[r1][c2];

    for(int i=0; i<r2; i++){

        for(int j=0; j<c2; j++){

            ans[i][j]=0;
        }
    }

    for(int i=0; i<r1; i++){

        for(int j=0; j<c2; j++){

            for(int k=0; k<c1; k++){

                ans[i][j]=ans[i][j]+( mat1[i][k] * mat2[k][j]);
            }

        }
    }

    for(int i=0; i<r1; i++){

        for(int j=0; j<c2; j++){

            cout<<ans[i][j]<<" ";

        }
        cout<<endl;
    }
}

int main(){

    cout<<"enter r1 and c1="<<endl;
    int r1,c1; cin>>r1>>c1;

    cout<<"enter r2 and c2="<<endl;
    int r2,c2; cin>>r2>>c2;

    multiply(r1, c1, r2, c2);

return 0;
}