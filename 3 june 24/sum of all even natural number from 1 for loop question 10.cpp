// Write a program to find sum of all even numbers between 1 to n
#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"enter a number to find sum of all natural even numbers till given number:";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0)
	 sum=sum+i;	
	}
	cout<<"total sum of alleven natural numbers is :"<< sum;
	
}
