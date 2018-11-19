#include<iostream>
using namespace std;
int main()
{
	int A[10][10],m,n,i,j;
	cout<<"\nEnter the dimension of the matrix(m by n)";
	cin>>n>>m;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
	cout<<"Enter the element at the position"<<n<<","<<m<<":";
	cin>>A[i][j];
	}
	return 0;
}
