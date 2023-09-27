// nhap mang n phan tu so thuc, liet ke cac phan tu chan thuoc doan [x,y] cho truoc, voi x , y la so nguyen
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[],int &x,int &y);
void timDoanSoChan(int n,int A[],int x,int y);
int main()
{
	int n;
	int A[size],x,y;
	nhap(n,A,x,y);
	timDoanSoChan(n,A,x,y);
	return 0;
}
void nhap(int &n,int A[],int &x,int &y)
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
	do{
	cout<<"nhap gia tri x:";
	cin>>x;
	cout<<"nhap gia tri y:";
	cin>>y;
    }while(x>=y);
}
void timDoanSoChan(int n,int A[],int x,int y)
{
	cout<<"cac phan tu chan trong khoang [x,y] la: ";
	for(int i=0;i<n;i++)
	{
		if(A[i] >= x && A[i] <= y && A[i]%2==0)
		cout<<A[i]<<" ";
	}
}	


