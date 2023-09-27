//tinh tong giai thua
#include<iostream>
using namespace std;
int giaiThua(int x);
long tinhTongGiaThua(int n);
void nhap(int &n);
void xuat(long TongGT);
int main()
{
	int n;
	nhap(n);
	long TongGT= tinhTongGiaThua(n);
	xuat(TongGT);
}
int giaiThua(int x)
{
	long gt=1;
    for(int i = 1; i <= x; i++) 
	{
        gt = gt * i;
    }
    return gt;
}	    
void nhap(int &n)
{
	do{
    cout<<"nhap n la:";
    cin>>n;
    }while(n<0);
}
long tinhTongGiaThua(int n)
{
	long TongGT=0;
	if(n==0)
	    TongGT=1;
	else
	{ 
	    for(int i=1; i<=n; i++)
	        TongGT = TongGT + giaiThua(i);
	}    
	return TongGT;
}
void xuat(long TongGT)
{
	cout<<"Tong gia thua tu 1 den n la:"<<TongGT;
}	
	
	
	    
	      
		
	
	
