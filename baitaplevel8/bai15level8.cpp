// cho mang 1 chieu cac so thuc va so thuc x,tim gia am cuoi cung lon hon gia tri x, neu mang khong co gia tri nao thoa man tra ve gia tri0
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,float &x,float A[]);
void xuat(float x);
float timAmNhoHonx(int n,float x,float A[]);
int main()
{
	int n;
	float x,A[size];
	nhap(n,x,A);
	float so=timAmNhoHonx(n,x,A);
	xuat(so);
	return 0;
}
float timAmNhoHonx(int n,float x,float A[])
{
	for(int i=n-1;i>=0;i--)
	{
		if(A[i] < 0 && A[i] > x)
		    return A[i];
	}
	return 0;	
}	
void nhap(int &n,float &x,float A[])
{
	cout<<"so phan tu trong mang:";
	cin>>n;
	cout<<"so thuc x:";
	cin>>x;
	for(int i=0;i<n;i++)
	    cin>>A[i];    
}
void xuat(float x)
{
	if(x==0)
	    cout<<x;
	else 
	    cout<<"phan tu am lon hon x :" <<x<<endl;   
}
