#include <iostream>
using namespace std;

        string rasaMinuman[7] = {"1. Thai Tea \t\t",
                                 "2. Green Tea\t\t",
                                 "3. Black Choco\t\t",
                                 "4. Red Velvet\t\t",
                                 "5. Manggo Yakult\t",
                                 "6. Lemon Tea Yakult\t",
                                 "7. Taro\t\t\t"};
        string harga[7] = {"10000","10000","13000","13000","15000","15000","13000"};
        string toping[4] = {"1. Boba \t\t",
                            "2. Cheese Cream \t",
                            "3. Jelly \t\t",
                            "4. Oreo \t\t"};
        string harga2[4] = {"3000","5000","2000","2000"};
   void judul(){
     cout << "             SELAMAT DATANG                  \n ";
        cout << "               DI BOBANA                     \n ";
        cout << endl;
          cout << "============================================\n";
          cout << "            MENU MINUMAN BOBA               \n";
          cout << "============================================\n";

   }
   void pesan(){
       cout << "MENU RASA  :\n";
      for (int a=0; a<7; a++){
        cout << rasaMinuman [a] << "Harga : Rp." << harga[a] <<endl;

      } cout << "\n===============================\n";
      cout << "\nMENU TOPING :\n";
      for (int b=0; b<4; b++){
        cout << toping [b] << "Harga : Rp." << harga2[b] << endl;
      }
      cout << endl;

   cout << "===============================\n";
   }
   void daftar (){

       int a,b,har,har2,bay,bay2,kem,ulang;
    cout << "\nPILIH RASA \t:";
    cin >> a; cout << endl;


 switch (a){
 case 1:
    cout << "Rasa Minuman \t:" << rasaMinuman[0] << "Rp." << harga[0] << endl;
    har= 10000;
 break;
 case 2:
    cout << "Rasa Minuman \t:" << rasaMinuman[1] << "Rp." << harga[1] << endl;
    har= 10000;
 break;
 case 3:
    cout << "Rasa Minuman \t:" << rasaMinuman[2] << "Rp." << harga[2] << endl;
    har= 13000;
 break;
 case 4:
    cout << "Rasa Minuman \t:" << rasaMinuman[3] << "Rp." << harga[3] << endl;
    har= 13000;
 break;
 case 5:
    cout << "Rasa Minuman \t:" << rasaMinuman[4] << "Rp." << harga[4] << endl;
    har= 13000;
 break;
 case 6:
    cout << "Rasa Minuman \t:" << rasaMinuman[5] << "Rp." << harga[5] << endl;
    har= 15000;
 break;
 case 7:
    cout << "Rasa Minuman \t:" << rasaMinuman[6] << "Rp." << harga[6] << endl;
    har= 13000;
 break;
 }

    cout << "\nPILIH TOPING \t:";
    cin >> b; cout << endl;
 switch (b){
 case 1:
    cout << "PILIH TOPING \t:" << toping[0] << "Rp." << harga2[0] << endl;
    har2= 3000;
 break;
 case 2:
    cout << "PILIH TOPING \t:" << toping[1] << "Rp." << harga2[1] << endl;
    har2= 5000;
 break;
 case 3:
    cout << "PILIH TOPING \t:" << toping[2] << "Rp." << harga2[2] << endl;
    har2= 2000;
 break;
 case 4:
    cout << "PILIH TOPING \t:" << toping[3] << "Rp." << harga2[3] << endl;
    har2= 2000;
 break;
 }
 system ("cls");
cout << endl;
    bay = har+har;
      cout << "TOTAL SEMUA \t: Rp." << bay << endl;
      cout << "DI BAYAR \t: Rp.";
      cin >> bay2;
    kem = bay2-bay;
      cout << "KEMBALIAN \t: Rp." << kem << endl;
   }



      int main (){


   char ulang;

  do {
        system ("cls");
    judul();
    pesan();
    daftar();
    cout << endl;
    cout << "===========================================\n";
    cout << "         INGIN MEMESAN LAGI (y/t)            ";
    cin >> ulang;
    cout << "===========================================\n";
  }
  while (ulang == 'y' || ulang == 'Y');

      system ("cls");
  cout << "======================================\n";
  cout << "     TERIMAKASIH ATAS PESANAN ANDA    \n";
  cout << "======================================\n";
cout << endl;


      }
