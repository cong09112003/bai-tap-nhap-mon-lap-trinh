//dem so chinh phuong nho hon n
#include<iostream>
#include<math.h>
using namespace std;
int kiemTraSoChinhPhuong(int x);
void nhap(int &n);
void xuat(int n,int dem);
int main()
{
	int n;
	int dem;
	nhap(n);
	xuat(n,dem);
}
int kiemTraSoChinhPhuong(int x)
{
	int j = (int)sqrt(x);
	if((x >= 1) && (pow( j , 2 ) == x))
	    return 1;
	return 0;    
}
void nhap(int &n)
{
	do{
	cout<<"nhap so nguyen n la:";
	cin>>n;
    }
    while(n<4);
}
void xuat(int n,int dem)
{
	for(int i=1; i<n; i++)
	{
    if(kiemTraSoChinhPhuong(i))
    	dem++;
    }
    cout<<"co"<<dem<<"so chinh phuong nho hon n";
}
