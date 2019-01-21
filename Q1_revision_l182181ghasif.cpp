#include <iostream>
using namespace std;
int main()
{
	int n=0;
	cout<<"enter the number";
	cin>>n;
	for(int i=1;i<n*2;i++)
	{
		for(int j=0;j<n*2;j++)
		{
			if(i<=n)
			{
			if(j<i||j>=n*2-i)
				cout<<i;
			else
				cout<<"*";
			}
			if(i>n)
			{
				if(j<n*2-i||j>i-1)
					cout<<i;
				else
					cout<<"*";
			}
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}