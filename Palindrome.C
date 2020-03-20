#include<iostream>
using namespace std;
{
  Int n, num, digit,rev=0;
  Cout<<"Enter a whole number :";
  Cin>>num;
  n=num;
  do
  {
    digit=num%10;
    rev=(rev*10)+digit;
    num=num/10
  } while(num!=0);
  if (n==rev)
  cout<<"Number is a palindrome";
  else
  cout<<"Try another number";
  return 0;
}