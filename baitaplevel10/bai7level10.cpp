// hay trich ra n ki tu dau tien / cuoi cung bat dau tai vi tri pos
#include<iostream>
#include<string.h>
using namespace std;
#define size 2000
void nhap(char S[],int &x,int &y);
void trichXuatKiTuDauTien(int n,char S[],char A[]);
void trichXuatKiTuCuoiCung(int n, char S[],char B[]);
void trichXuatViTriPos(int n,int pos,char S[],char C[]);
void xuat(char A[]);
int main()
{
	int n,pos;
	char S[size],A[size],B[size],C[size];
	nhap(S,n,pos);
	trichXuatKiTuDauTien(n,S,A);
	trichXuatKiTuCuoiCung(n,S,B);
	trichXuatViTriPos(n,pos,S,C);
	xuat(A);
	xuat(B);
	xuat(C); 
	return 0;
}
void nhap(char S[],int &x,int &y)
{
	cout<<"nhap chuoi:";
	gets(S);
	cout<<endl;
	cout<<"nhap n:";
	cin>>x;
	cout<<endl;
	cout<<"nhap vi tri pos:";
	cin>>y;
}
void trichXuatKiTuDauTien(int n,char S[],char A[])
{
	if(n >strlen(S))
	    n=strlen(S);
	for(int i=0;i<n;i++)
	    A[i]=S[i];
	A[n]='\0';   
}
void trichXuatKiTuCuoiCung(int n, char S[],char B[])
{
	int k=strlen(S)-n;
	if(k<0)
	    k=0;
	for(int i=0;i<n;i++)
        B[i]=S[i+k];
	B[n]='\0';
}
void xuat(char A[])
{
	puts(A);
}
void trichXuatViTriPos(int n,int pos,char S[],char C[])
{
	if(n+pos>strlen(S))
	    n=strlen(S)-pos;
	for(int i=0;i<n;i++)
	    C[i]=S[i+pos];
	C[n]='\0';
}
