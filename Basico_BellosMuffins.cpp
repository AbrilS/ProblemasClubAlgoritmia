#include<iostream>
using namespace std;
int main()
{
	int N=0, M=0, r=0, res=0;
	cin>>N;
	cin>>M;
	r=N/M;
	res=N%M;
	cout<<res+r;
	return 0;
}
