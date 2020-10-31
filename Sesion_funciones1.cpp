#include<iostream>
using namespace std;

int arr[5];

void multiarreglo(int a)
{
	for(int i=0; i<5; i++)
	{
		arr[i]*=a;
	}
}
int main()
{
	int x=0, y=0;
	for(int i=0; i<5; i++)
	{
		cin>>arr[i];
	}
	cin>>x>>y;
	multiarreglo(x); 
	multiarreglo(y);
	for(int j=0; j<5; j++)
	{
		cout<<arr[j]<<" ";
	}
	return 0;
}
