//viet chuong trinh tinh so tu trong chuoi
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
void xuat(int x);
void timDinhSong(int nA,int A[],int &nB,int B[]);
void timDaySong(int nA,int A[],int &nB,int B[]);
int timMax(int n,int A[]);
int timMin(int n,int A[]);
void timDinhSongMax_va_DaySoMin(int nA,int A[],int &nB,int B[],int &nC,int C[]);
int main()
{
	int nA,A[size],nB,B[size],nC,C[size];
	nhap(nA,A);
	timDinhSongMax_va_DaySoMin(nA,A,nB,B,nC,C);
	return 0;
}	
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}	
void xuat(int x)
{
	cout<<x<<" ";
}	
void timDinhSong(int nA,int A[],int &nB,int B[])
{
	nB=0;
	if(A[0]>A[1])
	    B[nB++]=A[0];
	for(int i=1;i<nA-1;i++)
	{
		if(A[i]>A[i-1] && A[i]>A[i+1])
		    B[nB++]=A[i];
	}
	if(A[nA-1]>A[nA-2])
	    B[nB++]=A[nA-1];	
}	
void timDaySong(int nA,int A[],int &nC,int C[])
{
	nC=0;
	if(A[0]<A[1])
	C[nC++]=A[0];
	for(int i=1;i<nA-1;i++)
	{
		if(A[i]<A[i-1] && A[i]<A[i+1])
		C[nC++]=A[i];
	}
	if(A[nA-1]<A[nA-2])
	    C[nC++]=A[nA-1];	
}
int timMax(int n,int A[])
{
	int max=A[0];
	for(int i=0;i<n;i++)
	{
		if(A[i]>max)
		max=A[i];
	}
	return max;
}
int timMin(int n,int A[])
{
	int min=A[0];
	for(int i=0;i<n;i++)
	{
		if(A[i]<min)
		min=A[i];
	}
	return min;
}
void timDinhSongMax_va_DaySoMin(int nA,int A[],int &nB,int B[],int &nC,int C[])
{
	timDinhSong(nA,A,nB,B);
	timDaySong(nA,A,nC,C);
	int max=timMax(nB,B);
	xuat(max);
	int min=timMin(nC,C);
	xuat(min);
}

