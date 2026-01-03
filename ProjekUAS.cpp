#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float METdata[5] = {2.5,4.3,9.8,12.3,12.0};
    string namaaktivitas[5] = {
    "Jalan santai","Jalan cepat","Jogging","Lari cepat","Bersepeda"
    };

    int menu = 0;
    float berat= 0,jarak=0,durasi= 0,target=0;
    int modeLatihan = 0;

    while (menu!=4) {
    cout <<"===================\n";
    cout << "   MENU UTAMA   \n";
    cout <<"===================\n";
    cout <<"1. Hitung aktivitas\n";
    cout <<"2. Atur mode latihan\n";
    cout <<"3. Atur target kalori\n";
    cout <<"4. Keluar\n"; 
    cout <<"Pilih menu (1-4): ";
    cin >> menu;
    
    if(menu == 1) {

    int pilihan;
    float MET,pace,kalori;
    string kategori,status,mode,saran;

    cout <<"PILIH AKTIVITAS\n";
    for (int i=0;i<5;i++)
    cout << i+1 << ". " << namaaktivitas[i] << endl;
    cout << "Pilih (1-5): ";
    cin >> pilihan;
    if (pilihan<1||pilihan>5) {
    cout <<"Pilihan tidak valid!\n";
    continue;
    }

    cout <<"\nMasukkan berat badan (kg):";
    cin >> berat;
    cout <<"Masukkan jarak (km):";
    cin >> jarak;
    cout <<"Masukkan durasi (menit):";
    cin >> durasi;
    
    MET = METdata[pilihan - 1];
    pace = durasi/jarak;
    kalori =(MET*3.5*berat/200)*durasi;

    if (MET <= 3) kategori = "Ringan";
    else if (MET <= 6) kategori = "Sedang";
    else kategori="Berat";

    if (modeLatihan == 1) status ="Pemula";
    else if (modeLatihan == 2) status ="Standar";
    else status ="Atlet";

    float selisih = kalori - target;
    string hasilTarget;
    if (kalori >= target)
    hasilTarget ="Tercapai";
    else
    hasilTarget ="Belum tercapai";

    if (modeLatihan==1&&kalori<target)
    saran ="Perpanjang durasi secara bertahap.";
    else if (modeLatihan==2&&kalori<target)
    saran ="Tingkatkan intensitas latihan.";
    else if (modeLatihan==3&&kalori<target)
    saran ="Tambah jarak atau kecepatan.";
    else
    saran ="Latihan sudah sesuai target.";

    cout << fixed << setprecision(2);
    cout << "\n==========================\n";
    cout <<" LAPORAN AKTIVITAS      \n";
    cout << "==========================\n";
    cout << "Aktivitas   : "<<namaaktivitas[pilihan-1]<<endl;
    cout << "Berat       : "<<berat<<"kg\n";
    cout << "Jarak       : "<<jarak<<"km\n";
    cout << "Durasi      : "<<durasi<<"menit\n";
    cout << "Pace        : "<<pace<<"min/km\n";
    cout << "MET         : "<<MET<<endl;
    cout << "Kategori    : "<<kategori<<endl;
    cout << "Mode Latih  : "<<status<<endl;
    cout << "-------------------------\n";
    cout << "Kalori      : "<<kalori<<"kkal\n";
    cout << "Target      : "<<target<<"kkal\n";
    cout << "Status Target : "<<hasilTarget<<endl;
    cout << "Selisih     : "<<selisih<<"kkal\n";
    cout << "----------------------------\n";
    cout << "Saran       : "<<saran << endl;
    cout << "=======================================\n";
    cout <<" SEMANGAT DAN TERUS JAGA KESEHATAN!      \n";
    cout << "=======================================\n";
    }

    if(menu == 2) {
    cout << " PILIH MODE LATIHAN \n";
    cout << "1. Pemula\n";
    cout << "2. Standar\n";
    cout << "3. Atlet\n";
    cout << "Pilih: ";
    cin >> modeLatihan;
    cout << "\nMode berhasil disimpan.\n";
    continue;
    }

    if(menu == 3) {
    cout << "Masukkan target kalori baru: ";
    cin >> target;
    cout << "Target berhasil diubah.\n";
    continue;
    }

    if(menu == 4) {
    break;
    }
    }
    return 0;
}