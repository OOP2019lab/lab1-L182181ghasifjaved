#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("file.txt");
	int z=0,x=0,y=0;
	if(fin.is_open())
	{
		int n=0;
		fin>>z;
		while(n!=z)
		{
			fin>>x;
			fin>>y;
			cout<<pow(x,y)<<endl;
			n++;
		}
	}
	else
		cout<<"file not open fin";
	system("pause");
	return 0;
}