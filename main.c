#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
printf("TAS KAGIT MAKAS OYUNU\n\n");

srand(time(NULL));
int i=0, tahmin;
int kullaniciSkor = 0, bilgisayarSkor = 0;

while(i < 5){
printf("Lütfen tahmininizi giriniz (1. tas, 2. kagıt, 3. makas): \n");
scanf("%d",&tahmin);
int bilgisayartahmini = (rand()%3)+1;
if(tahmin == 1){
if(bilgisayartahmini == 3){
kullaniciSkor++;
printf("kazandiniz \n");
}
else if(bilgisayartahmini == 2){
bilgisayarSkor++;
printf("bilgisayar kazandi \n");
}
else if(bilgisayartahmini == 1)
printf("Beraber \n");
}
else if(tahmin == 2){
if(bilgisayartahmini == 3){
bilgisayarSkor++;
printf("Bilgisayar Kazandi \n");
}
else if(bilgisayartahmini == 2)
printf("Beraber");
else if(bilgisayartahmini == 1){
kullaniciSkor++;
printf("Kazandiniz \n");
}
}
else if(tahmin == 3){
if(bilgisayartahmini == 3)
printf("Beraber \n");
else if(bilgisayartahmini == 2){
kullaniciSkor++;
printf("Kazandiniz \n");
}
else if(bilgisayartahmini == 1){
bilgisayarSkor++;
printf("Bilgisayar Kazandi \n");
}
}else{
 printf("Kural dışı tahmin girişİ \n");
}
i++;            
}
printf("Kullanici %d - %d Bilgisayar", kullaniciSkor, bilgisayarSkor);

return 0;
}
