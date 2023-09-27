// Tong
#include<iostream>
using namespace std;
void nhap(int &a,int &b);
int Tong(int a,int b);
void xuat(int x);
int main()
{
	int a,b;
	nhap(a,b);
	int Sum=Tong(a,b);
	xuat(Sum);
	return 0;
}
void nhap(int &a,int &b)
{
	cin>>a>>b;
}
int Tong(int a,int b)
{
	int Tong=a+b;
	return Tong;
}
void xuat(int x)
{
	cout<<x;
}	
