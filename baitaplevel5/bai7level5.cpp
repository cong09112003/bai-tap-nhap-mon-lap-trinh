// dem xem n co bao nhieu uoc so la so nguyen to
#include<iostream>
using namespace std;
int kiemTraSoNguyenTo(int x);
void nhap(int &n);
void xuat(int n,int dem);
int main()
{
	int n;
	int dem=0;
	nhap(n);
	xuat(n,dem);
}
int kiemTraSoNguyenTo(int x)
{
	if(x<=1)
	    return 0;
	for(int y=2; y<x; y++)
	{
	    if(x%y==0)
	        return 0;
	}
	return 1;
}
void nhap(int &n)
{
	do{
	cout<<"nhap so nguyen n la:";
	cin>>n;
    }
    while(n<1);
}
void xuat(int n,int dem)
{
	for(int i=1; i<=n ; i++)
	{
		if(n%i==0)
		    if(kiemTraSoNguyenTo(i)==1)
				dem++;
	}
	cout<<"n co "<< dem << "uoc so la so nguyen to"<< endl;
}
