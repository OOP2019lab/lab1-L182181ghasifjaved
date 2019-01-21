#include<iostream>
#include<fstream>
using namespace std;
void offset();
int main()
{
	int g;
	cout<<"enter the size of array";
	cin>>g;
	int *p=new int[g];
	cout<<"enter the values in array";
	for(int i=0;i<g;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<g;i++)
    {
        int temp=p[0];
        for(int j=1;j<g;j++)
        {
            if(p[j-1]>p[j])
            {
                temp=p[j-1];
                p[j-1]=p[j];
                p[j]=temp;
            }
        }
    }
	for(int i=0;i<g;i++)
		cout<<p[i]<<endl;
	offset();
	system("pause");
	return 0;
}
void offset()
{
	ofstream fout;
	fout.open("results_l182181ghasif.txt");
	int g;
	cout<<"enter the size of array";
	cin>>g;
	int *p=new int[g];
	cout<<"enter the values in array";
	for(int i=0;i<g;i++)
	{
		cin>>*(p+i);
	}
	for(int i=0;i<g;i++)
    {
        int temp=*(p);
        for(int j=1;j<g;j++)
        {
            if(*(p+(j-1))>*(p+j))
            {
                temp=*(p+(j-1));
                *(p+(j-1))=*(p+j);
                *(p+j)=temp;
            }
        }
    }
	for(int i=0;i<g;i++)
		fout<<*(p+i)<<endl;
	for(int i=0;i<g;i++)
		cout<<*(p+i)<<endl;
}