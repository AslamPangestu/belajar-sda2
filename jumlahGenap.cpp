#include <iostream>
using namespace std;

int genapTotal(int);

int main(){
    int n;
    cout<<"Masukkan Nilai n : ";
    cin>>n;
    cout<<"Angka genapnya : ";
    cout<<genapTotal(n);
}

int genapTotal(int n){
    if(n == 1){
        return 2;
    }else{
        return(2*n + genapTotal(n-1));
    }
}