#include<iostream>
#include<math.h>
using namespace std;
int tinhThuong(int a, int b,float &q);
void nhap(int &a,int &b);
void xuat(int kt,float t);
int main()
{
	int a,b;
	nhap(a,b);
	float t;
	int kt= tinhThuong(a,b,t);
	xuat(kt,t);
}
int tinhThuong(int a,int b,float &t)
{
	if (b==0)
	   return 0;
	else 
	{
	   t = (float) a/b;
	   return 1;
	}
}	 
void nhap(int &a,int &b)
{
	cout<<"nhap a="<<"\n";
	cout<<"nhap b="<<"\n";
	cin>>a>>b;
}
void xuat(int kt,float t)
{
	if (kt==1)
	cout << "thuong hai so vua nhap la :" << t << endl;
	else
	cout << "khong chia duoc";
}	
	
	
	
	
	
