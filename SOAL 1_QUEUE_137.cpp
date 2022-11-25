//SOAL NO 1 QUEUE
//YOGI NOVIANA 211401137

#include<iostream>
using namespace std;

#define max 5
string isi[max];
int top = 0;  //berada di index ke berapa


bool kosong(){
    if(top==0){
        return true;
    } else{
        return false;
    }
}

bool penuh(){
    if(top>=max){
        return true;
    } else{
        return false;
    }
}

void exit(){
    system("cls");
    cout<<endl<<"Program selesai......"<<endl;
}

void tampilkan(){
    if(!kosong()){
        cout<<endl;
        cout<<"Data Tersimpan : "<<endl;
        for(int a=top-1; a>=0; a--){
        cout<<a+1<<". "<<isi[a]<<endl;}
    }else{
        cout<<endl<<"Data Kosong!"<<endl;
    }
    
    if (penuh()){
        cout<<endl<<"Data penuh"<<endl;
    }
}

void enqueue(){
    if(!penuh()){
        cout<<"Masukkan data : "; cin>>isi[top];
        top++;
    }
}

void dequeue(){
    if(!kosong()){ 
        for(int a=0; a<top-1; a++){ 
            isi[a]=isi[a+1]; 
        }
        top--;
    }
}

 int main(){
    int pilihan,banyak;
    string isi;

    queue:
    cout<<endl<<endl;
    cout<<"-------------MENU-------------"<<endl;
    cout<<"1. Enqueue"<<endl;
    cout<<"2. Dequeue"<<endl;
    cout<<"3. Tampilkan Data Tersimpan"<<endl;
    cout<<"4. Keluar"<<endl;
    cout<<"Pilih [1/2/3/4] : "; cin>>pilihan;

    if(pilihan==1){
        system("cls");
        cout<<"Masukkan data sebanyak [max 5]: "; cin>>banyak;
        for(int i=0; i<banyak; i++){
            enqueue();
        }
        goto queue;
    }
    else if (pilihan==2){
        dequeue();
        cout<<endl<<"Data pertama berhasil di pop";
        goto queue;
    }
    else if(pilihan==3){
        tampilkan();
        goto queue;
    }
    else{
        exit();
    }
 }