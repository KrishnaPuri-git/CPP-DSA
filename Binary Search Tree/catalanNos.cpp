#include<bits/stdc++.h>
using namespace std;
//applications-
//https://www.youtube.com/watch?v=0pTN0qzpt-Y

//yt tech dose catalan no 3 mthds

/* HOW TO CLAC CAT. NOS.

    1) c(0)=c(1)=1
    2) c(2)= c(0)c(1) + c(1)c(0)    -first c goes from 0 to n-1, second c goes opposite(n-1 to 0)
    3) c(3)= c(0)c(2) + c(1)c(1) + c(2)c(0)
    4) c(4)= c(0)c(3) + c(1)c(2) + c(2)c(1) +c(3)c(0)

    also notice here in c(4) the first and last terms i.e c(0)c(3) & c(3)c(0) and also 2nd and 2nd last 
    will be having same value so these formulas are symetric

    c(n) = c(0)c(n-1) + c(1)c(n-2) + ..... c(n-1)c(0)
*/

//mthd 1- recursion
int catalan(int n){

    if(n<=1){
        return 1;
    }

    int res=0;
    for(int i =0; i<=n-1; i++){
        res= res+ ( catalan(i)*catalan(n-i-1) );
    }

    return res;
}

int main(){
    for(int i=0; i<10; i++){
        cout<<catalan(i)<<", ";
    }
    cout<<endl;

return 0;
}

/* how many um=nique bst are possible with given 'n' nodes-

    pass the n value in catlan no. claculator (use one of 3 mthds from cat.cpp) and the
    result( nth catlan term = no of unique trees that can be built using n nodes)
    
*/
