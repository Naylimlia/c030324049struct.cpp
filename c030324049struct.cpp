#include <iostream>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    mahasiswa nayli;
    mahasiswa* ptr = &nayli;

    (*ptr).nim = "c030324049";
    (*ptr).nama = "Nayli Amalia";
    (*ptr).alamat = "JL. Mahligai No.66";
    (*ptr).ipk = 3.9;

    cout<<"nim:"<<(*ptr).nim<<endl;
    cout<<"nama:"<<(*ptr).nama<<endl;
    cout<<"alamat:"<<(*ptr).alamat<<endl;
    cout<<"ipk:"<<(*ptr).ipk<<endl;

    return 0;
    
}