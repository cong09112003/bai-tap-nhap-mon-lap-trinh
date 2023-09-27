#include<iostream>
#include<string.h>
using namespace std;
#define size 10000
void nhap(char S[]);
void xuat(char S[]);
void chuanHoaToanBo(char S[]);
void xoaKyTuDacBiet(char S[]);
void xoaKhoangTrang(char S[]);
void chuanHoa(char S[]);
void doiChuCaiDauTienMoiTuThanhInHoa(char S[]);
int main()
{
	char S[size];
	nhap(S);
	chuanHoaToanBo(S);
	xuat(S);
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
void chuanHoaToanBo(char S[])
{
	xoaKyTuDacBiet(S);
	xoaKhoangTrang(S);
	chuanHoa(S);
}
void xoaKyTuDacBiet(char S[])
{
	int len=strlen(S);
	int i=0;
	while(i<len)
	{
		if(S[i]>=65 && S[i]<=90 || S[i]>=97 && S[i]<=122 || S[i]==' ')
		    i++;
		else
		    S[i]=' ';
	}
	S[len]='\0';
}
void xoaKhoangTrang(char S[])
{
	int i=0;
	while(S[0]==' ')
	    strcpy(&S[0],&S[1]);
	int len=strlen(S);
	while(S[len-1]==' ')
	    strcpy(&S[len],&S[len]);
	for(int i=0;i<len-2;i++)
	{
		if((S[i]==' '&& S[i+1]==' '))
		{
		    strcpy(&S[i],&S[i+1]);
		    i--;
	    }
	}
	S[len]='\0';
}
void chuanHoa(char S[])
{
	int len=strlen(S);
	for(int i=0;i<strlen(S);i++)
	{
		if(S[i]>=65 && S[i]<=90 )
		    S[i]=S[i]+32;
	}
	S[len]='\0';
	doiChuCaiDauTienMoiTuThanhInHoa(S);
}
void doiChuCaiDauTienMoiTuThanhInHoa(char S[])
{
	if(S[0]>=97 && S[0]<=122)
	S[0]=S[0]-32;
	for(int i = 0; i < strlen(S); i++)
		if( S[i] == ' ' && (S[i+1 ] >= 97 && S[i+1] <= 122) )
			S[i+1] = S[i+1] - 32;
}
