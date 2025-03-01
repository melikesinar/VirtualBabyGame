#include <stdio.h>
#include <stdlib.h>

    int saglik = 100;
    int uyku = 7;
    int beslenme = 7;
    int eglence= 7;
    int tuvalet = 7;
    int hijyen = 7;
    int sosyallesme = 7;
    int sevgi = 7;
    int sanat = 7;
    int konusma = 7;
    int susuzluk = 7;

    int ihtiyac_duzeyi[10] = {7,7,7,7,7,7,7,7,7,7};
    char *ihtiyaclar[11] = {"Beslenme","Uyku","Tuvalet","Hijyen","Sosyallesme","Sevgi","Sanat","Konusma","Susuzluk","Eglence"};

    char bebek_ismi[100];
    int kontrol;


 void beslenme1(){
     char mama[4][20]={"hamburger","elma","cicibebe","kopek mamasi"};
     char miktar[5];
     int miktar1,mama_secimi,b=1;
    printf("Ne ile beslemek istersiniz\n");
    for(int i=0;i<4;i++){
    printf("%d) %s\n",b,mama[i]);
    b++;
    }
    scanf("%d",&mama_secimi);
    printf("Beslemek istediginiz miktari seciniz: ");
    scanf("%s",miktar);
    miktar1=atoi(miktar);

  switch(mama_secimi){
  case 1:
   ihtiyac_duzeyi[0]+=miktar1*3+1; //burda +1 yapmamızın sebebi tüm ihtiyacları azaltıcagımız icin beslenme ihtiyacı azalmasın diye ekstra 1 ekledik.
  break;
  case 2:
   ihtiyac_duzeyi[0]+=miktar1+1;
  break;
  case 3:
   ihtiyac_duzeyi[0]+=miktar1*2+1;
  break;
  case 4:
   ihtiyac_duzeyi[0]+=miktar1*(-1)+1;
  break;

  default:
    printf("Lutfen gecerli bir sayi giriniz.");
    }
printf("***Tebrikler %s beslediniz***\n\n\n",bebek_ismi);
 for (int i=0;i<10;i++){
    ihtiyac_duzeyi[i]--;
      printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]);

 }

 }
   void uyut(int kackere){

  if(kackere==0){
    return;

  }

  ihtiyac_duzeyi[1]+=4;
  printf("%s uyuyor..\n",bebek_ismi);


   for (int i=0;i<10;i++) {
    ihtiyac_duzeyi[i]--;
      printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]); }

uyut(kackere - 1);
}
void tuvalet1()
 {
     int secim1;
     printf("Secenekler:\n1)Cisini yaptir\n2)Kakasini yaptir\n3)Ayni anda yaptir\n");
     scanf("%d",&secim1);
     ihtiyac_duzeyi[2]+=4;

     int secim2;
     printf("Ellerini Yikadi mi)\n 1)Evet 2)Hayir\n");
     scanf("%d",&secim2);

     if(secim2==1){
     ihtiyac_duzeyi[3]++;
     printf("Hijyen ihtiyaci 1 puan artmistir.\n");
     }
     else if(secim2==2){
     ihtiyac_duzeyi[3]--;
     printf("Hijyen ihtiyaci 1 puan azalmistir.\n");
     }
     else
     printf("Lutfen gecerli deger giriniz\n");

     for (int i=0;i<10;i++) {
     ihtiyac_duzeyi[i]--;
     printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]); }

 }

void hijyen1()
 {   int secim3;
     printf("Secenekler:\n1)Ellerini yikat (+1 puan)\n2)Banyo yaptir(+2 puan)\n3)Çamasirlarini yika(+1 puan)\n");
     scanf("%d",&secim3);

     ihtiyac_duzeyi[4]++;

     if(secim3==1){

        ihtiyac_duzeyi[4]++;

        printf("%s ellerini yikadiniz.",bebek_ismi);


         }

     else if (secim3==2)
     {

        ihtiyac_duzeyi[4]+=2;

        printf("%s bici bici yaptirdiniz.",bebek_ismi);
        }

     else if (secim3==3)
        {

        ihtiyac_duzeyi[4]++;
        printf("%s camasirlarini yikadiniz.",bebek_ismi);
        }

     else

        printf("Lutfen gecerli deger giriniz \n");



     for (int i=0;i<10;i++) {
     ihtiyac_duzeyi[i]--;
      printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]);

      }
      }
      void sosyallesme1(){
      int secim4;
  printf("Hangi arkadasiyla sosyallestirmek istediginizi seciniz:\n 1)Ompi\n2)Alex\n3)Emily\n");
  scanf("%d",&secim4);
  switch(secim4){
  case 1:
      printf("*Ompiyle evde saklambac oynanildi*");
  case 2:
    printf("*Alexle futbol oynanildi*");
  case 3:
      printf("*Emilyle parka gidildi*");
  default:
    printf("Lutfen gecerli bir deger giriniz.");
    ihtiyac_duzeyi[5]+=4;
    }

for (int i=0;i<10;i++) {
     ihtiyac_duzeyi[i]--;
     printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]);
     }
}
  void sevgi1(){
  int secim5;
  int oyuncak_secimi;
  printf("Nasıl sevgi göstermek istersiniz:\n1)sarilmak\n2)opmek\n3)hediye almak\n");
  scanf("%d",&secim5);
  switch(secim5){
  case 1:
      printf("%s sarildiniz**",bebek_ismi);
      ihtiyac_duzeyi[6]+=2;
  case 2:
    printf("%s optunuz**",bebek_ismi);
    ihtiyac_duzeyi[6]+=2;
  case 3:
    printf("Ne hediye almak istersiniz:\n1)Pelus Ayı(1 puan)\n2)Pelus Dinazor(2 puan)\n");
    scanf("%d",&oyuncak_secimi);
    switch(oyuncak_secimi){
case 1:
    ihtiyac_duzeyi[6]+=2;
case 2:
    ihtiyac_duzeyi[6]+=3;
default:
    printf("Lutfen gecerli bir deger giriniz");}

  }
for (int i=0;i<10;i++) {
     ihtiyac_duzeyi[i]--;
     printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]);
     }
  }

      void sanat1()
      {
      int secim6;
      printf("Hangi sanatsal aktiviteyi yaptirmak isterseniz?\nSeçenekler:1)Tiyatro oyununa götür.\n2)Müzeye götür.\n3)Resim yaptir.");
      scanf("%d",&secim6);

      if(secim6==1 || secim6==2 || secim6==3)
      ihtiyac_duzeyi[7]+=4;

      else
        printf("Lutfen gecerli bir deger giriniz \n");

        for (int i=0;i<10;i++) {
     ihtiyac_duzeyi[i]--;
      printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]);

      }
      }

      void konusturmak1(){
      int secim7;
      printf("Hangi kelimeyi soyletmek istersiniz?\n1)Anne\n2)Baba\n3)Mama\n4)Teyze");
      scanf("%d",&secim7);

      if(secim7==1){
      printf("%s anne dedi.",bebek_ismi);
      ihtiyac_duzeyi[8]+=4;
      ihtiyac_duzeyi[0]--;
      printf("%s kelime soylerken ekstra olarak acikti.\n");
      }

      else if(secim7==2){
      printf("%s baba dedi.",bebek_ismi);
      ihtiyac_duzeyi[8]+=4;
      ihtiyac_duzeyi[0]--;
      printf("%s kelime soylerken ekstra olarak acikti.\n");
      }
      else if(secim7==3){
      printf("%s mama dedi.",bebek_ismi);
      ihtiyac_duzeyi[8]+=4;
      ihtiyac_duzeyi[0]--;
      printf("%s kelime soylerken ekstra olarak acikti.\n");
      }
      else if(secim7==4){
      printf("%s teyze dedi.",bebek_ismi);
      ihtiyac_duzeyi[8]+=2;
      ihtiyac_duzeyi[0]--;
      printf("%s kelime soylerken ekstra olarak acikti.\n");
      }
      else
       printf("Lutfen gecerli bir deger giriniz\n");


        for (int i=0;i<10;i++) {
      ihtiyac_duzeyi[i]--;
      printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]);

      }
     }

      void susuzluk1()
      {
      int secim8;
      printf("Secenekler:\n1)Biberon (+1puan -1puan tuvalet)\n2)Su icir(+3puan -2puan tuvalet)\n3)Emzir(+2puan\n");
      scanf("%d",&secim8);

      if(secim8==1)
      {
        ihtiyac_duzeyi[9]+=2;
        ihtiyac_duzeyi[2]-=1;

        printf("%s biberonlandi.Birazcik tuvaleti geldi.\n",bebek_ismi);
      }
      else if(secim8==2)
      {
        ihtiyac_duzeyi[9]+=4;
        ihtiyac_duzeyi[2]-=2;

        int secim9;
        printf("Secenekler\n1)Erikli Su\n2)Hayat Su\n3)Ozkaynak\n");
        scanf("%d",&secim9);

        if(secim9==1 || secim9==2 || secim9==3) {
        printf("%s su icti.Birazcik tuvaleti geldi.\n",bebek_ismi);
        }

        else{
            printf("Lutfen gecerli bir deger giriniz\n");
            }}



      else if(secim8==3)
      {
        ihtiyac_duzeyi[9]+=3;
        printf("%s emzirildi.\n",bebek_ismi);
        }

      else

         printf("Lutfen gecerli bir deger giriniz\n");


      for (int i=0;i<10;i++) {
      ihtiyac_duzeyi[i]--;
      printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]);

      }

      }
      void eglendirme1(){
     int secim10;
     printf("%s eglenmek istiyor:\n1)Oyuncaklarla oynat\n2)Parka gotur\n3)Sarki soyle",bebek_ismi);
     scanf("%d",&secim10);
   switch(secim10){
   case 1:
    printf("* Tebrikler!%s oyuncaklariyla oynattiniz *",bebek_ismi);
    ihtiyac_duzeyi[10]+=4;
   case 2:
    printf("* Tebrikler! %s parka goturdunuz *",bebek_ismi);
    ihtiyac_duzeyi[10]+=4;
   case 3:
    printf("* Tebrikler! %s sarki soyledniz *",bebek_ismi);
    ihtiyac_duzeyi[10]+=4;
   default:
    printf("Lutfen gecerli bir deger giriniz");
    }
   for (int i=0;i<10;i++) {
     ihtiyac_duzeyi[i]--;
     printf("Guncel ihtiyac miktarlari\n %s:%d\n",ihtiyaclar[i],ihtiyac_duzeyi[i]);
     } }












int main()
{



    int kontrol;
    char bebek_ismi[100];
    char goz_rengi[20];
    char sac_rengi[20];
    int yas;


    printf("OYUNA BASLAMADAN ONCE LUTFEN BEBEGINIZI YARATIN \n");


    printf("Bebeginizin ismini giriniz: \n");
    gets(bebek_ismi);
    printf("Bebeginizin goz rengini giriniz: \n");
    gets(goz_rengi);
    printf("Bebeginizin sac rengini giriniz: \n");
    gets(sac_rengi);
    printf("Bebeginizin yasini giriniz: \n");
    scanf("%d",&yas);









    printf("%s %s goz renginde, %s sac renginde, %d yasindadir. \n Yasamini devam ettirebilmesi icin bazi ihtiyaclari vardir \n",bebek_ismi,goz_rengi,sac_rengi,yas);
    printf("Saglik puani : %d \n",saglik);
    printf("Uyku ihtiyaci : %d \n",uyku);
    printf("Beslenme ihtiyaci : %d \n",beslenme);
    printf("Eglenme ihtiyaci : %d \n",eglence);
    printf("Tuvalet ihtiyaci : %d\n",tuvalet);
    printf("Hijyen ihtiyaci : %d\n ",hijyen);
    printf("Sosyallesme ihtiyaci : %d\n ",sosyallesme);
    printf("Sevgi ihtiyaci : %d\n ",sevgi);
    printf("Sanat ihtiyaci : %d\n ",sanat);
    printf("Konusma ihtiyaci : %d n ",konusma);
    printf("Susuzluk ihtiyaci : %d\n ",susuzluk);

do{
    printf("Beslemek icin 1'i seciniz.\n");
    printf("Uyutmak icin 2'yi seciniz. \n");
    printf("Tuvalet icin 3'u seciniz.\n");
    printf("Hijyen icin 4'ü seciniz.\n");
    printf("Sosyallestirmek icin 5'i seciniz.\n");
    printf("Sevgi gšstermek icin 6'yı seciniz.\n");
    printf("Sanat icin 7'yi seciniz.\n");
    printf("Konusturmak icin 8'i seciniz.\n");
    printf("Susuzluk icin 9'u seciniz.\n");
    printf("Eglendirmek icin 10'u seciniz.\n");
    printf("Cikis yapmak icin 0'ı seçiniz.\n");
    scanf("%d",&kontrol);

    switch(kontrol) {
case 1 :
    beslenme1(0,0);
    break;

case 2 :
    uyut(3);
      break;

case 3 :
    tuvalet1();
      break;

case 4 :
    hijyen1();
      break;

case 5 :
   sosyallesme1();
     break;

case 6 :
    sevgi1();
      break;

case 7 :
    sanat1();
      break;
case 8 :
    konusturmak1();
    break;
case 9 :
    susuzluk1();
      break;
case 10 :
    eglendirme1();
    break;
case 0 :
    printf("%s BYE BYE DIYOR..",bebek_ismi);
    break;
default :
    printf("Gecerli bir deger giriniz\n");
    }
    }while(kontrol !=0);
    if(beslenme>=15)
    {
        printf("%s asiri yemekten obez olup oldu.\nGAME OVER",bebek_ismi);
    }
    else if(beslenme<=0)
        printf("%s acliktan oldu birdahakine beslemeyi unutma!",bebek_ismi);
    else if(eglence>=15)
        printf("%s cok eglendigi icin (UYKU -3 PUAN)\n",bebek_ismi);

    else if(eglence<=0)
    {
        printf("%s sikintidan patliyor az eglendir!",bebek_ismi);
        saglik-=10;
        }

    else if(tuvalet>=15)
        printf("%s icinde su kalmadi artik yeter!",bebek_ismi);
    else if(tuvalet<=0)
    {
        printf("%s altina yapti hijyeni 0'a indi",bebek_ismi);
        ihtiyac_duzeyi[3]=0;
        saglik-=10;
    }
    else if(hijyen<15)

{
        printf("%s titizlik hastaligina yakalandi(-10PUAN SAGLIK)",bebek_ismi);
        saglik-=10;
    }
    else if(hijyen<=0)
    {
        printf("%s hastaliga yakalandi(-30PUAN SAGLIK)",bebek_ismi);
        saglik-=30;
    }
    else if(sosyallesme>=15)
    {
        printf("%s cok disari da durdugu icin kirlendi(-2PUAN HIJYEN)",bebek_ismi);
        ihtiyac_duzeyi[3]-=2;
    }
    else if(sosyallesme<=0)
    {
        printf("%s asosyal oldu eglence lazim (-5PUAN EGLENCE)",bebek_ismi);
        ihtiyac_duzeyi[9]-=2;
    }
    else if(sevgi>=15)
    {
        printf("%s cok sevgiden dolayi sizden uzaklasti (-2PUAN SOSYALLESME)",bebek_ismi);
        ihtiyac_duzeyi[4]-=2;
    }
    else if(sevgi<=0)
    {
        printf("%s cok az sevgiden dolayi bir sey yemiyor (-2PUAN BESLENME)",bebek_ismi);
        ihtiyac_duzeyi[0]-=2;
    }
    else if(sanat>=15)
    {
        printf("%s cok sanattan dolayi sikildi (-2PUAN EGLENME",bebek_ismi);
        ihtiyac_duzeyi[9]-=2;

    }
    else if(sanat<=0)
    {
        printf("%s cok az sanattan dolayi size sinir oldu ve bir sey yemiyor (-2PUAN EGLENME)",bebek_ismi);
        ihtiyac_duzeyi[9]-=2;
    }
    else if(konusma>=15)
    {
        printf("%s cok konustugundan dolayi susadi (-2PUAN SUSUZLUK)",bebek_ismi);
        ihtiyac_duzeyi[8]-=2;
    }
    else if(konusma<=0)
    {
        printf("%s konusturmadiginiz icin ice donuk oldu (-2PUAN SOSYALLESME)",bebek_ismi);
        ihtiyac_duzeyi[4]-=2;
    }
    else if(susuzluk>=15)
    {
        printf("%s cok icecek ictiginden dolayi tuvaleti geldi (TUVALET 0'A INDI)",bebek_ismi);
        ihtiyac_duzeyi[2]=0;
    }
    else if(susuzluk<=0)
    {
        printf("%s cöl gibi kupkuru bir bebegeniz oldu. OLDU.",bebek_ismi);
        kontrol=0;
    }
















    return 0;
}
