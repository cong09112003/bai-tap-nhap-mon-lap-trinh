// nhap mang A n so thuc, B gom n so thuc, in ra cac han tu trong mang A ma khong xuat hien trong mang B
#include<iostream>
using namespace std;
#define size 200
void nhap(int &n,float A[]);
void xuat(int nA,float A[]);
void cacPhanTuTrongAMaKhongCoTrongB(int nA,float A[],int nB,float B[],int &nC,float C[]);
void xoaPhanTuThuKcuaMangA(int x,int &nA,float A[]);
bool timThay(int x,float A[],int n);
int main()
{
	int nA,nB,nC;
	float A[size],B[size],C[size];
	nhap(nA,A);
	nhap(nB,B);
	cacPhanTuTrongAMaKhongCoTrongB(nA,A,nB,B,nC,C);
	xuat(nC,C);
	return 0;
}
void nhap(int &n,float A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
void cacPhanTuTrongAMaKhongCoTrongB(int nA,float A[],int nB,float B[],int &nC,float C[])
{
	nC=0;
    for(int i=0;i<nA;i++ )  
	{
		if(timThay(A[i],B,nB)==false)
		    C[nC++]=A[i];
	}   			
}
void xoaPhanTuThuKcuaMangA(int k,int &nA,float A[])
{
	for(int i=k;i<nA-1;i++)
	    A[i]=A[i+1];
	nA--;
}
bool timThay(int x,float A[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]==x)
		    return true;
	}
	return false;
}		
void xuat(int nA,float A[])
{
	if(nA>0)
	{
	for(int i=0;i<nA;i++)
	    cout<<A[i]<<" ";
	}
	else 
	cout<<"Hai Mang Trung Nhau";
}	

