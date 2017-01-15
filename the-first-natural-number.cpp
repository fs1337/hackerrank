#include<bits/stdc++.h>
using namespace std;

//GCD(great common divisor)
int gcd(int a, int b)
{
  return (a%b == 0)? b: gcd(b,a%b);
}

//return first number whose factorial divides x
int firstFactorialDivisibleNumber(int x)
{
  int i = 1;
  int new_x = x;
  for(i = 1; i < x; i ++)
  {
    //remove common factors
    new_x/ = gcd(i, new_x);
    
    //we found first 1
    if(new_x == 1)
    {
      break;
    }
  }
  
  return i;
}

int main()
{
  cin>>x;
  cout<<"The first Factorial Divisible Number is "<<firstFactorialDivisibleNumber(x)<<endl;
  return 0;
}
