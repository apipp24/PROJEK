#include <iostream>
using namespace std;
int main() {
    double x, meter, kilometer;
    cout << "Masukkan jarak yang ditempuh semut (dalam cm): ";
    cin >> x;
    meter = x / 100;
    kilometer = x / 100000;
    cout<<"Hasil Konversi:"<< endl;
    cout<<"Jarak dalam kilometer: "<< kilometer << "km" << endl;
    cout<<"Jarak dalam meter: " <<meter << "m" << endl;
    cout<<"jarak dalam cm: " << x <<"cm"<<endl;
    return 0;
}