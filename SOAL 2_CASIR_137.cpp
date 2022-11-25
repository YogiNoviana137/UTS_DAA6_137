//SOAL NO 2 CASIR STRUCT

#include<conio.h>
#include<iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

struct data_barang{
    char barang[50];
    long harga;
    int jumlah;
};


struct casir{
    int urut, jumlah_transaksi,bayar;
    data_barang *x;
};
casir a;


float total(int i){
    float ttl;
    ttl=a.x[i].harga*a.x[i].jumlah;
    return ttl;
}

long subtotal(){
    long sub=0;
    for(int i=0; i<a.jumlah_transaksi; i++){
        sub=sub+total(i);
    }
    return sub;
}

long diskon(){
    long d;
    if(subtotal()>=150000){
        d=subtotal()*0.15;
    }
    else if(subtotal()>=100000){
        d=subtotal()*0.15;
    }
    else{
        d=0;
    }
    return d;
}

long ppn(){
    long pajak;
    pajak=0.1*subtotal();
    return pajak;
}

long total_bayar(){
    long tb;
    tb=subtotal()-diskon()+ppn();
    return tb;
}

long kembalian(){
    long k;
    k=a.bayar-total_bayar();
    return k;
}

void riwayat(){
    for(int i=0; i<a.jumlah_transaksi; i++){
        float ttl;
        ttl=a.x[i].harga*a.x[i].jumlah;
        cout<<i+1<<". "<<a.x[i].barang<<" --------> "<<a.x[i].harga<<" --------> "<<a.x[i].jumlah<<" --------> "<<ttl<<endl;
    }
}

int main(void){
    system("cls");
    cout<<endl;
    cout<<"=========================INDOPASAR========================="<<endl;
    cout<<"No Urut : "; cin>>a.urut;
    cout<<endl;
    cout<<"Jumlah Transaksi : "; cin>>a.jumlah_transaksi;
    a.x=new data_barang[a.jumlah_transaksi];
    for(int i=0; i< a.jumlah_transaksi; i++){
        cout<<endl;
        cout<<"Transaksi ke-"<<i+1<<endl;
        cout<<"Nama Barang : "; cin>>a.x[i].barang;
        cout<<"Harga       : "; cin>>a.x[i].harga;
        cout<<"Jumlah Beli : "; cin>>a.x[i].jumlah;
        cout<<endl;
    }
    cout<<"                        INDOPASAR                          "<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"No. Nama Barang ------> Harga ------> Jumlah  ------> Total"<<endl;
    cout<<"==========================================================="<<endl;
    riwayat();
    cout<<""<<endl;
    cout<<"Sub Total             : RP. "<<subtotal()<<endl;
    cout<<"Diskon                : RP. "<<diskon()<<endl;
    cout<<"PPN 10%               : RP. "<<ppn()<<endl;
    cout<<"Total Bayar           : RP. "<<total_bayar()<<endl;
    cout<<"Bayar                 : RP. "; cin>>a.bayar;
    cout<<"Kembalian             : RP. "<<kembalian()<<endl;
    cout<<"=========================================================="<<endl;
    cout<<"Terima kasih atas kunjungan anda........."<<endl;
    cout<<"Sampai jumpa kembali ^0^"<<endl;

getch();
}