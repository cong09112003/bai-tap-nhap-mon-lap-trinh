// dem so tu trong 1 cau
#include<iostream>
#include<string.h>
using namespace std;
int dem_Tu(char S[]);
void xuat(int x);
int main()
{
	char S[200];
	gets(S);
	int x=dem_Tu(S);
	xuat(x);
	return 0;
}
int dem_Tu(char S[])
{
	int n=strlen(S);
	int dem=0;
	if(S[0]!=' ')
	{
		dem++;
	}
	for(int i=0;i<n-1;i++)
	{
		if(S[i] == ' ' && S[i+1] != ' ')
		{
			dem++;
		}	
	}
	return dem;
}
void xuat(int x)
{
	cout<<x;
}		
	
