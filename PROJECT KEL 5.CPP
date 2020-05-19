#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>
#include <windows.h>
#include <fstream>
#include <dos.h>


bintang()
{cout<<"**********************************************************************************"<<endl;}

garis()
{cout<<"=================================================================================="<<endl;}

kop()
{cout<<"\n                         ***  Vanshoes STORE  ***"<<endl;
 cout<<"                      MENJUAL BERBAGAI JENIS HANDPHONE "<<endl;
 cout<<"                              \n"<<endl;}


class jual
{
public:
char kodemerk,merk[15],kodetipe[10],tipe[20],ket[50];
long jml,harga,st,stok;
};

jual hp[15];


struct
{
int nomor;
char namapembeli[20],alamat[30],telp[15],tgl[30],ktp[16];
}pembeli[5];



void main()
{

int i,a,diskon,np=0,nomorpembeli;
char menuutama,lagi,pilih,quit,tanggal[30],jam[5];
long total=0,tb,uk,ub;
   struct date t;
   struct time w;

   getdate(&t);
   gettime(&w);

             char username[15],username2[15],tgl2[30];
             int password,l;
login:
clrscr();
system("color f1");
garis();
cout << "                                  WELCOME !! \n";
garis();
cout << "             ---- Masukkan USERNAME dan PASSWORD anda --- "<<endl;
garis();
  int pass = 1234;
  l = 1;
   do {
       cout << "Username : ";gets(username);
      cout << "Password : "; cin >> password;

                         if (password == pass) {
 system("color fa");
 cout<<"\n\n\n\t\t\t\tLogin Berhasil,sedang loading..\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++);
 }

 clrscr();

goto utama;
 getch();
                        } else {
          cout << "\n-------------------------\n";
                                     cout << "Maaf ID & PASSWORD Salah!" << endl;
         cout << "-------------------------\n\n";
                                    l = l +1;
                        }
            }
            while (l <= 3);

   cout << "Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
   cout << "Jika anda lupa ID&PASSWORD anda, silahkan hub vanshoes@support.com, Terima Kasih..";
   cout<<endl;
garis();
   cout << "                Tekan tombol apa saja untuk login kembali... "<<endl;
garis();

   getch();
 goto login;

utama:

clrscr();
system("color f1");

garis();
bintang();
kop();
bintang();
garis();
cout<<"Nama Kasir Saat Ini : "<<username<<endl;
garis();
cout<<"\n                     <<          MENU  UTAMA          >>"<<endl;
cout<<"\n                        1. Daftar Barang "<<endl;
cout<<"\n                        2. Cek Stok Barang "<<endl;
cout<<"\n                        3. Data Pembeli dan Transaksi"<<endl;
cout<<"\n                        4. Cari Data Pembeli"<<endl;
cout<<"\n                        5. Tampilkan/Edit Data Pembeli"<<endl;
cout<<"\n                        6. Export Data Pembeli"<<endl;
cout<<"\n                        7. Keluar/Logout"<<endl;
cout<<"\n                        -----------------------------"<<endl;
cout<<"\n                        Pilih Kode [1/2/3/4/5/6] : ";cin>>menuutama;

if(menuutama=='1')
{goto satu;}
else if(menuutama=='2')
{clrscr();goto dua;}
else if(menuutama=='3')
{clrscr();goto tiga;}
else if(menuutama=='4')
{clrscr();goto empat;}
else if(menuutama=='5')
{clrscr();goto lima;}
else if(menuutama=='6')
{clrscr();goto enam;}
else
{clrscr();goto tujuh;}


satu:
clrscr();
system("color f1");

cout<<endl;
cout<<"                              <<        DAFTAR  BARANG        >> "<<endl<<endl;
cout<<"              ==============================================================="<<endl;
cout<<"              | Kode |   Merk  |  Kode |    Tipe           |    Harga       |"<<endl;
cout<<"              | Merk |    HP   |  Tipe |    HP             |   Per Unit     |"<<endl;
cout<<"              ==============================================================="<<endl;
cout<<"              |  S   | Samsung | A9    | Galaxy A9         | Rp. 6.200000   |"<<endl;
cout<<"              |      |         | J5    | Galaxy J5         | Rp. 2.700000   |"<<endl;
cout<<"              |      |         | J7    | Galaxy J7         | Rp. 3.300000   |"<<endl;
cout<<"              --------------------------------------------------------------"<<endl;
cout<<"              |  X   | Xiaomi  | N5    | Note 5 (3/32GB)   | Rp. 2.300000   |"<<endl;
cout<<"              |      |         | PF    | Pocophone(8/64GB) | Rp. 4.900000   |"<<endl;
cout<<"              |      |         | R4    | Redmi4            | Rp. 1.900000   |"<<endl;
cout<<"              --------------------------------------------------------------"<<endl;
cout<<"              |  A   | ASUS    | M1    | Max Pro M1(3/32GB)| Rp. 1.800000   |"<<endl;
cout<<"              |      |         | L1    | Live 1            | Rp. 2.200000   |"<<endl;
cout<<"              |      |         | ROG   | R.O.G(Rare)(512GB)| Rp. 26.000000  |"<<endl;
cout<<"              --------------------------------------------------------------"<<endl;
cout<<"              |  I   | IPHONE  | XS    | Iphone XS(128GB)  | Rp. 25.000000  |"<<endl;
cout<<"              |      |         | 8     | Iphone 8(64GB)    | Rp. 8.000000   |"<<endl;
cout<<"              |      |         | 7     | Iphone 7(64GB)    | Rp. 5.000000   |"<<endl;
cout<<"              --------------------------------------------------------------"<<endl;
cout<<"              |  R   | Realme  | C1    | Realme C1         | Rp. 1.499000   |"<<endl;
cout<<"              |      |         | 2     | Realme 2          | Rp. 1.999000   |"<<endl;
cout<<"              |      |         | 2P    | Realme 2 Pro      | Rp. 2.899000   |"<<endl;
cout<<"              --------------------------------------------------------------"<<endl;
cout<<"              |  s   | Sony    | XZ    | Xperia XZ         | Rp. 2.000000   |"<<endl;
cout<<"              |      | Xperia  | Z5    | Xperia Z5 Premium | Rp. 5.400000   |"<<endl;
cout<<"              |      |         | XA2   | Xperia XA2 Ultra  | Rp. 6.099000   |"<<endl;
cout<<"              =============================================================="<<endl<<endl;
cout<<"              1. Kembali ke Menu Utama "<<endl;
cout<<"              2. Cek Stok Barang "<<endl<<endl;
cout<<"              ------------------------"<<endl<<endl;
cout<<"              Pilih Kode  : ";cin>>pilih;
if(pilih=='1')
{clrscr();goto utama;}
else{clrscr();goto dua;}
clrscr();

dua:
clrscr();
system("color f1");
cout<<"                          <<        STOK BARANG        >> "<<endl<<endl;
cout<<"\n\n                        ================================="<<endl;
cout<<"                        |  Merk   | Kode |   Kode Tipe  |"<<endl;
cout<<"                        |   HP    | Merk |      HP      |"<<endl;
cout<<"                        ================================="<<endl;
cout<<"                        | SAMSUNG |  S   | A9/J5/J7     | "<<endl;
cout<<"                        | XIAOMI  |  X   | N5/PF/R4     |"<<endl;
cout<<"                        | ASUS    |  A   | M1/L1/ROG    |"<<endl;
cout<<"                        | IPHONE  |  I   | XS/8/7       |"<<endl;
cout<<"                        | Realme  |  R   | C1/2/2P      |"<<endl;
cout<<"                        | Sony    |  s   | XZ/25/XA2    |"<<endl;
cout<<"                        ================================="<<endl;
cout<<"                         Note : S (Samsung) s (Sony) "<<endl;
cout<<endl<<endl;
cout<<"     >> Input Kode Merek dan Kode Tipe untuk meng-cek STOK Handphone yang tersedia."<<endl;
garis();
cout<<" Kode Merk       : ";cin>>hp[i].kodemerk;
cout<<" Kode Tipe       : ";gets(hp[i].kodetipe);
if(hp[i].kodemerk=='S')
{strcpy(hp[i].merk,"Samsung");
	if(!strcmp(hp[i].kodetipe,"A9")||!strcmp(hp[i].kodetipe,"a9"))
	{strcpy(hp[i].tipe,"Galaxy A9");hp[i].stok=50;}
	else if(!strcmp(hp[i].kodetipe,"J5")||!strcmp(hp[i].kodetipe,"j5"))
	{strcpy(hp[i].tipe,"Galaxy J5");hp[i].stok=70;}
	else if (!strcmp(hp[i].kodetipe,"J7")||!strcmp(hp[i].kodetipe,"j7"))
	{strcpy(hp[i].tipe,"Galaxy J7");hp[i].stok=100;}
   else if (hp[i].stok>=hp[i].jml)
   {hp[i].stok=hp[i].stok-hp[i].jml;}
   	else
 	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].stok=0;}
}

else if(hp[i].kodemerk=='X'||hp[i].kodemerk=='x')
{strcpy(hp[i].merk,"Xiaomi");
	if(!strcmp(hp[i].kodetipe,"N5")||!strcmp(hp[i].kodetipe,"n5"))
	{strcpy(hp[i].tipe,"Redmi Note 5");hp[i].stok=120;}
	else if(!strcmp(hp[i].kodetipe,"PF")||!strcmp(hp[i].kodetipe,"pf"))
	{strcpy(hp[i].tipe,"Pocophone F1");hp[i].stok=45;}
	else if(!strcmp(hp[i].kodetipe,"R4")||!strcmp(hp[i].kodetipe,"r4"))
	{strcpy(hp[i].tipe,"Redmi4");hp[i].stok=150;}
   else if (hp[i].stok>=hp[i].jml)
   {hp[i].stok=hp[i].stok-hp[i].jml;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].stok=0;}
}

else if(hp[i].kodemerk=='A'||hp[i].kodemerk=='a')
{strcpy(hp[i].merk,"Asus");
	if(!strcmp(hp[i].kodetipe,"M1")||!strcmp(hp[i].kodetipe,"m1"))
	{strcpy(hp[i].tipe,"Max Pro M1");hp[i].stok=120;}
	else if(!strcmp(hp[i].kodetipe,"L1")||!strcmp(hp[i].kodetipe,"l1"))
	{strcpy(hp[i].tipe,"Zenfone Live 1");hp[i].stok=90;}
	else if(!strcmp(hp[i].kodetipe,"ROG")||!strcmp(hp[i].kodetipe,"rog"))
	{strcpy(hp[i].tipe,"R.O.G");hp[i].stok=45;}
   else if (hp[i].stok>=hp[i].jml)
   {hp[i].stok=hp[i].stok-hp[i].jml;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].stok=0;}

}

else if(hp[i].kodemerk=='I'||hp[i].kodemerk=='i')
{strcpy(hp[i].merk,"Iphone");
	if(!strcmp(hp[i].kodetipe,"XS")||!strcmp(hp[i].kodetipe,"xs"))
	{strcpy(hp[i].tipe,"XS Max");hp[i].stok=25;}
	else if(!strcmp(hp[i].kodetipe,"8"))
	{strcpy(hp[i].tipe,"Iphone 8");hp[i].stok=45;}
	else if(!strcmp(hp[i].kodetipe,"7"))
	{strcpy(hp[i].tipe,"Iphone 7");hp[i].stok=75;}
   else if (hp[i].stok>=hp[i].jml)
   {hp[i].stok=hp[i].stok-hp[i].jml;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].stok=0;}
}

else if(hp[i].kodemerk=='R'||hp[i].kodemerk=='r')
{strcpy(hp[i].merk,"Realme");
	if(!strcmp(hp[i].kodetipe,"C1")||!strcmp(hp[i].kodetipe,"c1"))
	{strcpy(hp[i].tipe,"Realme C1");hp[i].stok=125;}
	else if(!strcmp(hp[i].kodetipe,"2"))
	{strcpy(hp[i].tipe,"Realme 2");hp[i].stok=100;}
	else if(!strcmp(hp[i].kodetipe,"2p")||!strcmp(hp[i].kodetipe,"2P"))
	{strcpy(hp[i].tipe,"Realme 2 Pro");hp[i].stok=95;}
   else if (hp[i].stok>=hp[i].jml)
   {hp[i].stok=hp[i].stok-hp[i].jml;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].stok=0;}

}

else if(hp[i].kodemerk=='s')
{strcpy(hp[i].merk,"Sony Xperia");
	if(!strcmp(hp[i].kodetipe,"XZ")||!strcmp(hp[i].kodetipe,"xz"))
	{strcpy(hp[i].tipe,"Xperia XZ");hp[i].stok=110;}
	else if(!strcmp(hp[i].kodetipe,"Z5")||!strcmp(hp[i].kodetipe,"z5"))
	{strcpy(hp[i].tipe,"Xperia Z5");hp[i].stok=117;}
	else if(!strcmp(hp[i].kodetipe,"XA2")||!strcmp(hp[i].kodetipe,"xa2"))
	{strcpy(hp[i].tipe,"Xperia XA2 Ultra");hp[i].stok=99;}
   else if (hp[i].stok>=hp[i].jml)
   {hp[i].stok=hp[i].stok-hp[i].jml;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].stok=0;}
 }


else
{strcpy(hp[i].merk,"Salah Kode Merk");strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].stok=0;}
cout<<endl;
cout<<" Stok yang tersedia untuk Handphone : "<<hp[i].tipe<<endl;
cout<<" Tersisa : "<<hp[i].stok<<endl;
garis();

cout<<endl;
cout<<"1. Kembali ke Menu Utama "<<endl;
cout<<"------------------------"<<endl<<endl;
cout<<"Pilih Kode  : ";cin>>pilih;
clrscr();
if(pilih=='1')
{clrscr();goto utama;}

tiga:
clrscr();
system("color f1");
np++;
cout<<"\n                      <<         DATA  PEMBELI         >>"<<endl<<endl;
cout<<"\n NP (Nomor Pembeli)  : ";cin>>pembeli[np].nomor;
garis();
     printf(" Tanggal             : %d-%d-%d \n",t.da_day,t.da_mon,t.da_year);
     printf(" Waktu               : %2d:%02d \n",w.ti_hour,w.ti_min);
garis();
     cout<<"\n Nama Pembeli        : ";gets(pembeli[np].namapembeli);
     cout<<"\n No. Telepon         : ";cin>>pembeli[np].telp;
     cout<<"\n No. KTP (16 Angka)  : ";cin>>pembeli[np].ktp;
     cout<<"\n Alamat              : ";gets(pembeli[np].alamat);
     cout<<endl;
clrscr();
system("color f1");
bintang();
cout<<"\n\n                        ================================="<<endl;
cout<<"                        |  Merk   | Kode |   Kode Tipe  |"<<endl;
cout<<"                        |   HP    | Merk |      HP      |"<<endl;
cout<<"                        ================================="<<endl;
cout<<"                        | SAMSUNG |  S   | A9/J5/J7     | "<<endl;
cout<<"                        | XIAOMI  |  X   | N5/PF/R4     |"<<endl;
cout<<"                        | ASUS    |  A   | M1/L1/ROG    |"<<endl;
cout<<"                        | IPHONE  |  I   | XS/8/7       |"<<endl;
cout<<"                        | Realme  |  R   | C1/2/2P      |"<<endl;
cout<<"                        | Sony    |  s   | XZ/Z5/XA2    |"<<endl;
cout<<"                        ================================="<<endl;
cout<<"                         Note : S (Samsung) s (Sony) "<<endl;
cout<<"\n Masukkan Jumlah Data : ";cin>>a;

for (i=1;i<=a;i++)
{
cout<<"\n Data Ke- "<<i<<endl;
cout<<" Kode Merk       : ";cin>>hp[i].kodemerk;
cout<<" Kode Tipe       : ";gets(hp[i].kodetipe);
cout<<" Jumlah Beli     : ";cin>>hp[i].jml;
}

cout<<endl<<endl;
bintang();
clrscr();
system("color f1");

cout<<"\n                      <<       STRUK  PEMBELIAN       >> "<<endl<<endl;
garis();
cout<<"NO.      MERK              TIPE            HARGA     JUMLAH BELI    SUBTOTAL"<<endl;
cout<<"          HP                HP           PER  UNIT     (UNIT)         "<<endl;
garis();

for (i=1;i<=a;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
if(hp[i].kodemerk=='S')
{strcpy(hp[i].merk,"Samsung");
	if(!strcmp(hp[i].kodetipe,"A9")||!strcmp(hp[i].kodetipe,"a9"))
	{strcpy(hp[i].tipe,"Galaxy A9");hp[i].harga=6200000;strcpy(hp[i].ket,"\t\t\t(Enam juta dua ratus ribu rupiah)");hp[i].stok=50;}
	else if(!strcmp(hp[i].kodetipe,"J5")||!strcmp(hp[i].kodetipe,"j5"))
	{strcpy(hp[i].tipe,"Galaxy J5");hp[i].harga=2700000;strcpy(hp[i].ket,"\t\t\t(Dua juta tujuh ratus ribu rupiah)");hp[i].stok=70;}
	else if (!strcmp(hp[i].kodetipe,"J7")||!strcmp(hp[i].kodetipe,"j7"))
	{strcpy(hp[i].tipe,"Galaxy J7");hp[i].harga=3300000;strcpy(hp[i].ket,"\t\t\t(Tiga juta tiga ratus ribu rupiah)");hp[i].stok=100;}
   	else
 	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].harga=0;}
}

else if(hp[i].kodemerk=='X'||hp[i].kodemerk=='x')
{strcpy(hp[i].merk,"Xiaomi");
	if(!strcmp(hp[i].kodetipe,"N5")||!strcmp(hp[i].kodetipe,"n5"))
	{strcpy(hp[i].tipe,"Redmi Note 5");hp[i].harga=2400000;strcpy(hp[i].ket,"\t\t\t(Dua juta empat ratus ribu rupiah)");hp[i].stok=120;}
	else if(!strcmp(hp[i].kodetipe,"PF")||!strcmp(hp[i].kodetipe,"pf"))
	{strcpy(hp[i].tipe,"Pocophone F1");hp[i].harga=4900000;strcpy(hp[i].ket,"\t\t\t(Empat juta sembilan ratus ribu rupiah)");hp[i].stok=45;}
	else if(!strcmp(hp[i].kodetipe,"R4")||!strcmp(hp[i].kodetipe,"r4"))
	{strcpy(hp[i].tipe,"Redmi4");hp[i].harga=1900000;strcpy(hp[i].ket,"(\t\t\tSatu juta sembilan ratus ribu rupiah)");hp[i].stok=150;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].harga=0;}
}

else if(hp[i].kodemerk=='A'||hp[i].kodemerk=='a')
{strcpy(hp[i].merk,"Asus");
	if(!strcmp(hp[i].kodetipe,"M1")||!strcmp(hp[i].kodetipe,"m1"))
	{strcpy(hp[i].tipe,"Max Pro M1");hp[i].harga=1800000;strcpy(hp[i].ket,"\t\t\t(Satu juta delapan ratus ribu rupiah)");hp[i].stok=120;}
	else if(!strcmp(hp[i].kodetipe,"L1")||!strcmp(hp[i].kodetipe,"l1"))
	{strcpy(hp[i].tipe,"Zenfone Live 1");hp[i].harga=2200000;strcpy(hp[i].ket,"\t\t\t(Dua juta dua ratus ribu rupiah)");hp[i].stok=90;}
	else if(!strcmp(hp[i].kodetipe,"ROG")||!strcmp(hp[i].kodetipe,"rog"))
	{strcpy(hp[i].tipe,"R.O.G");hp[i].harga=26000000;strcpy(hp[i].ket,"\t\t\t(Dua puluh enam juta ribu rupiah)");hp[i].stok=25;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].harga=0;}

}

else if(hp[i].kodemerk=='I'||hp[i].kodemerk=='i')
{strcpy(hp[i].merk,"Iphone");
	if(!strcmp(hp[i].kodetipe,"XS")||!strcmp(hp[i].kodetipe,"xs"))
	{strcpy(hp[i].tipe,"XS Max");hp[i].harga=25000000;strcpy(hp[i].ket,"\t\t\t(Dua puluh lima juta rupiah)");hp[i].stok=25;}
	else if(!strcmp(hp[i].kodetipe,"8"))
	{strcpy(hp[i].tipe,"Iphone 8");hp[i].harga=8000000;strcpy(hp[i].ket,"\t\t\t(Delapan juta rupiah)");hp[i].stok=85;}
	else if(!strcmp(hp[i].kodetipe,"7"))
	{strcpy(hp[i].tipe,"Iphone 7");hp[i].harga=5000000;strcpy(hp[i].ket,"\t\t\t(Lima juta rupiah)");hp[i].stok=75;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].harga=0;}
}

else if(hp[i].kodemerk=='R'||hp[i].kodemerk=='r')
{strcpy(hp[i].merk,"Realme");
	if(!strcmp(hp[i].kodetipe,"C1")||!strcmp(hp[i].kodetipe,"c1"))
	{strcpy(hp[i].tipe,"Realme C1");hp[i].harga=1499000;strcpy(hp[i].ket,"\t\t(Satu juta empat ratus sembilan puluh sembilan ribu rupiah)");hp[i].stok=125;}
	else if(!strcmp(hp[i].kodetipe,"2"))
	{strcpy(hp[i].tipe,"Realme 2");hp[i].harga=1999000;strcpy(hp[i].ket,"\t\t(Satu juta sembilan ratus sembilan puluh sembilan ribu rupiah)");hp[i].stok=100;}
	else if(!strcmp(hp[i].kodetipe,"2p")||!strcmp(hp[i].kodetipe,"2P"))
	{strcpy(hp[i].tipe,"Realme 2 Pro");hp[i].harga=1899000;strcpy(hp[i].ket,"\t\t(Satu juta delapan ratus sembilan puluh sembilan juta rupiah)");hp[i].stok=95;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].stok=0;}
}

else if(hp[i].kodemerk=='s')
{strcpy(hp[i].merk,"Sony Xperia");
	if(!strcmp(hp[i].kodetipe,"XZ")||!strcmp(hp[i].kodetipe,"xz"))
	{strcpy(hp[i].tipe,"Xperia XZ");hp[i].harga=2000000;strcpy(hp[i].ket,"\t\t\t\t(Dua juta rupiah)");hp[i].stok=110;}
	else if(!strcmp(hp[i].kodetipe,"Z5")||!strcmp(hp[i].kodetipe,"z5"))
	{strcpy(hp[i].tipe,"Xperia Z5");hp[i].harga=5400000;strcpy(hp[i].ket,"\t\t\t(Lima juta empat ratus ribu rupiah)");hp[i].stok=117;}
	else if(!strcmp(hp[i].kodetipe,"XA2")||!strcmp(hp[i].kodetipe,"xa2"))
	{strcpy(hp[i].tipe,"Xperia XA2 Ultra");hp[i].harga=6099000;strcpy(hp[i].ket,"\t\t\t(Enam juta sembilan puluh sembilan ribu rupiah)");hp[i].stok=99;}
   	else
   	{strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].stok=0;}
 }


else
{strcpy(hp[i].merk,"Salah Kode Merk");strcpy(hp[i].tipe,"Salah Kode Tipe");hp[i].harga=0;}

cout<<setiosflags(ios::left)<<setw(18)<<hp[i].merk;
cout<<setiosflags(ios::left)<<setw(19)<<hp[i].tipe;
cout<<setiosflags(ios::left)<<"Rp. "<<setw(12)<<hp[i].harga;
cout<<setiosflags(ios::left)<<setw(9)<<hp[i].jml;
hp[i].st=hp[i].harga*hp[i].jml;
cout<<setiosflags(ios::right)<<"Rp. "<<setw(11)<<hp[i].st<<endl;
if(hp[i].stok>=hp[i].jml)
{hp[i].stok=hp[i].stok-hp[i].jml;}
cout<<"Jumlah Stok Sisa  :"<<hp[i].stok;
cout<<hp[i].ket<<endl;

total=hp[i].st;
}
system("color f1");
garis();
cout<<"\t\t\t\t\t\tSubtotal       : Rp. "<<setiosflags(ios::right)<<setw(11)<<total;



if(total>=7000000)
{diskon=total*0.10;}
else {diskon=0;}

cout<<"\n\t\t\t\t\t\tDiskon 10%     : Rp. "<<setiosflags(ios::right)<<setw(11)<<diskon;

tb=total-diskon;
cout<<"\n\t\t\t\t\t\t=================================";
cout<<"\n\t\t\t\t\t\tTotal Bayar    : Rp. "<<setiosflags(ios::right)<<setw(11)<<tb;
bayar:
cout<<"\n\t\t\t\t\t\tUang Bayar     : Rp.     ";cin>>ub;
if(ub<tb)
{cout<<"\n\t\t\t\t\t\t MAAF UANG ANDA KURANG ";goto bayar;}
else if(ub>=tb)
{cout<<"\n\t\t\t\t\t\t TERIMAKASIH BANYAK :) ";}


cout<<"\n\t\t\t\t\t\t\t\t---------------(-)";

uk=ub-tb;
if(ub<tb)
{uk=0;}
cout<<"\n\t\t\t\t\t\tUang Kembali   : Rp. "<<setiosflags(ios::right)<<setw(11)<<uk;
cout<<endl;
garis();
cout<<"\n\t\t\t    Transaksi Lagi? [Y/T] : ";cin>>lagi;
clrscr();

if(lagi=='Y'||lagi=='y')
{clrscr();goto tiga;}
else
{clrscr();goto utama;}

empat:
clrscr();
system("color f1");
cout<<"\n                      <<       CARI DATA PEMBELI       >> "<<endl<<endl;
cout<<"\n\n Masukkan NP (Nomor Pembeli) : ";cin>>nomorpembeli;
for (i=1;i<=np;i++)
{
if(nomorpembeli==pembeli[i].nomor)
{
cout<<"\n\n Data Pemebli Ditemukan Pada data Transaksi Ke- "<<i<<endl;
garis();
cout<<"                        << DATA PEMBELI >> "<<endl;
garis();
printf(" Tanggal                     : %d-%d-%d \n",t.da_day,t.da_mon,t.da_year);
printf(" Waktu                       : %2d:%02d \n",w.ti_hour,w.ti_min);
garis();
cout<<"\n Nama Pembeli                : "<<pembeli[i].namapembeli<<endl;
cout<<"\n Alamat                      : "<<pembeli[i].alamat<<endl;
cout<<"\n No. Telepon                 : "<<pembeli[i].telp<<endl;
cout<<"\n No. KTP                     : "<<pembeli[i].ktp<<endl;
	}
}
garis();
cout<<"\n 1. Cari Data Lagi"<<endl;
cout<<" 2. Kembali ke Menu Utama "<<endl;
cout<<" ------------------------"<<endl;
cout<<" Pilih Kode [1/2] : ";cin>>pilih;
clrscr();

if(pilih=='1')
{clrscr();goto empat;}
else if(pilih=='2')
{clrscr();goto utama;}



lima:
clrscr();
system("color f1");


cout<<"\n                      <<    TAMPILKAN DATA PEMBELI     >> "<<endl<<endl;

for(i=1;i<=np;i++)
{
cout<<"\n\n NP (Nomor Pembeli) : "<<pembeli[i].nomor<<endl<<endl;
cout<<" Nama Pembeli       : "<<pembeli[i].namapembeli<<endl<<endl;
cout<<" No. Telepon        : "<<pembeli[i].telp<<endl<<endl;
cout<<" No. KTP            : "<<pembeli[i].ktp<<endl<<endl;
cout<<" Alamat             : "<<pembeli[i].alamat<<endl<<endl;
}
garis();

cout<<"\n\n 1. Edit Data Pembeli "<<endl<<endl;
cout<<" 2. Kembali ke Menu Utama "<<endl<<endl;
cout<<" ------------------------"<<endl<<endl;
cout<<" Pilih Kode [1/2] : ";cin>>pilih;
clrscr();

if(pilih=='1')
{clrscr();goto edit;}
else if(pilih=='2')
{clrscr();goto utama;}

edit:
clrscr();
system("color f1");
for(i=1;i<=np;i++)
{
cout<<"\n                      <<        EDIT DATA  PEMBELI         >>"<<endl<<endl;
cout<<"\n Masukkan NP untuk di Edit : ";cin>>pembeli[np].nomor;
     cout<<"\n Nama Pembeli         : ";gets(pembeli[np].namapembeli);
     cout<<"\n Telepon              : ";cin>>pembeli[np].telp;
     cout<<"\n Alamat               : ";gets(pembeli[np].alamat);
     cout<<endl;
     goto lima;
}

enam:
clrscr();
system("color f1");

cout<<"\n                    <<    EXPORT DATA DAN HISTORY TRANSAKSI     >> "<<endl<<endl;
garis();
cout<<" CATATAN :  "<<endl;
cout<<" 1.Data akan di EXPORT dengan nama FILE_EXPORT dan format TXT."<<endl;
cout<<" 2.File akan di simpan di folder program ini berada. "<<endl;
cout<<" 3.Fungsi Export ini berguna untuk melihat data pembeli sebelumnya."<<endl;
cout<<" 4.Karena jika kita menutup program ini data pembeli sebelumnya akan hilang."<<endl;
cout<<" 5.Maka dari itu mohon untuk EXPORT terlebih dahulu sebelum menutup program ini."<<endl;
garis();
cout<<"                      Ingin Export ? "<<endl;
cout<<"               [Y](Ya)    = Untuk Export"<<endl;
cout<<"               [T](Tidak) = Untuk Membatalkan"<<endl;
cout<<endl;
cout<<"  Input Pilihan Anda : ";cin>>quit;
if(quit=='y'||quit=='Y')
{clrscr();goto export;}
else{clrscr();goto utama;}

export:
clrscr();
system("color f1");
{
ofstream txt;
txt.open("FILE_EXPORT.TXT");

cout<<endl<<endl;
                             cout<<" ------------ EXPORT --------------"<<endl;
                             cout<<" Nama kasir      : "<<username<<endl;
                             cout<<" Tanggal         : ";gets(tanggal);
                             cout<<" Waktu           : ";gets(jam);
                             cout<<" ----------------------------------"<<endl;
cout<<endl;
system("color fa");
 cout<<"\n\n\n\t\t\t\tSedang meng-export..\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++);
 }

 clrscr();
 goto export2;

export2:
clrscr();
system("color f1");
txt<<"-----------------------------------------------------------------------------"<<endl;
txt<<"\n                        <<    EXPORT DATA PEMBELI     >> "<<endl<<endl;
txt<<" Nama Kasir saat EXPORT   : "<<username<<endl;
txt<<" Tanggal                  : "<<tanggal<<endl;
txt<<" Waktu                    : "<<jam<<endl;
txt<<"-----------------------------------------------------------------------------"<<endl;
txt<<endl;
for (i=1;i<=np;i++)
{
txt<<endl;
txt<<"                          <<     DATA PEMBELI     >> "<<endl;
txt<<"-----------------------------------------------------------------------------"<<endl;
txt<<endl;
txt<<"\n NP (Nomor Pembeli)          : "<<pembeli[i].nomor<<endl;
txt<<"\n Nama Pembeli                : "<<pembeli[i].namapembeli<<endl;
txt<<"\n Telepon                     : "<<pembeli[i].telp<<endl;
txt<<"\n No. KTP                     : "<<pembeli[i].ktp<<endl;
txt<<"\n Alamat                      : "<<pembeli[i].alamat<<endl;
 }
txt<<endl;
txt<<"-----------------------------------------------------------------------------"<<endl;
txt<<"   2019)PT.VanShoes SmartPhone Sejahtera "<<endl;
txt<<"-----------------------------------------------------------------------------"<<endl;

txt.close();
cout<<"                    EXPORT BERHASIL !!  "<<endl;
cout<<" Tekan tombol apa saja untuk kembali ke menu utama :) "<<endl;
getch();
goto utama;

}

tujuh:
clrscr();
system("color f1");
cout<<endl;
garis();
cout<<"                        Yakin Ingin Keluar ? "<<endl;
cout<<"                        CATATAN : "<<endl;
cout<<"                        Jika Keluar, Data yang telah diinput akan hilang."<<endl;
cout<<"                        Jika Logout, Data pembeli masih akan tersimpan."<<endl;
garis();
cout<<"\n                        [Y](Ya)     = Untuk Keluar Program"<<endl;
cout<<"\n                        [L](Logout) = Untuk Mengganti Akun Kasir"<<endl;
cout<<"\n                        [Tidak]     = Untuk Kembali ke Halaman utama"<<endl;
cout<<"\n                        Pilihan Anda : ";cin>>quit;
if (quit=='y'||quit=='Y')
{clrscr();goto exit;}
else if (quit=='l'||quit=='L')
{clrscr();goto login;}
else {clrscr();goto utama;}
getch();
exit:
}
