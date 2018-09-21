#include <iostream>
using namespace std;

int main()
{
	int arr[100];
	int n,t,nos,num,dump,repeat;
	int i=0;
	
	
	cout<<"Input the size of the stack:\n";
	cin>>n;
	
	int top = -1;
		
	label:
	cout<<"\nSelect the operation number you want to perform:\n 1. Push\n 2. Pop\n 3. Peek\n 4. Print\n";
	cin>>t;

	
	switch (t)
	{
		case 1:
		{	if (top == n-1)
			{
				cout<<"Stack Overflow!";
			}
			else
			{
			cout<<"\nEnter the elements to be pushed: ";
				top++;
				cin>>arr[top];
			}
			break;
		}
			
		case 2:
		{
			if (top == -1)
			{
				cout<<"Stack Underflow!";
			}
			else
			{	
				dump = arr[top];
				top--;
				cout<<"The elements have been poped out! \n";
			}
			break;
		}
			
		case 3:
			cout<<"\nThe topmost element of the stack is ";
			cout<< arr[top];
			break;
			
		case 4:
			cout<<"\n";
			cout<<"The elements in stack are: ";
			for(i=0;i<=top;i++)
			{
				cout<<arr[i];
				cout<<"\t";
			}
	}
	cout<<"\n\nWant to do it again?\n 1. YES. \n 2. NO.\n";
	cin>>repeat;
	if (repeat==1)
		{goto label;}
	else
		{ goto exit;}
	
	exit: ;

}
