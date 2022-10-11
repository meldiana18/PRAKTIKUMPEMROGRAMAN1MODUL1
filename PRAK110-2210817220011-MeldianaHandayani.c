#include <stdio.h>
int main (){
    float Alas, Tinggi, Sisi_miring, Keliling, Luas;
    Alas= 5;
    Tinggi= 12;
    Sisi_miring= sqrt(pow(Alas,2)+ pow(Tinggi,2));
    Keliling= Alas+Tinggi+Sisi_miring;
    Luas= 0.5* Alas*Tinggi;

printf("Diketahui:\n");
printf("Alas = 5 cm\n");
printf("Tinggi = 12 cm\n");

printf("Jawab:\n");
printf("Sisi A= %.f cm\n", Alas);
printf("Sisi B= %.f cm\n", Tinggi);
printf("Sisi C= %.f cm\n", Sisi_miring);
printf("Keliling= %.f cm\n", Keliling);
printf("Luas= %.f cm\n", Luas);

}