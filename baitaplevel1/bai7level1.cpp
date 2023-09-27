#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void nhap(int &a,int &b,int &c);
int kiemTra(int a,int b,int c);
void xuat(int dk);
int main()
{
	int a,b,c;
	cout<<"nhap a="<<"\n";
	cout<<"nhap b="<<"\n";
	cout<<"nhap c="<<"\n";
	nhap(a,b,c);
	int dk=kiemTra(a,b,c);
	xuat(dk);
	return 0;
}
void nhap (int &a,int &b,int &c)
{
	cin>>a>>b>>c;
}
int kiemTra(int a,int b,int c)
{
	int dk;
	if (a<b+c and b<a+c and c<a+b)
	{
		dk=1;
	}
	else {
		dk=0;
	}
	return dk;
}
void xuat(int dk)
{
	if (dk == 1){
		cout<<"3 cach a b c la ba cach cua 1 tam giac";
	}
	else {
		cout<<"3 cach a b c khong la ba cach cua 1 tam giac";
	}
}	
	
	
	


	
	







