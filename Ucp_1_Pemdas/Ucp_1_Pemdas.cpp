//1.#include <iostream>
//  using namespace std;
//  float luas;
//  bool namamk;
//  int sks;
// 2.implementasi dari conditional statment
//  do {
//  cout << "perulangan Do..While" << endl;
//  x = rand() % 10;
//
//  cout << "nilai X: " << x << endl;
//  } while (x > 4);
// 3.implementasi dari struc 
//   struct DetailAlamat {
//   string desa;
//   string kota;
//   };
// 4.implementasi prosedur dan fungsi
//   void prosedurLuas(int p, int l) {
//   luas = p * l;
//   }
//   int fungsiLuas(int p, int l) {
//   return p * l;
//   }
// 5.implementasi dari looping
//   while (x > 4) {
//   cout << "perulangan while:" << endl;
//   x = rand() % 10;
//
//   cout << "nilai X:" << x << endl;
//    }

#include <iostream>
using namespace std;

int main()
{
    int nilaiMatematika, nilaiBinggris, nRerata;
    string nama;
    string status;
    cout << "Masukan Nilai Matematika : ";
    cin >> nilaiMatematika;
    cout << " Masukan nilai Bahasa inggris : ";
    cin >> nilaiBinggris;
    cout << "Masukan Nama: ";
    cin >> nama;
    nRerata = (nilaiMatematika + nilaiBinggris) / 2;
    if (nRerata > 70) {
        status = "Lulus";
    }
    else if (nilaiMatematika > 80) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }
    cout << "nama " << nama << endl;
    cout << "Status " << status << endl;
    return 0;
    
}
