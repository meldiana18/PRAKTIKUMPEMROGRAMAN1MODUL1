#include <stdio.h>
int main (){
    int a, b, c, harga_tanah, keliling_segitiga, biaya;
    a= 4;
    b= 5;
    c= 7;
    harga_tanah= 85000;
keliling_segitiga= a+b+c;
biaya= keliling_segitiga*harga_tanah;

printf("Diketahui:\n");
printf("Panjang sisi segitiga berturut-turut adalah 4,5, dan 7\n");
printf("Keliling tanah Pak Dengklek adalah %d\n", keliling_segitiga);
printf("Harga_tanah Per Meter adalah 85000\n");
printf("Jawaban:\n");
printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d\n", biaya);
}