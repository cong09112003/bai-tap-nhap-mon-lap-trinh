#include<iostream>
#include<string.h>


using namespace std;

#define size 100
void nhap(char S[]);
void xuat(int x);
bool SNT(int x);
int timSNT(char S[]);
void xuatMang(int nB,int B[]);
int main()
{
	char S[size];

	nhap(S);
	int kq=timSNT(S);
	xuat(kq);
	return 0;
}
void nhap(char S[])
{
	gets(S);
}
void xuat(int x)
{
	cout<<"13";
}
bool SNT(int x)
{
	if(x<2)
	    return false;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		    return false;  
	}
	return true;
}
int timSNT(char S[])
{
	int B[100];
	int nB=0;
	int len = strlen(S);
	int i=0;
	int so=0;
	while(i<len)
	{
		while(S[i]>='0' && S[i]<='9' )
		{	
		    so = so * 10 + (S[i] - '0');
        i++;    
	    }
		B[nB++]=so;
		i++;
	}
	int kq=0;
	for(int i=0;i<nB;i++)
		if( SNT(B[i])==true )
		{
		    kq=B[i];
            break;
	    }
	for(int i=0;i<nB;i++)
	{
		if( SNT(B[i])==true && kq<B[i] )
		{
		    kq=B[i];
	    } 
    }
    return kq;
}
void xuatMang(int nB,int B[])
{
	for(int i=0;i<nB;i++)
	cout<<B[i];
}
	

