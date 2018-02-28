#include <iostream>
using namespace std;

//deklarasi 
void HitungMundur(int);

int main(){
    //tipe data
    int angka;

    cout<<"Masukkan angka mulai hitung mundur : ";
    cin>>angka;
    HitungMundur(angka);
    cout<<"\nSelesai\n";
}

void HitungMundur(int angka){
    if (angka > 0){
        cout<<angka<<"->";
        angka--;
        HitungMundur(angka);
    }else{
        cout<<angka;
    }
}