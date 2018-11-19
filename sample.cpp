#include<iostream>
using namespace std;
int main()
{
	int i,j,s,n,A[20],k,y=0,z;
	cout<<"\nEnter the number of elements that you are going to input into the array:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nthe element at the position "<<i+1<<" is:";
		cin>>A[i];
	}
	cout<<"\nEnter the number k:";
	cin>>k;
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=i;j<n;j++)
		{
			s=s+A[j];
			if(s%k==0)
			{
				/*for(z=i;z<=j;z++)
				cout<<A[z]<<"  ";
				cout<<endl;*/
				y++;
			}
		}
	}
	cout<<"There are "<<y<<" such strings"<<endl;
  for(i=0;i<n;i++)
	{
		s=0;
		for(j=i;j<n;j++)
		{
			s=s+A[j];
			if(s%k==0)
			{
				for(z=i;z<=j;z++)
				cout<<A[z]<<"  ";
				cout<<endl;
				
			}
		}
	}
	
	return 0;
}
