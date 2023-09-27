// nhap mang n phan tu so thuc, liet ke cac phan tu thuoc doan [x,y] cho truoc
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,float A[],float &x,float &y);
void timDoan(int n,float A[],float x,float y);
int main()
{
	int n;
	float A[size],x,y;
	nhap(n,A,x,y);
	timDoan(n,A,x,y);
	return 0;
}
void nhap(int &n,float A[],float &x,float &y)
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
void timDoan(int n,float A[],float x,float y)
{
	cout<<"cac phan tu trong khoang [x,y] la: ";
	for(int i=0;i<n;i++)
	{
		if(A[i] >= x && A[i] <= y)
		cout<<A[i]<<" ";
	}
}	


