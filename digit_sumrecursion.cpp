
#include<bits/stdc++.h>
using namespace std;
int add(int n)
{
	if(n==0)
	{
		return 0;
	}
	else{
		return add(n/10);
	
	}
	
}
int main()
{
	int x;
	cin>>x;
	cout<<add(x)<<endl;
	return 0;
}
