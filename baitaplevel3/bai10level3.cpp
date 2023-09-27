// nhap a b n xuat ra tong cac chu so nho hon n chia het cho a nhung khong chia het cho b
#include<iostream>
using namespace std;
int TongSoDacBiet(int a,int b,int n);
void nhap(int &a,int &b,int &n);
void xuat(int Tong);
int main()
{
	int a,b,n;
	nhap(a,b,n);
	int Tong=TongSoDacBiet(a,b,n);
	xuat(Tong);
	return 0;
}
int TongSoDacBiet(int a,int b,int n)
{
	int Tong=0;
	if ((a < n) && (b < n))
	{
	    int i=0;
	    for (int i=0; i<n; i++)
	    	if ( (i%a==0) && (i%b!=0) )
	    	    Tong=Tong+i;	    
	}
	else 
	    return 0;
	return Tong;    
}
void nhap(int &a,int &b,int &n)
{
	cout<<"nhap so nguyen a:";
	cin>>a;
	cout<<"nhap so nguyen b:";
	cin>>b;
	cout<<"nhap so nguyen n:";
	cin>>n;
}
void xuat(int Tong)
{
	if (Tong==0)
	    cout<<"khong hop le va moi nhap lai";
	else
        cout<<"Tong cac so nho hon n va chia het cho a nhung khong chia het cho b la"<< Tong <<endl;
}	
	

