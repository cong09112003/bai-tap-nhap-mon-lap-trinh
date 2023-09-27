#include<iostream>
#include<math.h>
using namespace std;
void xuat(int x);
void nhap(int &x,int &y);
bool checkSoDep(int x);
int DemSoDep(int l,int r);
int main()
{
	int l,r;
	nhap(l,r);
	int dem=DemSoDep(l,r);
	xuat(dem);
	return 0;
}	
void nhap(int &x,int &y)
{
	cin>>x>>y;
}
bool checkSoDep(int x)
{
	int dem=0;
	int y=abs(x);
	for(int i=1;i<=y;i++)
	{
		if(y%i==0)
		    dem++;
	}
	if(dem==3)
	    return true;
	return false;		
}	
int DemSoDep(int l,int r)
{
	int dem=0;
	for(int i=l;i<=r;i++)
	{
		if(checkSoDep(i)==true)
		dem++;
	}	
	return dem;
}
void xuat(int x)
{
	cout<<x;
}	
	
