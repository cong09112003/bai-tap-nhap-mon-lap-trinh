#include<iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
void nhap(int &a,int &b);
int kiemTra(int a,int b);
void xuat(int dk);
int main()
{
	int a,b;
	cout<<"nhap a="<<"\n";
	cout<<"nhap b="<<"\n";
	nhap(a,b);
	int dk= kiemTra(a,b);
	xuat(dk);
}
void nhap(int &a,int &b)
{
	cin>>a>>b;
}
int kiemTra(int a,int b)
{
	int dk;
	if(a>b){
		dk=1;
	}
	else {
		dk=0;
	}
	return dk;
}
void xuat(int dk)
{
	if (dk==1){
		cout<<"a la so lon nhat";
	}
	else {
		cout<<"b la so lon nhat";
	}
}
