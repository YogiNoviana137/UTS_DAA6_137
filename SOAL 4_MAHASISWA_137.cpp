//SOAL NO 4 MENGURUTKAN DATA MAHASISWA BERDASARKAN NIM

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

#define ELEMENTS 6

inline int SequentialSearch(char kode[11][7], char key[7]){
    int idx=(-1);
    for (int i=0; i<=10; i++){
        if ( strcmp(key,kode[i])==0){ 
            idx=i; }
    }
    return idx;
}


void insertion_sort(int x[],int length){
    int key,i;
    for(int j=1;j<length;j++){
        key=x[j];
        i=j-1;
        while(x[i]>key && i>=0){
            x[i+1]=x[i];
            i--;
        }
        x[i+1]=key;
    }
}

struct mhs{
    char NIM[10];
    char NAMA[25];
    float IPK;
};

typedef mhs mhsarr[100];

int main(){
    mhsarr x;
    bool keluar=false;
    int menu,i=0, z=0, totJum;
    char tmpNim;

    while (keluar==false){
        cout <<" \nMENU UTAMA";
        cout << "\n1. Input Data Mahasiswa";
        cout << "\n2. Tampil Data Mahasiswa secara Descending (Insertion Sort)";
        cout << "\n3. Keluar";
        cout<< "\n\nMasukan pilihan anda [1-3] :"; cin >> menu;
        if(menu==1){
            int jumlah;
            cout<<"Masukan jumlah data yang akan diinput : ";
            cin>>jumlah;
            for (int i=0;i<jumlah;i++){
                cout<<"\nNIM : ";
                cin>>x[z].NIM;
                cout<<"NAMA: ";
                cin>>x[z].NAMA;
                cout<<"IPK : ";
                cin>>x[z].IPK;
                cout<<endl;
                z++;
                totJum=totJum+jumlah;
                }
            }
        else if (menu==2){
        char *isi="";
        for (int i=0;i<totJum;i++){
            strcpy(isi,x[i].NIM);//strcat(isi,",");
        }
        int A[ELEMENTS];
        A[ELEMENTS]=atoi(isi);//insertion_sort(z,totJum);
        cout<<isi;
        cout << "\n=====================================================";
        cout<<"\n|"<<setw(13)<<"NIM |";
        cout<<setw(32)<<"NAMA |"<<setw(7)<<"IPK |"<<endl;
        cout << "=====================================================\n";
        for (int i=0;i<z;i++){
            cout<<"|"<<setw(11)<<x[i].NIM<<" |";
            cout<<setw(30)<<x[i].NAMA<<" |";
            cout<<setw(5)<<x[i].IPK<<" |"<<endl;
            }
            cout << "=====================================================\n";
        }
        else  if (menu=3){
            keluar=true;
            cout << "Terima Kasih\n";
            }
            
    }
    system("pause");
}

