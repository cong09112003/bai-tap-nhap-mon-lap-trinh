#include<iostream>



using namespace std;
void nhap(int &x,int &y);
int tinhMau(int x,int y);
void xuat(int x);

int main()
{
	
	int x,y;
	nhap(x,y);
	int kq=tinhMau(x,y);
	xuat(kq);
	return 0;
}
void nhap(int &x,int &y)
{
	cin>>x>>y;
}
int tinhMau(int x,int y)
{
	if(x==1&&y==1)
	return 9;
	if(x==2&&y==1)
	return 15;
	if(x==4&&y==1)
	return 7;
	if(x==8&&y==1)
	return 9;
	
	if(x==1&&y==2)
	return 15;
	if(x==2&&y==2)
	return 10;
	if(x==4&&y==2)
	return 7;
	if(x==8&&y==2)
	return 10;
	
	if(x==1&&y==4)
	return 7;
	if(x==2&&y==4)
	return 7;
	if(x==4&&y==4)
	return 7;
	if(x==8&&y==4)
	return 3;
	
	if(x==1&&y==8)
	return 9;
	if(x==2&&y==8)
	return 10;
	if(x==4&&y==8)
	return 3;
	if(x==8&&y==8)
	return 8;
}
void xuat(int x)
{
	cout<<x;
}
