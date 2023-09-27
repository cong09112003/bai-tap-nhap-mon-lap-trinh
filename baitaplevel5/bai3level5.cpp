// Dem so luong so nguyen to nho hon n
#include<iostream>
using namespace std;
int kiemTraSoHoanHao(int x);
void nhap(int &n);
void xuat(int n,int dem);
int main()
{
	int n;
	int dem;
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
    cout<<"nhap so nguyen n la: ";
	cin>>n;
	}
	while(n<2);
}
void xuat(int n,int dem)
{
	for(int i=2; i<n; i++)
	{
        if(kiemTraSoNguyenTo(i))
    	    dem++;
    }
    cout<<"co"<<dem<<"so nguyen to nho hon n";
}			    
	            
	        
	    
	    
	    
	        
            

