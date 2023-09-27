// tim phan tu Min
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define size 200
int timMin(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int vitri=timMin(n,A);
	xuat(vitri);
	return 0;
}
int timMin(int n,int A[])
{
	int Min=A[0];
	int vitri=0;
	for(int i=1;i<n;i++)
	{
		if(A[i]<Min)
		{
		    Min=A[i];
		    vitri=i;
	    }
    }
	return vitri;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu cua mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void xuat(int x)
{
	cout<<"Vi tri phan tu nho nhat la: A["<<x<<"]";
}
