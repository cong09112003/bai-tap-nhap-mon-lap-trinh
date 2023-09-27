// nhap vao a b c d tinh tong phan sô toi gian a/b + c/d
#include<iostream>
#include<math.h>
using namespace std;
int timUCLN(int x,int y);
void nhap(int &tu,int &mau );
void xuat(int a,int b,int c,int d);
int main()
{
	int a,b,c,d;
	nhap(a,b);
	nhap(c,d);
    xuat(a,b,c,d);
    return 0;
}
int timUCLN(int x,int y)
{
	x=abs(x);
	y=abs(y);
	while(x!=y)
	{
		if(x>y)
		    x = x - y;
		else
		    y = y - x;
	}
	return x;
}
void nhap(int &tu,int &mau )
{
	cout<<"nhap tu so:";
	cin>>tu;
	do
	{
	    cout<<"nhap mau so:";
	    cin>>mau;
	}while(mau==0);
}
void xuat(int a,int b,int c,int d)
{
    int tongTu= a*d + b*c;
	int tongMau= b*d;
	int u = timUCLN(tongTu,tongMau);
	tongTu/=u;
	tongMau/=u;
	cout<<"tong hai phan so vua nhap la:"<<tongTu<<" / "<<tongMau;
}	
	
	    
	
