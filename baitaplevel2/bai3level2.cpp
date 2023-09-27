#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
void nhap(int &a,int &b,int &c);
int timSoNhoNhat(int a,int b,int c,int &min);
void xuat(int kt,int min);
int main()
{
	int a,b,c;
	cout<<"nhap a="<<"\n";
	cout<<"nhap b="<<"\n";
	cout<<"nhap c="<<"\n";
	nhap(a,b,c);
	int min;
	int kt= timSoNhoNhat(a,b,c,min);
	xuat(kt,min);
}
int timSoNhoNhat(int a,int b,int c,int &min)
{
	min=a;
	if (min==b)
	    {
		if (min==c)
		    return 0;
    	}
	else
	{
	if (min>b)
	        min = b;
	if (min>c)
	        min = c;
    }
	return 1; 
}
void nhap(int &a,int &b,int &c)
{
	cin>>a>>b>>c;
}
void xuat(int kt,int min)
{
	if (kt==0)
		cout<<"khong co so nao nho nhat";
	else
	{
		cout<< "so nguyen co gia tri nho nhat  :" << min << endl;
	}
}
