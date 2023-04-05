//104 / hasany
#ifndef KTP_
#define KTP_
//#include "093.h"
#include "stok.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

string passwordc;
string userc;

class KTP {
public:
  void input_ktp();
  void input_karyawan();
  void edit_pelanggan();
  void tampil_ktp();
  void hapus_semua_ktp();
  void ambil_login();
  int toInt(string k);
  void tokenize(string l, string del, int c);
  void tsize(string ll, string deel, int cc);
  string agama;
  string nik,nikk;
  string nama,namak;
  string alamat,alamatk;
  string tempat;
  string tl;
  string jk;
  string t;
  string jbt;
  ofstream in;
  void hapus();
  ifstream ambil;

  int idx;

  // barang klk;
  string user;
  string password;
  // string passwordc;
  // string userc;
int simpan;

private:
};
KTP filektp[100];

void hapus(){
  // msk.open("stock.txt", std::ofstream::out | std::ofstream::trunc);
  // msk.close();
}

// inpt data karyawan
void KTP ::input_karyawan() {
  cout << "=============================================\n";

  cout << "masukkan NIK : ";
  cin >> nik;
  cout << "masukkan NAMA : ";
  cin >> nama;
  cout << "masukkan ALAMAT : ";
  cin >> alamat;
  cout << "masukkan JABATAN KARYAWAN : ";
  cin >> jbt;
cout << "=============================================\n";
  in.open("karyawan.txt", ios::app);
  in << nik << ";" << nama << ";" << alamat << ";" << jbt;
  in << endl;
  in.close();
}

// edit data pelanggan
void KTP ::edit_pelanggan() {
  string nik2;
  cout << "masukkan nik : ";
  cin >> nik2;
  bool ketemu = false;
  int datake;

  idx = 0;
  ambil.open("pelanggan.txt");

  while (!ambil.eof()) {
    ambil >> t;
    tokenize(t, ";", idx);
    idx++;
  }

  for (int i = 0; i < idx - 1; ++i) {
    if (filektp[i].nik == nik2) {
      ketemu = true;
      datake = i;
      break;
    }
  }

  if (ketemu) {

    // delete
    // in.open("pelanggan.txt", ios::app);

    // for (int i = 0; i < idx-1; ++i)
    // {
    // 	if (i != datake)
    // 	{
    // 	  in << filektp[i].nik << ";" << filektp[i].nama << ";" <<
    // filektp[i].tempat << ";" << filektp[i].tl << ";" << filektp[i].jk << ";"
    // << filektp[i].alamat << ";" << filektp[i].agama;
    //       in << endl;
    // 	}
    // }
    // in.close();

    // edit
    int pilih;
    cout << "=============================================\n";
    cout << "\n";
    cout << "1) nama";
    cout << endl;
    cout << "2) alamat";
    cout << endl;
    cout << "\n";
    cout << "=============================================\n";
    cout << "pilih edit : ";
    cin >> pilih;

    if (pilih == 1) {
      string namaBaru;

      cout << " Masukkan nama baru : ";
      cin >> namaBaru;
      filektp[datake].nama = namaBaru;
    } else if (pilih == 2) {
      string almtb;

      cout << " Masukkan alamat baru : ";
      cin >> almtb;
      filektp[datake].alamat = almtb;
    }

    in.open("pelanggan.txt", ios::app);

    for (int i = 0; i < idx - 1; ++i) {
      if (i != datake) {
        in << filektp[i].nik << ";" << filektp[i].nama << ";"
           << filektp[i].tempat << ";" << filektp[i].tl << ";" << filektp[i].jk
           << ";" << filektp[i].alamat << ";" << filektp[i].agama;
        in << endl;
      }
    }
    in.close();

    cout << endl;
    cout << endl;
    cout << "DATA KTP PELANGGAN !";
    cout << endl;
    for (int i = 0; i < idx - 1; ++i) {
      cout << "=============================================\n";
      cout << endl;
      cout << "NIK           : " << filektp[i].nik;
      cout << endl;
      cout << "Nama          : " << filektp[i].nama;
      cout << endl;
      cout << "Ttl           : " << filektp[i].tempat << "," << filektp[i].tl;
      cout << endl;
      cout << "Jenis Kelamin : " << filektp[i].jk;
      cout << endl;
      cout << "Alamat        : " << filektp[i].alamat;
      cout << endl;
      cout << "Agama         : " << filektp[i].agama;
      cout << endl;
      cout << "=============================================\n";
      cout << endl;
      cout << endl;
    }
  }
}

// logi user
void KTP ::ambil_login() {
  bool log;
  int idx = 0;

  ambil.open("pelanggan.txt");
  while (!ambil.eof()) {
    ambil >> t;
    tokenize(t, ";", idx);
    idx++;
  }

  ambil.close();
  // for (int t = 0; t < idx; ++t) {
  //   cout << filektp[t].nama;
  //   cout << filektp[t].nik;
  // }
  sini:
  cout << "=============================================\n";
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
  cout << endl;
  cout << "masukkan username : ";
  getline(cin, userc);
  cout << "masukkan password : ";
  // cin.ignore();
  getline(cin, passwordc);
  // for(int t = 0; t < idx; t++){
  //   nama[t];
  //   nik[t];
  // }
  

  
  log = false;

  for (int l = 0; l < idx; l++) {

    // if(user == filektp[l].nama){
      
    // cout << filektp[l].nama << " " << filektp[l].nik << endl;
    // }
    

     if (userc == filektp[l].nama) {

       if (passwordc == filektp[l].nik) {
         log = true;
         simpan = l;
         in.open("idx_ktp.txt", ios::app);
         in << simpan ;
         in.close();
       }
    } 
    }
  
  if(!log){
    
      cout << endl;
      cout << "ada kesalahan pada password atau user";
      cout << endl;
    goto sini;
  }
    
  
  if (log) {

    barang klk;
    klk.pelanggan();
  }
  // cout << "masukkan user : ";
  // cin >> user;
  // cout << "masukkan password : ";
  // cin >> password;
  //  for(int j = 0; j < idx; j++){
  // 		if (user == nama[j]){
  //         if(password == nik[j]){
  //           cout << "jgkjhgjdfg";
  //         }
  //         else {
  //           cout << "\npassword salah\n";
  //           goto lagi;
  //         }
  // 		}
}

// hapus semua data pelanggan.txt
void KTP ::hapus_semua_ktp() {

  in.open("pelanggan.txt", std::ofstream::out | std::ofstream::trunc);
  in.close();
  cout << "data telah di hapus";
  cout << endl;
  return;
}

// ambil data dri txt
void KTP ::tsize(string ss, string deel, int idx = 0) {
  string tmp;
  int i = 1;
  int start, end = -1 * deel.size();

  do {
    start = end + deel.size();
    end = ss.find(deel, start);
    tmp = ss.substr(start, end - start);

    if (i == 1) {

      filektp[idx].nikk = tmp;
    } else if (i == 2) {
      filektp[idx].namak = tmp;
    } else if (i == 3) {
      filektp[idx].alamatk = tmp;
    } else {
      filektp[idx].jbt = tmp;
    }
    i++;

  } while (end != -1);
}

// ambil data  dari txt
void KTP ::tokenize(string s, string del = " ", int idx = 0) {
  string tmp;
  int i = 1;
  int start, end = -1 * del.size();

  do {
    start = end + del.size();
    end = s.find(del, start);
    tmp = s.substr(start, end - start);

    if (i == 1) {

      filektp[idx].nik = tmp;
    } else if (i == 2) {

      filektp[idx].nama = tmp;
    } else if (i == 3) {

      filektp[idx].tempat = tmp;
    } else if (i == 4) {

      filektp[idx].tl = tmp;
    } else if (i == 5) {

      filektp[idx].jk = tmp;
    } else if (i == 6) {

      filektp[idx].alamat = tmp;
    } else {

      filektp[idx].agama = tmp;
    }
    i++;

  } while (end != -1);
}

// ambil data ktp ke integer
int KTP ::toInt(string k) {
  int l;

  stringstream ss;
  ss << k;
  ss >> l;

  return l;
}

// ftur mapilin ktp
void KTP ::tampil_ktp() {
  int idx = 0;

  ambil.open("pelanggan.txt");
  while (!ambil.eof()) {
    ambil >> t;
    tokenize(t, ";", idx);
    idx++;
  }

  ambil.close();
  for (int i = 0; i < idx - 1; ++i) {
    cout << "=============================================\n";
    cout << endl;
    cout << "NIK           : " << filektp[i].nik;
    cout << endl;
    cout << "Nama          : " << filektp[i].nama;
    cout << endl;
    cout << "Ttl           : " << filektp[i].tempat << "," << filektp[i].tl;
    cout << endl;
    cout << "Jenis Kelamin : " << filektp[i].jk;
    cout << endl;
    cout << "Alamat        : " << filektp[i].alamat;
    cout << endl;
    cout << "Agama         : " << filektp[i].agama;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
  }
}

// fitur input ktp
void KTP ::input_ktp() {
  cout << "=============================================\n";
  cout << "masukkan NIK : ";
  cin >> nik;
  getchar();
  cout << "masukkan NAMA : ";
  getline(cin,nama);
  cout << "masukkan TEMPAT LAHIR : ";
  getline(cin, tempat);
  cout << "masukkan TANGGAL LAHIR (tgl-bln-thn) : ";
  cin >> tl;
  getchar();
  cout << "masukkan JENIS KELAMIN : ";
  getline(cin,jk);
  getchar();
  cout << "masukkan ALAMAT : ";
  getline(cin,alamat);
  cout << "masukkan AGAMA : ";
  cin >> agama;
cout << "\n=============================================\n";
  in.open("pelanggan.txt", ios::app);
  //in << endl;
  in << nik << ";" 
     << nama << ";" 
     << tempat << ";" 
     << tl << ";" 
     << jk << ";"
     << alamat 
     << ";" 
     << agama;
  in << endl;
  in.close();
}

#endif
