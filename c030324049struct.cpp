#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    mahasiswa nayli;

    nayli.nim = "c030324049";
    nayli.nama = "Nayli Amalia";
    nayli.alamat = "JL. Mahligai No.66";
    nayli.ipk = 3.9;

    cout <<nayli.nim<<"\n";
    cout<<nayli.nama<<"\n";
    cout<<nayli.alamat<<"\n";
    cout<<nayli.ipk<<"\n";

    return 0;
}