/*
 sets are of two types  - sets contains unique elems and are of 2 types- ordered set and unordered set
 
 1. ordered set-

 *contains unique elem.s 
 * implemented using balanced BST
 * elem.s are in sorted order
 * randeom access( like arr[i]) isnt possible
 * present in #include<set> header file
  
  Implementation-

  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.erase(2); //removes 2
  
  //set will not insert duplicate elems


  size-

  cout<<s.size();

  print -

  for( auto i = s.begin(); i != s.end(); i++){
      cout<<*i<<", ";
  }
  cout<<endl;

  reverse print-

  for( auto i = s.rbegin(); i != s.rend(); i++){
      cout<<*i<<", ";
  }
  cout<<endl;


  to print the elems in desc order use greater<int> in declaration-
   set<int, greater<int>> set1;

  lower and upper bound-

   lower_bound(val) and upper_bound(val) (return elems from inside set just next lesser or greater respectively(or s.end if upper bound not preset i.e elem is greatst in set))

Multiset:-
-can contain duplicates 
-implemented using bst
-elems stored in sorted order
-random access not possible
-#include<set> is header file

*Implementation is same just declare like-
- multiset<int> multiset1;
- multiset1.erase(3) will remove all 3s from multiset(including duplicate 3s)
- multiset1.find(3) gives index of first occurence of 3 multiset1.erase(multiset1.find(3)); will del first occured 3

Unorderd set-
-contains unique elems
-implemented using hashing
-elems are not in sorted order
-random access not possible
-#include<unordered_set> is header file

rest all same as set but no concept of lower and upperbound
*/