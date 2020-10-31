#include<iostream>
using namespace std;
int main()
{
	unsigned int n=0;
	int j=-1, f=0;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		f=(j*i)+f;
		j=j*(-1);
	}
	cout<<f;
	return 0;
}
