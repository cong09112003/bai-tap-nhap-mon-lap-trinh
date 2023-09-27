#include <stdio.h>
#include <stdlib.h>

main(){
    int n;
    do{
       printf("\nNhap so tien can rut: ");scanf("%d",&n);
       }
    while (n<10000);
    if (n%10000!=0){
       printf("\nSo tien phai chia chet cho 10.000");
       return 1;
       }
    int motTram = n/100000;
    n = n % 100000;
    int namMuoi = n/50000;
    n = n % 50000;
    int haiMuoi = n/20000;
    n = n % 20000;
    int muoi = n/10000; 
    printf("Ket qua: \n");
    printf("%d x 100.000 \n", &motTram);
    printf("%d x  50.000 \n", &namMuoi);    
    printf("%d x  20.000 \n", &haiMuoi);
    printf("%d x  10.000 \n", &muoi);
    system("pause");
    return 0;
}
