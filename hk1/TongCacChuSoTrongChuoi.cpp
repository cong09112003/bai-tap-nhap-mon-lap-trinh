#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 1000
int Tongso(int k,char S[size]);
void nhap(int &k,char S[]);
void xuat(int x);
int main()
{
	int k;
	char S[size];
	nhap(k,S);
	int so=Tongso(k,S);
	xuat(so);
	return 0;
}	
void nhap(int &k, char S[size])
{
	cin>>k;
	for(int i=0;i<k;i++)
	    cin>>S[i];
	S[k]='\0';
}
void xuat(int x)
{
	cout<<x;
}
int Tongso(int k,char S[])
{
	int i=0;
	int tong=0;
	int so=0;
	while(i<=k)
	{
	    if(S[i]>='0'&& S[i]<='9')
		    so=so*10+(S[i]-'0');
		else
		{
			tong=tong+so;
			so=0;
		}
		i++;			
	}
	return tong;	
}	
