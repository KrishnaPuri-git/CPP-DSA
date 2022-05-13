#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);



    

    for (int i = 0; i < v.size(); i++) // printing elems of vector
        cout << v[i] << " ";

    cout << endl;



    vector<int>::iterator it; // 2nd mthd to iterate
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << endl;




    for(auto element:v){ //3rd mthd
        cout<<element;
    }
    cout<<endl;



    v.pop_back(); //pops the last elem from vector

    vector<int> v2 (3,50); //vector has 3 elems of value 50 v2= 50 50 50




    // sorting vector
    cout<<"sorted v is ="<<endl;

    sort(v.begin(), v.end());
    for(auto element:v){ //3rd mthd
        cout<<element<<" ";
    }
    cout<<endl; 






    //swap values of vector v with v2

    swap(v,v2);
    cout<<"swapped v is="<<endl;

    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl; 



}