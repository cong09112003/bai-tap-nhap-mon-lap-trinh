
#include<string.h>
#include<iostream>
#define size 200
using namespace std;
void tinhTong(char S1[],char S2[],char S[]);
void nhap(char S1[],char S2[]);
void xuat(char S[]);
void chen(char S[],int k);
void chuyenHoa(char S1[],char S2[]);
void tinhHieuLonChoNho(char S1[],char S2[],char S3[]);
void tinhHieu(char S1[],char S2[],char S4[]);

int main()
{
	char S1[size],S2[size],S[size],S3[size],S4[size];
	nhap(S1,S2);
	chuyenHoa(S1,S2);
	//tinhTong(S1,S2,S);
	//xuat(S);
	//tinhHieuLonChoNho(S1,S2,S3);
	//xuat(S3);
	tinhHieu(S1,S2,S4);
	xuat(S4);
}	
void tinhTong(char S1[],char S2[],char S[])
{
	strrev(S1);
	strrev(S2);
	int len=strlen(S1);
	int nho=0;
	for(int i=0;i<len;i++)
	{
		int t=(S1[i]-'0')+(S2[i]-'0')+nho;
		if(t<10)
		{
		    S[i]=t+'0';
		    nho=0;
		}    
		else
		{
			S[i]=t-10+'0';
			nho=1;
		} 
		//S[i]=t%10+'0';
		//nho=t/10;	  
	}
	if(nho==1)
	    S[len++]='1';
	S[len]='\0';
	strrev(S);
}	
void nhap(char S1[],char S2[])
{
	gets(S1);
	gets(S2);
}
void xuat(char S[])
{
	puts(S);
}	
void chuyenHoa(char S1[],char S2[])
{
	int len1=strlen(S1);
	int len2=strlen(S2);
	if(len1>len2)
		chen(S2,len1-len2);
	else
	    chen(S1,len2-len1);	
} 
void chen(char S[],int k)
{
	strrev(S);
	int len=strlen(S);
	for(int i=0;i<k;i++)
	    S[len+i]='0';
	S[len+k]='\0'; 
	strrev(S);   
}
void tinhHieuLonChoNho(char S1[],char S2[],char S3[])
{
	strrev(S1);
	strrev(S2);
	int len=strlen(S1);
	int nho=0;
	for(int i=0;i<len;i++)
	{
		int t=(S1[i]-'0') - (S2[i]-'0')-nho;
		if(t<0)
		{
		    S3[i]=t+10+'0';
		    nho=1;
		}    
		else
		{
			S3[i]=t+'0';
			nho=0;
		} 	  
	}
	S3[len]='\0';
	strrev(S3);
}
void tinhHieu(char S1[],char S2[],char S4[])
{
	if(strcmp(S1,S2)>0)
	    tinhHieuLonChoNho(S1,S2,S4);
	else
	{
		tinhHieuLonChoNho(S2,S1,S4);
		strrev(S4);
		int len=strlen(S4);
		S4[len]='-';
		S4[len+1]='\0';
		strrev(S4);
	}	
}	
