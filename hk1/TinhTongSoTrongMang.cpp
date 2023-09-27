//viet chuong trinh tinh so tu trong chuoi
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void  nhap(int &x,int &y);
void xuat(int x);
bool soDep(int x);
int demSoDep(int x,int y);
int main()
{
	int x,y;
	nhap(x,y);
	int dem=demSoDep(x,y);
	xuat(dem);
	return 0;
}
void  nhap(int &x,int &y)
{
	cin>>x>>y;
}
void xuat(int x)
{
	cout<<x;
}
bool soDep(int x)
{
	int dem=0;
	x=abs(x);
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		    dem++;
	}
	if(dem==3)
	    return true;
	return false;
}
int demSoDep(int x,int y)
{
	int dem=0;
	for(int i=x;i<=y;i++)
	{
		if(soDep(i)==true)
		dem++;
	}
	return dem;
}
