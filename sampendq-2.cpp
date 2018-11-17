#include<iostream>
using namespace std;

int devisi(int B[15],int l)
{
	int x=0,y,k=0;
 	for(x;x<l;x++)/*primary loop to choose the primary element that divides the other elements(we check whether this can divide all elements) */
	{	
		y=0;/*for finding whether the number can divide every other number we need to set the number that is being divided to initial position k is number of elements that can be divided by one considered element*/
		k=0;/*we need to set this number if elements divisible to zero after every time the secondary loop runs*/
		for(y;y<l;y++)/*secondary loop to check the whether the primary element taken can divide the other elements*/ 
		{
			if(B[y]%B[x]==0)//checking whether the reminder of division is zero 
			k++;//if the reminder is zero then we increament the value of k
		}
		if(k==l)/*if the number of elements that can be divided by primary element is equal to the number of elements in the loop*/
		return B[x];/*then this element is returned*/
	}
	return -1;/*this part of code will be excecuted if the above return statement is not invoked(happens) this -1 impies that none of the elements in the array is a common factor of all other*/
}

int main()
{
	int n,A[15],i;
	cout<<"\n Enter the number of elements you want to be inputted into the array";
	cin>>n;
	cout<<"\nEnter the elements of the array\n#######################################################################\n";
	for(i=0;i<n;i++)//loop to recevieve the elements into the array
	{
		cout<<"enter the element at the position "<<i+1<<":";//
		cin>>A[i];
	}
	cout<<devisi(A,n)<<endl;//calling the function
	return 0;
}
