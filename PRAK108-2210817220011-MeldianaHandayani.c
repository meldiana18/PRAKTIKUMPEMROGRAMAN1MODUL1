#include <stdio.h>
int main (){
    float jarak_tempuh, keliling_taman, jari_jari, phi, keliling_lingkaran;
    keliling_taman= 5;
    jarak_tempuh= 14;
    phi= 3.14;
keliling_lingkaran= jarak_tempuh/keliling_taman;
jari_jari= (keliling_lingkaran/(phi*2));

printf("Diketahui:\n");
printf("Pak Dengklek mengelilingi taman = 5 putaran\n");
printf("Jarak tempuh Pak Dengklek = 14 kilometer\n");
printf("Jawaban:\n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer", jari_jari);

}
