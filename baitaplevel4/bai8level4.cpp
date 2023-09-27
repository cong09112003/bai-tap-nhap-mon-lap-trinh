// nhap n va kiem tra cac chu so co tang dan khong?
#include<iostream>
using namespace std;
bool kiemTraCacSoTangDan(int n);
void nhap(int &n);
void xuat(int kt);
int main()
{
	int n;
	nhap(n);
	int kt=kiemTraCacSoTangDan(n);
	xuat(kt);
	return 0;
}
bool kiemTraCacSoTangDan(int n)
{
	int y=10;
	while( n>0 )
	{
		int x=n%10;
		if (x >= y)
		    return false;
		else 
		    y=x;
		n/=10;	   
	}
	return true;
}
void nhap(int &n)
{
	cout<<"nhap so nguyen n la:";
	cin>>n;
}
void xuat(int kt)
{
	if (kt==true)
	    cout<<"n gom cac chu so tang dan";
	if (kt==false)
	    cout<<"n khong gom cac chu so tang dan";
}
	    
	    

	
	
	

