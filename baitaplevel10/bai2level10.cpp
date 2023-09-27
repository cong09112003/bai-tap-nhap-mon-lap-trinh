// nhap 1 so n tu ban phim xuat ra he nhi phan,bat phan,he thap luc phan
#include<iostream>
#include<math.h>
#include<string.h>
#define size 1000
using namespace std;
void chuyenHe10SangHe2(int n,int &nA,int A[]);
void chuyenHe10SangHe16(int n,int &nC,char C[]);
void chuyenHe10SangHe8(int n,int &nB,int B[]);
void nhap(int &x);
void xoayMang180(int n,int A[]);
void xuat(int n,int A[]);
void xoaychuoi180(int n,char A[]);
void xuatchuoi(int n,char A[]);
void hoanVi(int &x,int &y);
void hoanViChuoi(char &x,char &y);
int main()
{
	int n,nA,nB,nC;
	int A[size],B[size];
	char C[size];
	nhap(n);
	chuyenHe10SangHe2(n,nA,A);
	chuyenHe10SangHe8(n,nB,B);
	chuyenHe10SangHe16(n,nC,C);
	return 0;
}
void nhap(int &x)
{
	cout<<"nhap so nguyen n:";
	cin>>x;
}
void chuyenHe10SangHe2(int n,int &nA,int A[])
{
	nA=0;
	while(n!=0)
	{
		int x=n%2;
		A[nA++]=x;
		n/=2;
	}
	xoayMang180(nA,A);
	xuat(nA,A);
}
void hoanVi(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}	
void xoayMang180(int n,int A[])
{
	for(int i=0;i<n/2;i++)
	    hoanVi(A[i],A[n-i-1]);
}
void xuat(int n,int A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i];
	cout<<endl;    
}
void chuyenHe10SangHe16(int n,int &nC,char C[])
{
	nC=0;
	while(n!=0)
	{
		int x=n%16;
		if(x>=0 && x<=9)
		{
			if(x==0)
			    C[nC++]='0';
			if(x==1)
			    C[nC++]='1';
			if(x==2)
			    C[nC++]='2';
			if(x==3)
			    C[nC++]='3';
			if(x==4)
			    C[nC++]='4';
			if(x==5)
			    C[nC++]='5';
			if(x==6)
			    C[nC++]='6';
			if(x==7)
			    C[nC++]='7';
			if(x==8)
			    C[nC++]='8';
			if(x==9)
			    C[nC++]='9';		
		}    
		else
		    if(x==10)
		        C[nC++]='A';
		    else
			    if(x==11)
		            C[nC++]='B';
		        else 
			        if(x==12)
		                C[nC++]='C';
		            else 
			            if(x==13)
		                    C[nC++]='D';
		                else 
						    if(x==14)
		                        C[nC++]='E'; 
		                    else    
		                        C[nC++]='C';
		n/=16;													  
	}
	xoaychuoi180(nC,C);
	xuatchuoi(nC,C);	
}
void hoanViChuoi(char &x,char &y)
{
	char t=x;
	x=y;
	y=t;
}
void xoaychuoi180(int n,char A[])
{
	for(int i=0;i<n/2;i++)
	    hoanViChuoi(A[i],A[n-i-1]);
}
void xuatchuoi(int n,char A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i];
	cout<<endl;    
}
void chuyenHe10SangHe8(int n,int &nB,int B[])
{
	nB=0;
	while(n!=0)
	{
		int x=n%8;
		B[nB++]=x;
		n/=8;
	}
	xoayMang180(nB,B);
	xuat(nB,B);		
}	
