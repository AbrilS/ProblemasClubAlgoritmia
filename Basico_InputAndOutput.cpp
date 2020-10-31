#include<iostream>
using namespace std;
int main()
{
	int array[3], sum=0;
	for(int i=0; i<3; i++)
	{
		cin>>array[i];
		sum=sum+array[i];
	}
	cout<<sum;
	return 0;
}
