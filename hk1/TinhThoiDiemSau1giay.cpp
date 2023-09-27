#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &h,int &m,int &s);
int kiemTra(int &h,int &m,int &s);
void xuat(int kt,int h, int m, int s);
int main()
{
	int h,m,s;
	nhap(h,m,s);
	int kt= kiemTra(h,m,s);
	xuat(kt,h,m,s);
	return 0;
}
void nhap(int &h,int &m,int &s)
{
	cin>>h>>m>>s;
}
int kiemTra(int &h,int &m,int &s)	
{
	if ( (h<=23) && (m<=59) && (s<=59))
	{
		s = s+1;
		if (s==60)
		{
			s=0 ;
			m=m+1;
			if (m==60)
			{
				m=0;
				h=h+1;
				if (h==24)
				h=0;
			}	
		}
		return 1;
	}
	return 0;
}
void xuat(int kt,int h, int m, int s)
{
	if ( kt==0)
	cout<<"khong hop le , moi nhap lai";
	if ( kt==1 )
	{
	cout<<"gio sau 1 giay :"<< h << endl;
	cout<<"phut sau 1 giay :"<< m << endl;
	cout<<"giay sau 1 giay :" << s << endl;
	}
}			





		
		
	
	
