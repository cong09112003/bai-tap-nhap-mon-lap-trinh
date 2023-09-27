// Tong cac uoc cua so n
#include<iostream>
#include<math.h>
using namespace std;
int tinhTongUoc(int n);
void nhap(int &n);
void xuat(int Tong);
int main()
{
	int n;
	nhap(n);
	int S;
	int Tong=tinhTongUoc(n);
	xuat(Tong);
	return 0;
}
int tinhTongUoc(int n)
{
	int Tong=0;
    for(int i = 1; i < n; i++)
        if (n%i==0)
            Tong=Tong+i;
    return Tong;
} 
void nhap(int &n)
{
	cout<<"nhap so nguyen n :";
	cin>>n;
}
void xuat(int Tong)
{
	cout<<"Tong cac uoc so nho hon hoac bang n la:"<< Tong<< endl;
}
