#include<iostream>
#include<string.h>
using namespace std;
void nhap (char &c);
int kiemTra(char c);
void xuat(int dk,char c);
int main()
{
	char c;
	cout<<"nhap chu cai n la :"<<"\n";
	nhap(c);
	int dk=kiemTra(c);
	xuat(dk,c);
	return 0;
}
void nhap (char &c)
{
	cin>>c;
}
int kiemTra(char c)		
{
	int dk;
	if (c >= 97 and c <= 122)
	{
		dk=0;
	}
	if (c >= 65 and c <= 90)
	{
	dk=1;
	}
	return dk;
}
void xuat(int dk,char c)
{
	if (dk==0)
	{
		c = c - 32;
		 cout << c;
	}
	if (dk==1)
	{
		c = c + 32;
		cout<<c;
	}
}

		
