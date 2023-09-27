  //chuyen he 16 sang he 10
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int chuyenHe16SangHe10(char S[]);
void nhap(char S[]);
void xuat(int x);
#define size 1000
int main()
{
	char S[size];
	nhap(S);
	int ketqua=chuyenHe16SangHe10(S);
	xuat(ketqua);
	return 0;
}
void nhap(char S[])
{
	gets(S);
}
int chuyenHe16SangHe10(char S[])
{
	int ketqua=0;
	int x=strlen(S);
	int mu=0;
	int i=x-1;
	while(i>=0)
	{
			if(S[i]>='0' && S[i]<='9' )
			        ketqua=ketqua+((S[i]-'0')*pow(16,mu++));				
			else
			    if(S[i]=='A')
				    ketqua=ketqua+((10)*pow(16,mu++));
			    else 
				    if(S[i]=='B')
				        ketqua=ketqua+((11)*pow(16,mu++));
		            else 
					    if(S[i]=='C')
				            ketqua=ketqua+((12)*pow(16,mu++));
			            else 
						    if(S[i]=='D')
				                ketqua=ketqua+((13)*pow(16,mu++));
			                else 
							    if(S[i]=='E')
				                    ketqua=ketqua+((14)*pow(16,mu++));
			                    else 
								    if (S[i]=='F')
				                        ketqua=ketqua+((15)*pow(16,mu++));
				                    else
									    return ketqua;    
			i--;	
	}
	return ketqua;	
}
void xuat(int x)
{
	cout<<x;
}	

