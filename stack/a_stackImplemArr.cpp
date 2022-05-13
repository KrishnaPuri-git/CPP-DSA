//implementation of stack using array
#include <bits/stdc++.h>
using namespace std;

#define SIZE 5
int A[SIZE];
int top = -1;

bool empty()
{
  if(top==-1)
  return true;
  else
  return false;
}

void push(int value)
{
  if(top==SIZE-1)
    cout<<"Stack overflow \n";

   else{
    top++;
    A[top]=value;
  }
}

void pop()
{
 if(empty())
  cout<<"Stack underflow\n";
 else
  top--;
}

void show_top()
{
 if(empty())
  cout<<"Stack is empty!\n";
 else
  cout<<"Element at top is: "<<A[top]<<"\n";

}

void displayStack()
{
  if(empty())
    cout<<"Stack is empty!\n";

 else{
  for(int i=0 ; i<=top; i++)
    cout<<A[i]<<" ";

    cout<<"\n";
  }

}

int main()
{
  int choice, flag=1, value;
  while( flag == 1)
  {
    cout<<"\n1.PUSH 2.POP 3.SHOW_TOP 4.DISPLAY_STACK 5.EXIT\n";
    cin>>choice; 
    switch (choice){
      case 1: cout<<"Enter Value:\n";
      cin>>value;
      push(value);
      break;
      
      case 2: pop();
      break;
      
      case 3: show_top();
      break;

      case 4: displayStack();
      break;

      case 5: flag = 0;
      break;
    }
  }
  return 0;
}