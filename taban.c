#include <stdio.h>
#include <conio.h>
#include<string.h>
#include <math.h>
#include<windows.h>

void gotoxy(int x, int y);
void GotoXY(int x,int y);
struct coordinate
{
    int x;
    int y;
    int direction;
};
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void GotoXY(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,b);
}
void load()
{
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("Yukleniyor...");
    gotoxy(30,15);
    for(r=1; r<=20; r++)
    {
        for(q=0; q<=10000000; q++);
        printf("%c",177);
    }
    printf("\n\n\t\tYuklenme Tamamlandi...Baslamak Icin Bir Tusa Basiniz\n\n");
    getch();
}
int hextodec(char hexDeger[]){
int uzunluk = strlen(hexDeger);
int taban = 1;
int dec_deger = 0;
for(int i=uzunluk-1;i>=0;i--){
   if(hexDeger[i]>='0' && hexDeger[i]<='9'){
    dec_deger +=(hexDeger[i]-48)*taban;
    taban=taban*16;
   }
    else if(hexDeger[i]>='A' && hexDeger[i]<= 'F'){
        dec_deger+=(hexDeger[i]-55)*taban;
        taban=taban*16;
    }
}
return dec_deger;
}

int main ()
{
load();
system("cls");
int aa[100];
int j,k,l,m,b,c,a,x,y,sonuc;
int i;
int sayi;
int taban;
int taban2;
int ss;

printf("****************TABAN CEVIRME PROGRAMINA HOS GELDINIZ****************\n");
printf("Kaclik tabandaki sayiyi 10 luk tabana cevirmek istersiniz ?: \n");
scanf("%d",&taban2);
printf("\n");
printf("%d lik tabanindaki sayiyi giriniz(Lutfen buyuk harf kullaniniz!!): \n",taban2);
scanf("%d",&ss);


if(taban2==16){
char hex_sayi[20];
scanf("%s",&hex_sayi);
printf("\n");
printf("%d lik tabandan 10'luk tabana cevirilmis sayiniz: %d'dir.\n",taban2,hextodec(hex_sayi));

}
else{

a=0;
k=0;
x=0;
j=0;
sayi=0;
sonuc=0;

for(int i=0;i<100;i++){
 aa[i]=0;
 }

for(i=0;i<100;i++){
if(ss>=10){
 aa[i]=ss%10;
 ss=ss-aa[i];
 ss=ss/10;
}

else if(ss<10){
 aa[i]=ss;
 break;
 }
 }

int kk=0;
for(int i=0;i<100;i++){
 sonuc=sonuc+aa[kk]*pow(taban2,i);
 kk++;
 }

sayi=sonuc+0;

printf("\n");
printf("%d lik tabandan 10'luk tabana cevirilmis sayiniz: %d'dir.\n",taban2,sayi);

 return 0;
 getch();
 }
 }//M.MOLLA

