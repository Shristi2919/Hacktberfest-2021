#include<iostream>
using namespace std;

int global = 5;
void sum(int a) 
{
  a = a+global;
 cout<<global;
}
int main()
{ 
  int global = 9;
  sum();
  cout<<global;
  return 0;
}
