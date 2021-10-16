#include <iostream>
 using namespace std; 
int main() 
{ int data[5];
  cout << "Enter elements: "; 
  for(int i = 0; i < 5; ++i) 
    cin >> data[i]; 
  cout << "You entered: "; 
  for(int i = 0; i < 5; ++i) 
    cout<<endl<<*(data+i);
  

Output

Enter elements:1
2 
3 
5 
4 
You entered: 1 
2 
3 
5 
4
