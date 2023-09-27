
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
void xuat(int k);
int main()
{
    char HoLot[30], Ten[12];
    printf("Nhap Ho Lot: ");
    gets(HoLot);
    printf("Nhap Ten: ");
    gets(Ten);
    int k=strcmp(HoLot,Ten); /* Ghep Ten vao HoLot*/
    printf("Ho ten la: ");
    puts(HoLot);
    xuat(k);
    getch();
    return 0;
}
void xuat(int k)
{
	cout<<k;
}
