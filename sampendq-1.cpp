#include<iostream>
using namespace std;
int findPrefix(char *A1,char *A2) //function receving two of the character pointers
{
	int i=0;
	if(*A2=='c')/*if the second strings begining is passed as A2 then we have to find the position at which the first element of two strings are equal*/ 
	{
		for(i=0;*(A2+i)!='\0';i++) //for loop to find the first equalence of elements
		if(*A1==*(A2+i))//when we find the first element id A2 that is equal to that of A1 
		{
			A2=A2+i;// we modify the begining of the second function to be at the above mentioned positions  
		}
	}
	if(*(A1)!=*(A2))//checking whether the element is A2 and A1 are unequal
	return 0;//if they are unequal then it is point at which the recursion  stops  
	else
	return 1+findPrefix(A1+1,A2+1);/*each call of the function signifies one common element between A1 and A2. there for we add one to the returned value*/ 
}
int main()
{
	char A[]="rehe";//first string whose presence as a sub-string is to be checked
	char B[]="comprehension";//second string
    cout<<findPrefix(A,B);               //calling the function
	return 0;
}
