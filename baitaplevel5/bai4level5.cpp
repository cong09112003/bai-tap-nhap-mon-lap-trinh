// liet ke so chinh phuong nho hon n
#include<iostream>
#include<math.h>
using namespace std;
int kiemTraSoChinhPhuong(int x);
void nhap(int &n);
void xuat(int n);
int main()
{
	int n;
	nhap(n);
	xuat(n);
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
void xuat(int n)
{
	cout<<"liet ke cac so chinh phuong nho hon n la:";
	for(int i=0; i < n ; i++){
	    if (kiemTraSoChinhPhuong(i)==1)
	        cout<<i<<" ";
	}
}
