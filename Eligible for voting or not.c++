#include<iostream> 
using namespace std; 
int main() 
{ 
  int age; 
  cout << "Enter age of a user:"; 
  cin>>age; 
  if (age >= 18){ 
  cout << "You are eligible for voting"; 
   }else{ 
  cout << "You are not eligible for voting"; 
  } 
  return 0;
}

OUTPUT:

Enter age of a user:20 
You are eligible for voting
