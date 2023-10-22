#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  char kode;
  cout << "PROGRAM MENGHITUNG LUAS DAN KELILING SEGITIGA, PERSEGI PANJANG, LINGKARAN" << endl;
  cout << "S = Segitiga | P = Persegi Panjang | L = Lingkaran" << endl;
  cout << "Masukkan kode [S,P,L] : ";
  cin >> kode;
  switch (kode)
  {
  case 'S':
  case 's':
    float panjangA, panjangB, alas, tinggi, kelilingSegitiga, luasSegitiga;
    cout << "Menghitung luas dan keliling segitiga" << endl;
    cout << "Masukkan panjang sisi A : ";
    cin >> panjangA;
    cout << "Masukkan panjang sisi B : ";
    cin >> panjangB;
    cout << "Masukkan alas : ";
    cin >> alas;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;
    kelilingSegitiga = panjangA + panjangB + alas;
    luasSegitiga = 0.5 * alas * tinggi;
    cout << "Kelilingnya adalah : " << kelilingSegitiga << endl;
    cout << "Luasnya adalah : " << luasSegitiga << endl;
    break;
  case 'P':
  case 'p':
    float panjangPersegi, lebarPersegi, luas, kelilingPersegi;
    cout << "Menghitung luas dan keliling persegi panjang" << endl;
    cout << "Masukkan panjang : ";
    cin >> panjangPersegi;
    cout << "Masukkan lebar : ";
    cin >> lebarPersegi;
    luas = panjangPersegi * lebarPersegi;
    kelilingPersegi = 2 * (panjangPersegi + lebarPersegi);
    cout << "Luasnya adalah : " << luas << endl;
    cout << "Kelilingnya adalah : " << kelilingPersegi << endl;
    break;
  case 'L':
  case 'l':
    float r, kelilingLingkaran, luasLingkaran;
    cout << "Menghitung luas dan keliling lingkaran " << endl;
    cout << "Masukkan jari-jari : ";
    cin >> r;
    kelilingLingkaran = 2 * 3.14 * r;
    luasLingkaran = 3.14 * r * r;
    cout << "Kelilingnya adalah : " << kelilingLingkaran << endl;
    cout << "Luasnya adalah : " << luasLingkaran << endl;
    break;
  default:
    cout << "KODE YANG ANDA MASUKKAN SALAH SILAHKAN PERIKSA KEMBALI" << endl;
  }

  return 0;
}   