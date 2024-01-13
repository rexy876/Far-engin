#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    cout <<"-----------------------------"<<endl;
    cout <<"|      Pilih Menu Makanan   |"<<endl;
    cout <<"-----------------------------"<<endl;
    cout <<"1. Nasi Goreng     Rp.15000 "<<"|"<<endl;
    cout <<"2. Ikan Bakar      Rp.20000 "<<"|"<<endl;
    cout <<"3. Mie Goreng      Rp.5000  "<<"|"<<endl;
    cout <<"4. Ayam Penyet     Rp.17000 "<<"|"<<endl;
    cout <<"-----------------------------"<<endl;
    
    char menu_makanan;
    string nama_makanan;
    int jum_porsi;
    int bayar_makanan = 0;
    cout <<"Pilih makanan 1/2/3/4 : ";
    cin >> menu_makanan;
    cout <<"Masukkan jumlah porsi : ";
    cin >> jum_porsi;
    cout<<endl;
    cout <<"-----------------------------"<<endl;
    cout << "   Daftar Pembelian Makanan   "<<endl;
    cout <<"-----------------------------"<<endl;
    switch(menu_makanan){
        case '1':
           bayar_makanan= jum_porsi*15000;
           nama_makanan = "Nasi Goreng";
           cout <<nama_makanan<<" + "<<jum_porsi<<" : Rp."<<bayar_makanan<<endl;
           break;
        case '2':
           bayar_makanan= jum_porsi*20000;
           nama_makanan = "Ikan Bakar";
           cout <<nama_makanan<<" + "<<jum_porsi<<" : Rp."<<bayar_makanan<<endl;
           break;
        case '3':
           bayar_makanan = jum_porsi*5000;
           nama_makanan = "Mie Goreng";
           cout <<nama_makanan<<" + "<<jum_porsi<<" : Rp."<<bayar_makanan<<endl;
           break;
        case '4':
           bayar_makanan= jum_porsi*17000;
           nama_makanan = "Ayam Penyet";
           cout <<nama_makanan<<" + "<<jum_porsi<<" : Rp."<<bayar_makanan<<endl;
           break;      
        default:
           cout <<"Menu makanan tidak tersedia"<<endl;
    }
    cout<<endl;
    cout <<"------------------------------"<<endl;
    cout <<"|      Pilih Menu Minuman    |"<<endl;
    cout <<"------------------------------"<<endl;
    cout <<"|1. Es Jeruk         Rp.8000 "<<" |"<<endl;
    cout <<"|2. Es Teh           Rp.5000 "<<" |"<<endl;
    cout <<"|3. Es Cappuchino    Rp.7000 "<<" |"<<endl;
    cout <<"|4. Es Cincau        Rp.7000 "<<" |"<<endl;
    cout <<"------------------------------"<<endl;
    
    char menu_minuman;
    int jum_gelas;
    string nama_minuman;
    int bayar_minuman;
    cout <<"Pilih menu minuman 1/2/3/4 : ";
    cin >>menu_minuman;
    cout <<"Masukkan jumlah minuman : ";
    cin >>jum_gelas;
    
    switch (menu_minuman){
        case '1':
           bayar_minuman = jum_gelas*8000;
           nama_minuman = "Es Jeruk";
           cout <<nama_minuman<<" + "<<jum_gelas<<" : Rp."<<bayar_minuman<<endl;
           break;
        case '2':
           bayar_minuman = jum_gelas*5000;
           nama_minuman = "Es Teh";
           cout <<nama_minuman<<" + "<<jum_gelas<<" : Rp."<<bayar_minuman<<endl;
           break;   
        case '3':
           bayar_minuman = jum_gelas*7000;
           nama_minuman = "Es Cappucino";
           cout <<nama_minuman<<" + "<<jum_gelas<<" : Rp."<<bayar_minuman<<endl;
           break;
        case '4':
           bayar_minuman = jum_gelas*7000;
           nama_minuman = "Es Cincau";
           cout <<nama_minuman<<" + "<<jum_gelas<<" : Rp."<<bayar_minuman<<endl;
           break;      
        default:
        cout <<"Pilihan minuman tidak tersedia"<<endl;   
    }
    cout<<endl;
    
    int tby_makanan;
    int tby_minuman;
    int kembalian,bayar;
    tby_makanan=bayar_makanan;
    tby_minuman = bayar_minuman;
    int total_bayar= tby_makanan + tby_minuman;
    
    cout <<"Bayar : ";
    cin >>bayar;
    
    kembalian = bayar - total_bayar;
    
    cout <<"-----------------------------------------"<<endl;
    cout <<"|           Struk Pembayaran            |"<<endl;
    cout <<"-----------------------------------------"<<endl;
    cout <<"|Makanan :  "<<nama_makanan<<" + "<<jum_porsi<<" Rp."<<tby_makanan<<setiosflags(ios :: right)<<setw(5)<<"|"<<endl;
    cout <<"|Minuman :  "<<nama_minuman<<" + "<<jum_gelas<<" Rp."<<tby_minuman<<setiosflags(ios :: right)<<setw(8)<<"|"<<endl;
    cout <<"|---------------------------------------|"<<endl;
    cout <<"|Bayar : "<<"Rp."<<bayar<<setiosflags(ios :: right)<<setw(24)<<"|"<<endl;
    cout <<"|Total Pembayaran : "<<"Rp."<<total_bayar<<setiosflags(ios :: right)<<setw(13)<<"|"<<endl;
    cout <<"|Kembalian : "<<"Rp."<<kembalian<<setiosflags(ios :: right)<<setw(15)<<"|"<<endl;
    cout <<"-----------------------------------------"<<endl;
    
    
    
    return 0;
    
    }
    