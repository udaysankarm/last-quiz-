#include<iostream>
#include<cstring>
using namespace std;
bool compare(char F[],int* T)
{
	int j=-789,i=0;
	for(i=0;F[i]!='\0';i++)
	{
		if((int)F[i]!=*(T+i))
		{
			j=23;
			break;
		}
	}
	if(j==-789)
	return 1;
	else
	return 0;
}
void convert(char *O,int *K)
{
	int i;
	for(i=0;*(O+i)!='\0';i++)
	{	
		*(K+i)=(int) *(O+i);
	}
	K[i]=-1;
}
class code
{
	private:
	int pas[20];
  char name[20];
	void namech()
	{
		cout<<"\nEnter your name(without space in between characters):";
		cin>>name;
	}
	double AccNo;
	public:
	void Acess();
	void SetP();
};
void code::Acess()
{
	char R[20];
	int g;
	cout<<"Enter the password:";
	cin>>R;
	if(compare(R,pas))
	{
		cout<<"1.change name \t 2.change password\n 3.change AccNo\t 4.exit\n input either of the numbers";
		cin>>g;
		if(g==1)
		namech();
		else if(g==2)
		SetP();
		/*else if(g==3)
		Accch();*/
		else if(g==4)
	  cout<<"\n thank you user\n";
		else
		cout<<"!!!!!!!!!!!!!!!!!!!!!!!!\nEnter any of the above given numbers\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	}
	else
	cout<<"!!!!!! Incorrect password!!!!!!!!!!";
}
void code::SetP()
{
	char Z[20];
	cout<<"\nEnter your password:";
	cin>>Z;
	convert(Z,pas);
	
}

int main()
{
	code X;
	char B[20];
	char A[20];
	int i,D[20];
	X.SetP();
	X.Acess();
	/*cout<<"Enter a string:";
	cin>>B;
	convert(B,D);
	for(int i=0;D[i]!=-1;i++)
	cout<<(char)D[i];*/
	return 0;
}
