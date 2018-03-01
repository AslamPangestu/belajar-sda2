#include <iostream>
using namespace std;

//Soal1?
void HitungMundur(int);

int main(){
    int angka;

    cout<<"Masukkan angka mulai hitung mundur : ";
    cin>>angka;
    HitungMundur(angka);
    cout<<"\nSelesai\n";
}

void HitungMundur(int angka){
    //Soal2?
    if (angka > 0){
        cout<<angka<<"->";
        angka--;
        HitungMundur(angka);
    }else{
        cout<<angka;
    }
}