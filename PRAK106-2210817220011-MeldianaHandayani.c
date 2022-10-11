#include <stdio.h>
int main (){
    int a,b,c, x;
    a=4;
    b=8;
    c=3;
    printf("Variabel a bernilai 4\n");
    printf("Variabel b bernilai 8\n");
    printf("Variabel c bernilai 3\n");
x= a==b;
printf("apakah a sama dengan b? jawabannya adalah %d\n", x); 
x= b>c;
printf("apakah b lebih besar dari c? jawabannya adalah %d\n", x);
x= a!=c;
printf("apakah a tidak sama dengan c? jawabannya adalah %d\n", x);
}  