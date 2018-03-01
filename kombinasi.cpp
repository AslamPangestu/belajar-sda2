#include <iostream>
using namespace std;

int faktorial(int);
int kombinasi(int, int);

int main(){
    int n, r;
    cout<<"Masukkan Nilai n : ";
    cin>>n;
    cout<<"Masukkan Nilai r : ";
    cin>>r;
    cout<<"Nilai kombinasi "<<n<<" dan "<<r<<" :\n";
    cout<<faktorial(n)<<"/("<<faktorial(r)<<"*"<<faktorial(n-r)<<")\n";
    cout<<kombinasi(n,r)<<endl;
}

int faktorial(int f){
    if(f==0){
        return 1;
    }else{
        return(f * faktorial(f-1));
    }
}

int kombinasi(int n, int r){
    if(n<r){
        return 0;
    }else{
        return (faktorial(n)/(faktorial(r)*faktorial(n-r)));
    }
}