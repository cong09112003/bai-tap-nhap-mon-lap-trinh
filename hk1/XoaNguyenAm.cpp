// Xoa Bo Cac Nguyen Am
#include <iostream>
#include<string.h>
#define size 2000
void xoaNguyenAm(char S[]);
void nhap(char S[]);
void xuat(char S[]);
void xoa(char S[],int x,int i);
int main()
{
	char S[size];
	nhap(S);
	xoaNguyenAm(S);
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
void xoaNguyenAm(char S[])
{
	int len=strlen(S);
	int i = 0;
	while(S[0] == 'A'|| S[0] == 'I'|| S[0] == 'O'||S[0] == 'E'|| S[0] == 'U')
		xoa(S,len,0);
	while(S[len-1] == 'A'|| S[len-1] == 'I'|| S[len-1] == 'O'||S[len-1] == 'E'|| S[len-1] == 'U')
		xoa(S,len,len-1);
	while(i < len)
		if(S[i] == 'A'|| S[i] == 'I'||S[i] == 'O' ||S[i] == 'E'|| S[i] == 'U')
			xoa(S,len,i);
		else
			i++;
	S[len] = '\0';
}
void xoa(char S[],int len,int k)
{
	for(int i = k; i < len; i++)
		S[i] = S[i+1];
	len--;
}
	
