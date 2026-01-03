#include <iostream>
using namespace std;
bool iskabirsat (int t){
    return (t%4==0 && t%100!=0) || t%400==0;    
}
int hitungHariDalamTahun(int h, int b, int t){
    int bulan[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(iskabirsat(t)) bulan[1] = 29;
    int totalHari = 0;
    for(int i = 0; i < b - 1; i++){
        totalHari += bulan[i];
    }
    totalHari += h;
    return totalHari;
}
int selisih(int h1,int b1,int t1,int h2,int b2,int t2){
    if(t1==t2) return hitungHariDalamTahun(h2,b2,t2)-hitungHariDalamTahun(h1,b1,t1);
    int sisa=(iskabirsat(t1)?366:365)-hitungHariDalamTahun(h1,b1,t1);
    int a=0; for(int i=t1+1;i<t2;i++) a+=(iskabirsat(i)?366:365);
    return sisa+a+hitungHariDalamTahun(h2,b2,t2);
}
int main(){
    int h1,b1,t1,h2,b2,t2;
    cout<<"Masukkan tanggal pertama : ";
    cin>>h1>>b1>>t1;
    cout<<"Masukkan tanggal kedua : ";
    cin>>h2>>b2>>t2;
    cout<<"Selisih antara kedua tanggal: "<<selisih(h1,b1,t1,h2,b2,t2)<<" hari.";
    return 0;
}