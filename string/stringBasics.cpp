#include<bits/stdc++.h>
// #include<string_view>

//https://www.geeksforgeeks.org/starts_with-and-ends_with-in-c20-with-examples/
using namespace std;

int main(){
    /*
    string str; cin>>str; cout<<str<<endl;

    string str2(3,'w');// cant have only a single  char
    cout<<str2<<endl;

    string str3="krishna";
    cout<<str3<<endl;
    */
    
    /*
    string str4;
    cout<<"enter str4=";
    getline(cin,str4);// for spaces like input krishna puri
    cout<<str4<<endl;
    */

   /*
   string s1="fam"; string s2="ily";
   cout<<s1+s2<<endl;
   s1.append(s2);//or s1=s1+s2;
   cout<<s1<<endl;
   
   cout<<s1[1]<<endl;
   */

  /*
  string abc="erjfgwehfhiefe hfcwefifherinyr fhwefwif";
  cout<<abc<<endl;

  abc.clear();// clears the entire string
  cout<<abc<<endl;
  if(abc.empty()){
      cout<<"empty string"<<endl;
  }
  */
 /*
 string s1="abc", s2="xyz" , s3="abc";
 cout<< s2.compare(s1)<<endl; //tells s1 - s2  +ve  if s1>s2 , -ve if s1<s2 , o if equal
 cout<< s1.compare(s3)<<endl;
 */

string s1="teslacar";
//s1.erase(3,2); //delete 3 characters after ind 2
//cout<<s1<<endl;

int firstind = s1.find("sla");
cout<<firstind<<endl;

s1.insert(5,"motors");
cout<<s1<<endl;

cout<<"size="<<s1.size()<<" length="<<s1.length()<<endl;//same h dono

s1="teslamotorscar";
string subst=s1.substr(2,4);// ind , no of chars 
cout<<subst<<endl;

string stoint="69420";
int i= stoi(stoint) * -1; // * -1 to prove its conveted to int
cout<<"stoi="<<i<<endl;

int itostr=20042001;
cout<<to_string(itostr)+" converted "<<endl;

string revstr="hello bhai";
reverse(revstr.begin(),revstr.end());
cout<<"revstr="<<revstr<<endl;


string unsortedStr= "maachoddo";//#include<algorithm>
sort(unsortedStr.begin(), unsortedStr.end());
cout<<unsortedStr<<endl;

string prefix="space";
string checkStr= "spacexrocket";

//if(checkStr.starts_with(prefix))


return 0;
}
