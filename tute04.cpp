/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/
#include <iostream>
using namespace std;

long Factorial(int no);
long nCr(int n, int r)
{
  int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
     
    int o,k=1;
    for(o=1;i<=r;o++)
    {
        k=k*o;
    } 
  
    int h,l=1,a;
     a=n-r;
    for(h=1;i<a; h++)
    {
        l=l*h;
    }
    return f/k*l;
}

int main() 
{
  int n,r;
  
  std::cout << "Enter a value for n ";
  std::cin >> n;
  
  std::cout << "Enter a value for r ";
  std::cin >> r;
  
  std::cout << "nCr = ";
  
  std::cout << nCr(n,r);
  
  std::cout << std::endl;
  return 0;
}