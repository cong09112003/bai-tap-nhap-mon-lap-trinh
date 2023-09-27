// liet ke cac so nguyen to nho hon n
#include<iostream>
using namespace std;
int kiemTraSoNguyenTo(int x);
void nhap(int &n);
void lietke(int n);
void xuat(int x);
int main()
{
	int n;
	nhap(n);
	lietke(n);
	xuat;
	return 0;
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
    cout<<"nhap so nguyen duong n la";
    cin>>n;
    }
    while(n<2);
}
void lietke(int n)
{
	cout<<"cac so nguyen to nho hon n la:";
    for(int i=2; i< n; i++){
    	if(kiemTraSoNguyenTo(i))
    	    xuat(i);
    }
}
void xuat(int x)
{
	cout<<x<<" ";
}		    
	    
	        
	    
	

