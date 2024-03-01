#include <iostream>

using namespace std;

int main()
{

    cout<<"Program Kalkulator"<<endl;
    cout<<"=================="<<endl;

    int angka1;
    cout<<"Masukan angka pertama: "<<endl;
    cin>>angka1;

    char jenis_operator;
    cout<<"Masukan jenis operator: "<<endl;
    cin>>jenis_operator;

    int angka2;
    cout<<"Masukan angka kedua: "<<endl;
    cin>>angka2;

    int hasil;

    if (jenis_operator=='+'){
        hasil = angka1+angka2;
        cout<<"Hasil penjumlahan "<<angka1<<jenis_operator<<angka2<<" = "<<hasil<<endl;
    }
    else if (jenis_operator=='-'){
        hasil = angka1-angka2;
        cout<<"Hasil pengurangan "<<angka1<<jenis_operator<<angka2<<" = "<<hasil<<endl;
    }
    else if (jenis_operator=='*'){
        hasil = angka1*angka2;
        cout<<"Hasil perkalian "<<angka1<<jenis_operator<< angka2<<" = "<<hasil<<endl;
    }
    else if (jenis_operator=='/'){
        hasil = angka1/angka2;
        cout<<"Hasil pembagian "<<angka1<<jenis_operator<< angka2<<" = "<<hasil<<endl;
    }
    else{
        cout<<"Operator salah"<<endl;
    }
    cout<<"End of program"<<endl;

    return 0;
}
