#include<iostream>
using namespace std;
int main()
{
	int x=5,y=8;
	int *p=&x,*q=&y;
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	cout<<"p: "<<p<<endl;
	cout<<"q: "<<q<<endl;
	cout<<"*p: "<<*p<<endl;
	cout<<"*q: "<<*q<<endl;
	cout<<"swap using integers"<<endl;
	int temp=x;
	x=y;
	y=temp;
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	cout<<"p: "<<p<<endl;
	cout<<"q: "<<q<<endl;
	cout<<"*p: "<<*p<<endl;
	cout<<"*q: "<<*q<<endl;
	cout<<"swap using pointers"<<endl;
	int *temp2;
	temp2=p;
	p=q;
	q=temp2;
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	cout<<"p: "<<p<<endl;
	cout<<"q: "<<q<<endl;
	cout<<"*p: "<<*p<<endl;
	cout<<"*q: "<<*q<<endl;
	system("pause");
	return 0;
}