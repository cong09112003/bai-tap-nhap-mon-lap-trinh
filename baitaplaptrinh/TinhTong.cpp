#include<iostream>
using namespace std;
int tinhTong(int A,int B);
void nhap(int &A,int &B);
void xuat(int Tong);
int main()
{
	int A,B;
	nhap(A,B);
	int Tong= tinhTong(A,B);
	xuat(Tong);
}
int tinhTong(int A,int B)
{
	int Tong=A+B;
	return Tong;
}
void nhap(int &A,int &B)
{
    cout<<"nhap A la:";
    cin>>A;
    cout<<"nhap B la:";
    cin>>B;
}
void xuat(int Tong)
{
    cout<<Tong;
}      
	
	
