//Tugas Update ->> Yogi Noviana (21101137) Kom C

/* Contoh Program ke : 1 */
/* Program : struktur data statis mahasiswa */
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#define nmax 5 // banyak data yang dapat ditampung
using namespace std;

int n = 0; // variable n sebagai banyak data yang telah tersimpan
struct data
{ // struktur data mahasiswa yg akan diinput
    int nim;
    char nama[20];
    char kom;
};

struct data maba[nmax]; // deklarasi variabel bertipe struct
void tambah_data();     // prototype fungsi void
void hapus_data();
void tampilkan_data();
void update_data();

main()
{
    int pil;
    cout << "------------DATA MAHASISWA ILMU KOMPUTER------------"<<endl<<endl;
menu:
    cout << "MENU------------------------------------------------:"<<endl;
    cout << "1. tambah data\n";
    cout << "2. hapus data \n";
    cout << "3. tampilkan data \n";
    cout << "4. update data\n";
    cout << "5. keluar \n";
    cout << "----------------------------------------------------";
    cout << "\n Pilih menu (1/2/3/4/5) ? ";
    cin >> pil;
    if (pil == 1)
        tambah_data();
    else if (pil == 2)
        hapus_data();
    else if (pil == 3)
        tampilkan_data();
    else if (pil == 4)
        update_data();
    else if (pil == 5)
        exit(1); // atau bisa pakai return(0)
    else
    {
        cout << "pilihan tak tersedia...!!!\n";
    }
    cout<<endl;
    goto menu;
    getch();
}

void tambah_data()
{
    if (n < nmax)
    {
        cout<<endl;
        cout << " TAMBAH DATA MAHASISWA"<<endl;
        cout << "----------------------------------------------------"<<endl;
        cout << "Nama : ";
        cin >> maba[n].nama;
        cout << "NIM : ";
        cin >> maba[n].nim;
        cout << "Kom : ";
        cin >> maba[n].kom;
        n++;
    }
    else
        cout << "\n data telah melebihi...!!!\n maksimal data = " << nmax;
}
void hapus_data()
{
    int x;
    cout << " HAPUS DATA MAHASISWA"<<endl;
    cout << "----------------------------------------------------"<<endl;
    cout << "pilih data yang akan dihapus (1 s.d. 5) : ";
    cin >> x;
    if (x < n && x > 0)
    {
        for (int i = x; i < n; i++)
        {
            strcpy(maba[i - 1].nama, maba[x].nama);
            maba[i - 1].nim = maba[x].nim;
            maba[i - 1].kom = maba[x].kom;
        }
        n--;
    }
    else if (x == n)
        n--;
    else
        cout << "\n data yang ingin dihapus tidak ada...!!!\n";
}
void tampilkan_data()
{
    cout<<"MENAMPILKAN DATA MAHASISWA"<<endl;
    cout << "----------------------------------------------------"<<endl;
    if (n == 0)
        cout << "Tidak ada data yang disimpan...!!!\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout<<endl;
            cout << "Data ke-" << i << " : ";
            cout << "\nNama : " << maba[i].nama;
            cout << "\nNIM  : " << maba[i].nim;
            cout << "\nKom  : " << maba[i].kom;
            cout<<endl;
        }
    }
}
void update_data(){
    int p,i;
    cout<<"UPDATE DATA MAHASISWA"<<endl;
    cout << "----------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Pilih index data yang ingin di update (0....dst) : "; cin>>i;
    cout<<endl;
    cout<<"1. Update nama"<<endl;
    cout<<"2. Update NIM "<<endl;
    cout<<"3. Update Kom"<<endl;
    cout<<"pilih data yang ingin di update (1 s/d 3) : "; 
    cin>> p;
    switch(p){
        case 1:
        cout<<"Update nama : "; cin>>maba[i].nama;
        cout<<endl;
        cout<<"Nama telah di update...."<<endl;;
        break;
        
        case 2:
        cout<<"Update NIM  : "; cin>>maba[i].nim;
        cout<<endl;
        cout<<"NIM telah di update...."<<endl;;
        break;
        
        case 3:
        cout<<"Update Kom  : "; cin>>maba[i].kom;
        cout<<endl;
        cout<<"kom telah di update...."<<endl;;
        break;
        
        default: cout<<"Pilihan anda tidak tersedia....."<<endl;
        break;
        
        
    }
    

}
