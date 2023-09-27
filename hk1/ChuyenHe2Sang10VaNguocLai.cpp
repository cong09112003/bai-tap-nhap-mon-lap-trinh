#include <iostream>
#include<string.h>
#include<math.h>
#define size 1000
using namespace std;


void chuyenHe10SangHe2(int x,char S[]);
int chuyenHoa(char c);
int chuyenHe2SangHe10(char S[])	;
int chuyenDoi(int x);
int timMax(int n,int B[] );
int timLuongMax(int n,int A[]);
void xuat(int &x);
void nhap(int &n,int A[]);

int main()
{
	int n,A[size];
	nhap(n,A);
	int max=timLuongMax(n,A);
	xuat(max);
	return max;
}	
void nhap(int &n,int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>A[i];
}
void xuat(int &x)
{
	cout<<x;
}
int timLuongMax(int n,int A[])
{
	int B[1000];
	for(int i=0;i<n;i++)
	    B[i]=chuyenDoi(A[i]);
	int max=timMax(n,B);
	return max;
}
int timMax(int n,int B[] )
{
	int max=B[0];
	for(int i=1;i<n;i++)
	{
		if(B[i]>max)
		max=B[i];
	}	
	return  max;
}
int chuyenDoi(int x)
{
	char S[1000000];
	chuyenHe10SangHe2(x,S);
	int len=strlen(S);
	for(int i=len-1;i>=0;i-=2)
	{
		S[i]='1';
	}	
	int k=chuyenHe2SangHe10(S);
	return k;
}	
void chuyenHe10SangHe2(int x,char S[])
{
	int i=0;
	while(x!=0)
	{
		int t=x%2;
		S[i++]=t+'0';
		x/=2;
	}	
	S[i]='\0';
	strrev(S);
}
int chuyenHe2SangHe10(char S[])	
{
	int so=0;
	int len=strlen(S);
	int a=0;
	for(int i=len-1;i>=0;i--)
	{
		so=so+chuyenHoa(S[i])*pow(2,a);
		a++;
	}	
	return so;
}	
int chuyenHoa(char c)
{
	if(c>='0'&&c<='9')
	    return c-48;
	if(c>='A'&&c<='Z')
	    return c-55;
}	
int chuyenHoa(char c)
{
	if(c>='0'&&c<='9')
	    return c-48;
	if(c>='A'&&c<='Z')
	    return c-55;
}

