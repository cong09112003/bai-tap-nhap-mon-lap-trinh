// Chuoi
#include<iostream>
#include<string.h>


#define size 100
using namespace std;

void nhap(char S[]);
void xuat(char S[]);
void daoNguoc(char S[],char S1[]);
void xuatInHoa(char S[]);
void xoaKhoangTrang(char S[],char S3[]);
void xoa(char s[], int &len, int k);
void timTuDaiNhat(char S[],char S4[]);
int main()
{
	char S[size];
	char S1[size];
	char S3[size];
	char S4[size];
	nhap(S);
	xuat(S);
	daoNguoc(S,S1);
	xuatInHoa(S);
	timTuDaiNhat(S,S4);
	xuat(S4);
	xoaKhoangTrang(S,S3);
	xuat(S3);
	return 0;
}
void nhap(char S[])
{
	gets(S);
}
void xuat(char S[])
{
	puts(S);
}
void hoanVi(char &x,char &y)
{
	char t=x;
	x=y;
	y=t;
}
void daoNguoc(char S[],char S1[])
{
	strcpy(S1,S);
	int x=strlen(S1);
	for(int i=0;i<x/2;i++)
	    hoanVi(S1[i],S1[x-i-1]);
	S[x]='\0';    
	xuat(S1);    
}
void xuatInHoa(char S[])
{
	int len=strlen(S);
	for(int i=0;i<len;i++)
	{
		if(S[i]>=65 && S[i]<=90)
		    cout<<S[i]<<endl;
	}
}
void xoaKhoangTrang(char S[],char S3[])
{
	strcpy(S3,S);
	int i = 0;
	int len = strlen(S3);
	while(S3[0] == ' ')
		xoa(S3,len,0);
	while(S3[len-1] == ' ')
		xoa(S3,len,len-1);
	while(i < len)
		if(S3[i] == ' ' && S3[i+1] == ' ')
			xoa(S3,len,i);
		else
			i++;
	S3[len] = '\0';
}
void xoa(char s[], int &len, int k)
{
	for(int i = k; i < len; i++)
		s[i] = s[i+1];
	len--;
}
void timTuDaiNhat(char S[],char S4[])
{
	strcpy(S4,S);
    char X[size];		// temporary
    char Y[size];		// result
    int j = 0;
	int maxlength = 0;
    for(int i = 0; i <= strlen(S4); i++)
	{
        if(S4[i] != 32 && S4[i] != '\0'){
	    X[j++] = S4[i];
	}
	else
	    {
            X[j] = '\0';
            if(strlen(X) > maxlength)
			{
                strcpy(Y,X);		// b -> c
                maxlength = strlen(X);	// update maxLength
            }
            j = 0;
        }
    }
    strcpy(S4,Y);
}
