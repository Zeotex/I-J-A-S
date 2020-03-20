#include<stdio.h>
#include<iostream>
int main()
{	
	int n,i,j;
	float sum=0,fact=1;
	cout<<"Enter Length of the series:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+i/fact;
		fact=1;
	}
	cout<<"Sum of the series is:"<<sum;
}