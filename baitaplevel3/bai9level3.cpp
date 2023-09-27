// tim uoc chung lon nhat cua hai so
#include<iostream>
using namespace std;
int timUocSoChungMax(int a,int b);
void nhap(int &a,int &b);
void xuat(int max);
int main()
{
	int a,b;
	nhap(a,b);
	int max=timUocSoChungMax(a,b);
	xuat(max);
	return 0;
}
int timUocSoChungMax(int a,int b)
{
	int max=0;
	if(a==b)
	    max=a;
	while (a!=b)
	{
	    if (a>b)
	        a=a-b;
		else
		    b=b-a;
	}		    
	max=a;
	return max;  	
}	
void nhap(int &a,int &b)
{
	cout<<"nhap a=";
	cin>>a;
	cout<<"nhap b=";
	cin>>b;
}
void xuat(int max)
{
	cout<<"uoc chung lon nhat cua a va b la :"<< max << endl;
}	
	
