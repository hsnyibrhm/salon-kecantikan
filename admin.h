//104 / hasany
#include <iostream>
#include <fstream>
#include <string>
//#pragma once
#include "ktp.h"
#include "stack.h"
#include "queue.h"
//#include "revisi2.h"
using namespace std;

//#include "login.h"

struct karyawan {
public:
  string Nama;
  string id;
  string jabatan;
  string almt;
  karyawan *next;
};
karyawan *mulai = NULL;



struct alamat {
    string kab; 
    string kec;
    string desa;
    int rt;
    int rw;
};

struct pelanggan {
    string nama;
    string no;
    alamat almt;
};

class admiin : public KTP{
  public: 
    public: 
		//kecantikan();
		//void login();
    void hapus_data_pelanggan();
	  void data_pelanggan(int n);
		void admin();
    void data_karyawan();
		void input_nama(struct karyawan **awal, string data,string data2, string data3, string data4);
    void tampil_karyawan();
    void ksize(string bb, string deel, int cghgh);
    void susun_obat();
    string a1;
    string a2;
    string a3;
    string a4;
    string tt;
    void tz(string l, string del , int lk);
    void tttz(string l, string del , int lk);
    void tttz1(string l1, string del1 , int lk1);
    void tttz2(string l2, string del2 , int lk2);
    void tttz3(string l3, string del3 , int lk3);
    void tttz4(string l4, string del4 , int lk4);
    void tttz5(string l5, string del5 , int lk5);
    void tttz6(string l6, string del6 , int lk6);
    int to(string xx);
    void isiulang();
    void hpss();
    void hpss1();
    void hpss2();
    void hpss3();
    void hpss4();
    void hpss5();
    void hpss6();
    void hpss7();
    

  private:
    int c;
    int a;

    
    pelanggan* plg = new pelanggan[20];
		int pilih;
    int pr;
    int br;
    int n;
    int banyak;
    //int index;
		ifstream getdata;
		ofstream masuk;
    int p;
    string u;

//variabel obat
    string nama_obat;
    string jenis_obat;
    int harga_obat;
    int stok_obat;
// variabel serum
    string nama_serum;
    string jenis_serum;
    int harga_serum;
    int stok_serum;

// variabel ssuplemen kulit
    string nama_supkul;
    string jenis_supkul;
    int harga_supkul;
    int stok_supkul;
//lensa kontak
    string nama_lensa;
    string jenis_lensa;
    int harga_lensa;
    int stok_lensa;
//parfum

    string nama_parfum;
    string jenis_parfum;
    int harga_parfum;
    int stok_parfum;
//minyak rambut
    string nama_minyak_r;
    string jenis_minyak_r;
    int harga_minyak_r;
    int stok_minyak_r;
    
// variabel skin care
    string ns;
    string js;
    int hs;
    int ss;
// variabel make up
    string nm;
    string jm;
    int hm;
    int sm;
    
};
admiin dt[100];
admiin restok[100];
admiin restokm[100];

//mengosongkan stock.txt
void admiin :: hpss(){
  masuk.open("stock.txt", std::ofstream::out | std::ofstream::trunc);
  masuk.close();
}

//mengosongkan make_up.txt
void admiin :: hpss1(){
  masuk.open("make_up.txt", std::ofstream::out | std::ofstream::trunc);
  masuk.close();
}
//obat
void admiin :: hpss2(){
  masuk.open("obat.txt", std::ofstream::out | std::ofstream::trunc);
  masuk.close();
}
//serum
void admiin :: hpss3(){
  masuk.open("serum.txt", std::ofstream::out | std::ofstream::trunc);
  masuk.close();
}
//minyak rambut
void admiin :: hpss4(){
  masuk.open("minyak_rambut.txt", std::ofstream::out | std::ofstream::trunc);
  masuk.close();
}
//lensa kontak
void admiin :: hpss5(){
  masuk.open("lensa_kontak.txt", std::ofstream::out | std::ofstream::trunc);
  masuk.close();
}
//parfum
void admiin :: hpss6(){
  masuk.open("parfum.txt", std::ofstream::out | std::ofstream::trunc);
  masuk.close();
}
//suplemen kulit
void admiin :: hpss7(){
  masuk.open("suplemen_kulit.txt", std::ofstream::out | std::ofstream::trunc);
  masuk.close();
}


//menu restok
void admiin :: isiulang(){
  int smtr;
  cout << "=============================================\n";
  cout << endl;
  cout << "1. restok skin care ";
  cout << endl;
  cout << "2. restok make up ";
  cout << endl;
  cout << "3. restok obat ";
  cout << endl;
  cout << "4. restok serum ";
  cout << endl;
  cout << "5. minyak rambut ";
  cout << endl;
  cout << "6. lensa kontak ";
  cout << endl;
  cout << "7. parfum";
  cout << endl;
  cout << "8. suplemen";
  cout << endl;
  cout << "=============================================\n";
  
  cout << "silahkan input sesuai nomer : ";
  cin >> pilih;

  //restok skin care
  if(pilih == 1){
    int index = 0;

	getdata.open("stock.txt");
	while(!getdata.eof()){
		getdata >> tt;
		tz(tt, ";", index);
		index++;
	}
	getdata.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << restok[i].ns;
    cout << endl;
		cout << "jenis barang          : " << restok[i].js;
    cout << endl;
    cout << "stok                  : " << restok[i].ss;
    cout << endl;
    cout << "harga barang          : " << restok[i].hs;
    cout << endl;
		cout << "=============================================\n";
    //cout << endl;
    cout << endl;
	}
    hpss();
    cout << "pilih skin care mana yang mau di restok : ";
    cin >> pr;
    cout << endl;
    cout << "=============================================";
    cout << endl;
    cout << "nama barang : ";
    cout << restok[pr-1].ns;
    cout << endl;
    cout << "jenis barang : ";
    cout << restok[pr-1].js;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restok[pr-1].ss;
    cout << endl;
    cout << "harga barang : ";
    cout << restok[pr-1].hs;
    cout << endl;
    cout << endl;
    cout << "============================================";
    cout << endl;
    cout << "masukkan banyak restok : ";
    cin >> br;
    
    smtr = restok[pr-1].ss + br;
    restok[pr-1].ss = smtr;

    masuk.open("stock.txt",ios::app);
  for (int i = 0; i < index; ++i){
      masuk <<restok[i].ns << ";" << restok[i].js << ";" <<  restok[i].ss << ";" <<restok[i].hs;
      masuk << endl;
    }
  masuk.close();
    
    cout << "=============================================";
    cout << endl;
    cout << endl;
    cout << "\t\trestok berhasil";
    cout << endl;
    cout << "data terbaru : ";
    cout << endl;
    cout << endl;
    cout << "nama barang : ";
    cout << restok[pr-1].ns;
    cout << endl;
    cout << "jenis barang : ";
    cout << restok[pr-1].js;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restok[pr-1].ss;
    cout << endl;
    cout << "harga barang : ";
    cout << restok[pr-1].hs;
    cout << endl;
    cout << "================================================";
    cout << endl;
    
    
    
    
  }
    //restok makeup
  else if (pilih == 2){
    // cout << endl;
    // cout << " rubah stok make up ";
    // cout << endl;

    int index = 0;

	getdata.open("make_up.txt");
	while(!getdata.eof()){
		getdata >> tt;
		tttz(tt, ";", index);
		index++;
	}
	getdata.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
		cout << "============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << restokm[i].nm;
    cout << endl;
		cout << "jenis barang          : " << restokm[i].jm;
    cout << endl;
    cout << "stok                  : " << restokm[i].sm;
    cout << endl;
    cout << "harga barang          : " << restokm[i].hm;
    cout << endl;
		cout << "============================================";
    cout << endl;
    cout << endl;
	}
    hpss1();
    cout << "pilih skin care mana yang mau di restok : ";
    cin >> pr;
    cout << endl;
    cout << "=============================================";
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nm;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jm;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].sm;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].hm;
    cout << endl;
    cout << endl;
    cout << "=============================================";
    cout << endl;
    cout << "masukkan banyak restok : ";
    cin >> br;
    
    smtr = restokm[pr-1].sm + br;
    restokm[pr-1].sm = smtr;

    masuk.open("make_up.txt",ios::app);
  for (int i = 0; i < index; ++i){
      masuk <<restokm[i].nm << ";" << restokm[i].jm << ";" <<  restokm[i].sm << ";" <<restokm[i].hm;
      masuk << endl;
    }
  masuk.close();
    
    cout << "=============================================";
    cout << endl;
    cout << endl;
    cout << "\t\trestok berhasil";
    cout << endl;
    cout << "data terbaru : ";
    cout << endl;
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nm;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jm;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].sm;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].hm;
    cout << endl;
    cout << "=============================================";
    cout << endl;
  }

  else if (pilih == 3){
    cout << "=============================================";
    cout << endl;
    cout << "restok obat";
    cout << endl;
    int index = 0;

	getdata.open("obat.txt");
	while(!getdata.eof()){
		getdata >> tt;
		tttz1(tt, ";", index);
		index++;
	}
	getdata.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << restokm[i].nama_obat;
    cout << endl;
		cout << "jenis barang          : " << restokm[i].jenis_obat;
    cout << endl;
    cout << "stok                  : " << restokm[i].stok_obat;
    cout << endl;
    cout << "harga barang          : " << restokm[i].harga_obat;
    cout << endl;
		cout << "=============================================";
    cout << endl;
    cout << endl;
	}
    hpss2();
    cout << "pilih skin care mana yang mau di restok : ";
    cin >> pr;
    cout << endl;
    cout << "=============================================";
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_obat;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_obat;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_obat;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_obat;
    cout << endl;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "masukkan banyak restok : ";
    cin >> br;
    
    smtr = restokm[pr-1].stok_obat + br;
    restokm[pr-1].stok_obat = smtr;

    masuk.open("obat.txt",ios::app);
  for (int i = 0; i < index; ++i){
      masuk <<restokm[i].nama_obat << ";" << restokm[i].jenis_obat << ";" <<  restokm[i].stok_obat << ";" <<restokm[i].harga_obat;
      masuk << endl;
    }
  masuk.close();
    
    cout << "=============================================";
    cout << endl;
    cout << endl;
    cout << "\t\trestok berhasil";
    cout << endl;
    cout << "data terbaru : ";
    cout << endl;
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_obat;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_obat;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_obat;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_obat;
    cout << endl;
    cout << "=============================================";
    cout << endl;
    
  }
  else if (pilih == 4){
    cout << "=============================================";
    cout << endl;
    cout << "restok serum";
    cout << endl;
    int index = 0;

	getdata.open("serum.txt");
	while(!getdata.eof()){
		getdata >> tt;
		tttz2(tt, ";", index);
		index++;
	}
	getdata.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << restokm[i].nama_serum;
    cout << endl;
		cout << "jenis barang          : " << restokm[i].jenis_serum;
    cout << endl;
    cout << "stok                  : " << restokm[i].stok_serum;
    cout << endl;
    cout << "harga barang          : " << restokm[i].harga_serum;
    cout << endl;
		cout << "=============================================";
    cout << endl;
    cout << endl;
	}
    hpss3();
    cout << "pilih skin care mana yang mau di restok : ";
    cin >> pr;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_serum;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_serum;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_serum;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_serum;
    cout << endl;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "masukkan banyak restok : ";
    cin >> br;
    
    smtr = restokm[pr-1].stok_serum + br;
    restokm[pr-1].stok_serum = smtr;

    masuk.open("serum.txt",ios::app);
  for (int i = 0; i < index; ++i){
      masuk <<restokm[i].nama_serum << ";" << restokm[i].jenis_serum << ";" <<  restokm[i].stok_serum << ";" <<restokm[i].harga_serum;
      masuk << endl;
    }
  masuk.close();
    
    cout << "=============================================";
    cout << endl;
    cout << endl;
    cout << "\t\trestok berhasil";
    cout << endl;
    cout << "data terbaru : ";
    cout << endl;
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_serum;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_serum;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_serum;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_serum;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    
  }
  else if (pilih == 5){
     cout << "=============================================\n";
    cout << endl;
    cout << "restok minyak rambut";
    cout << endl;
    int index = 0;

	getdata.open("minyak_rambut.txt");
	while(!getdata.eof()){
		getdata >> tt;
		tttz3(tt, ";", index);
		index++;
	}
	getdata.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << restokm[i].nama_minyak_r;
    cout << endl;
		cout << "jenis barang          : " << restokm[i].jenis_minyak_r;
    cout << endl;
    cout << "stok                  : " << restokm[i].stok_minyak_r;
    cout << endl;
    cout << "harga barang          : " << restokm[i].harga_minyak_r;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
    hpss4();
    cout << "pilih skin care mana yang mau di restok : ";
    cin >> pr;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_minyak_r;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_minyak_r;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_minyak_r;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_minyak_r;
    cout << endl;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "masukkan banyak restok : ";
    cin >> br;
    
    smtr = restokm[pr-1].stok_minyak_r + br;
    restokm[pr-1].stok_minyak_r = smtr;

    masuk.open("minyak_rambut.txt",ios::app);
  for (int i = 0; i < index; ++i){
      masuk <<restokm[i].nama_minyak_r << ";" << restokm[i].jenis_minyak_r<< ";" <<  restokm[i].stok_minyak_r << ";" <<restokm[i].harga_minyak_r;
      masuk << endl;
    }
  masuk.close();
    
    cout << "=============================================\n";
    cout << endl;
    cout << endl;
    cout << "\t\trestok berhasil";
    cout << endl;
    cout << "data terbaru : ";
    cout << endl;
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_minyak_r;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_minyak_r;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_minyak_r;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_minyak_r;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
  }
  else if (pilih == 6){
    cout << "=============================================\n";
    cout << endl;
    cout << "restok lensa kontak";
    cout << endl;
    int index = 0;

	getdata.open("lensa_kontak.txt");
	while(!getdata.eof()){
		getdata >> tt;
		tttz4(tt, ";", index);
		index++;
	}
	getdata.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << restokm[i].nama_lensa;
    cout << endl;
		cout << "jenis barang          : " << restokm[i].jenis_lensa;
    cout << endl;
    cout << "stok                  : " << restokm[i].stok_lensa;
    cout << endl;
    cout << "harga barang          : " << restokm[i].harga_lensa;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
    hpss5();
    cout << "pilih skin care mana yang mau di restok : ";
    cin >> pr;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_lensa;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_lensa;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_lensa;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_lensa;
    cout << endl;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "masukkan banyak restok : ";
    cin >> br;
    
    smtr = restokm[pr-1].stok_lensa + br;
    restokm[pr-1].stok_lensa = smtr;

    masuk.open("lensa_kontak.txt",ios::app);
  for (int i = 0; i < index; ++i){
      masuk <<restokm[i].nama_lensa << ";" << restokm[i].jenis_lensa << ";" <<  restokm[i].stok_lensa << ";" <<restokm[i].harga_lensa;
      masuk << endl;
    }
  masuk.close();
    
    cout << "=============================================\n";
    cout << endl;
    cout << endl;
    cout << "\t\trestok berhasil";
    cout << endl;
    cout << "data terbaru : ";
    cout << endl;
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_lensa;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_lensa;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_lensa;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_lensa;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
  }
  else if (pilih == 7){
    cout << "=============================================\n";
    cout << "restok parfum";
    cout << endl;
    int index = 0;

	getdata.open("parfum.txt");
	while(!getdata.eof()){
		getdata >> tt;
		tttz5(tt, ";", index);
		index++;
	}
	getdata.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << restokm[i].nama_parfum;
    cout << endl;
		cout << "jenis barang          : " << restokm[i].jenis_parfum;
    cout << endl;
    cout << "stok                  : " << restokm[i].stok_parfum;
    cout << endl;
    cout << "harga barang          : " << restokm[i].harga_parfum;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
	}
    hpss6();
    cout << "pilih skin care mana yang mau di restok : ";
    cin >> pr;
    cout << endl;
    cout << "=============================================\n";
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_parfum;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_parfum;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_parfum;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_parfum;
    cout << endl;
    cout << endl;
    cout << "=============================================\n";
    cout << "masukkan banyak restok : ";
    cin >> br;
    
    smtr = restokm[pr-1].stok_parfum + br;
    restokm[pr-1].stok_parfum = smtr;

    masuk.open("parfum.txt",ios::app);
  for (int i = 0; i < index; ++i){
      masuk <<restokm[i].nama_parfum << ";" << restokm[i].jenis_parfum << ";" <<  restokm[i].stok_parfum << ";" <<restokm[i].harga_parfum;
      masuk << endl;
    }
  masuk.close();
    
    cout << "=============================================\n";
    cout << endl;
    cout << "\t\trestok berhasil";
    cout << endl;
    cout << "data terbaru : ";
    cout << endl;
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_parfum;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_parfum;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_parfum;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_parfum;
    cout << endl;
    cout << "=============================================\n";
  }
  else {
     cout << "=============================================\n";
    cout << "restok suplemen kulit";
    cout << endl;
    int index = 0;

	getdata.open("suplemen_kulit.txt");
	while(!getdata.eof()){
		getdata >> tt;
		tttz6(tt, ";", index);
		index++;
	}
	getdata.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << restokm[i].nama_supkul;
    cout << endl;
		cout << "jenis barang          : " << restokm[i].jenis_supkul;
    cout << endl;
    cout << "stok                  : " << restokm[i].stok_supkul;
    cout << endl;
    cout << "harga barang          : " << restokm[i].harga_supkul;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
	}
    hpss7();
    cout << "pilih skin care mana yang mau di restok : ";
    cin >> pr;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_supkul;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_supkul;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_supkul;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_supkul;
    cout << endl;
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "masukkan banyak restok : ";
    cin >> br;
    
    smtr = restokm[pr-1].stok_supkul + br;
    restokm[pr-1].stok_supkul = smtr;

    masuk.open("suplemen_kulit.txt",ios::app);
  for (int i = 0; i < index; ++i){
      masuk <<restokm[i].nama_supkul << ";" << restokm[i].jenis_supkul << ";" <<  restokm[i].stok_supkul << ";" <<restokm[i].harga_supkul;
      masuk << endl;
    }
  masuk.close();
    
    cout << "=============================================\n";
    cout << endl;
    cout << "\t\trestok berhasil";
    cout << endl;
    cout << "data terbaru : ";
    cout << endl;
    cout << endl;
    cout << "nama barang : ";
    cout << restokm[pr-1].nama_supkul;
    cout << endl;
    cout << "jenis barang : ";
    cout << restokm[pr-1].jenis_supkul;
    cout << endl;
    cout << "banyak barang sekarang : ";
    cout << restokm[pr-1].stok_supkul;
    cout << endl;
    cout << "harga barang : ";
    cout << restokm[pr-1].harga_supkul;
    cout << endl;
    cout << "=============================================\n";
    
  }
}

//ambil data dari txt ke intteger
int admiin:: to(string x){
	int y;

	stringstream ss;
	ss << x;
	ss >> y;

	return y;
}

//ambil data dari stock.txt
void admiin :: tz(string l, string del = " ", int index = 0){
  string tmp;
	int i = 1;
    int start, end = -1*del.size();
    do {
        start = end + del.size();
        end = l.find(del, start);
        tmp = l.substr(start, end - start);

        if (i == 1)
        {
        restok[index].ns = tmp;
        }
        else if (i == 2){
        	restok[index].js = tmp;
        }
        
        else if (i == 3){
          restok[index].ss = to(tmp);
        }
      else{
         restok[index].hs = to(tmp);
      }
        i++;

    } while (end != -1);
}


void admiin :: tttz(string l, string del = " ", int index = 0){
  string tmp;
	int i = 1;
    int start, end = -1*del.size();
    do {
        start = end + del.size();
        end = l.find(del, start);
        tmp = l.substr(start, end - start);

        if (i == 1)
        {
        restokm[index].nm = tmp;
        }
        else if (i == 2){
        	restokm[index].jm = tmp;
        }
        
        else if (i == 3){
          restokm[index].sm = to(tmp);
        }
      else{
         restokm[index].hm = to(tmp);
      }
        i++;

    } while (end != -1);
}

void admiin :: tttz1(string l1, string del1 = " ", int index = 0){
  string tmp;
	int i = 1;
    int start, end = -1*del1.size();
    do {
        start = end + del1.size();
        end = l1.find(del1, start);
        tmp = l1.substr(start, end - start);

        if (i == 1)
        {
        restokm[index].nama_obat = tmp;
        }
        else if (i == 2){
        	restokm[index].jenis_obat = tmp;
        }
        
        else if (i == 3){
          restokm[index].stok_obat = to(tmp);
        }
      else{
         restokm[index].harga_obat = to(tmp);
      }
        i++;

    } while (end != -1);
}

void admiin :: tttz2(string l2, string del2 = " ", int index = 0){
  string tmp;
	int i = 1;
    int start, end = -1*del2.size();
    do {
        start = end + del2.size();
        end = l2.find(del2, start);
        tmp = l2.substr(start, end - start);

        if (i == 1)
        {
        restokm[index].nama_serum = tmp;
        }
        else if (i == 2){
        	restokm[index].jenis_serum = tmp;
        }
        
        else if (i == 3){
          restokm[index].stok_serum = to(tmp);
        }
      else{
         restokm[index].harga_serum = to(tmp);
      }
        i++;

    } while (end != -1);
}
void admiin :: tttz3(string l3, string del3 = " ", int index = 0){
  string tmp;
	int i = 1;
    int start, end = -1*del3.size();
    do {
        start = end + del3.size();
        end = l3.find(del3, start);
        tmp = l3.substr(start, end - start);

        if (i == 1)
        {
        restokm[index].nama_minyak_r = tmp;
        }
        else if (i == 2){
        	restokm[index].jenis_minyak_r = tmp;
        }
        
        else if (i == 3){
          restokm[index].stok_minyak_r = to(tmp);
        }
      else{
         restokm[index].harga_minyak_r = to(tmp);
      }
        i++;

    } while (end != -1);
}

void admiin :: tttz4(string l4, string del4 = " ", int index = 0){
  string tmp;
	int i = 1;
    int start, end = -1*del4.size();
    do {
        start = end + del4.size();
        end = l4.find(del4, start);
        tmp = l4.substr(start, end - start);

        if (i == 1)
        {
        restokm[index].nama_lensa = tmp;
        }
        else if (i == 2){
        	restokm[index].jenis_lensa = tmp;
        }
        
        else if (i == 3){
          restokm[index].stok_lensa = to(tmp);
        }
      else{
         restokm[index].harga_lensa = to(tmp);
      }
        i++;

    } while (end != -1);
}
void admiin :: tttz5(string l5, string del5 = " ", int index = 0){
  string tmp;
	int i = 1;
    int start, end = -1*del5.size();
    do {
        start = end + del5.size();
        end = l5.find(del5, start);
        tmp = l5.substr(start, end - start);

        if (i == 1)
        {
        restokm[index].nama_parfum = tmp;
        }
        else if (i == 2){
        	restokm[index].jenis_parfum = tmp;
        }
        
        else if (i == 3){
          restokm[index].stok_parfum = to(tmp);
        }
      else{
         restokm[index].harga_parfum = to(tmp);
      }
        i++;

    } while (end != -1);
}

void admiin :: tttz6(string l6, string del6 = " ", int index = 0){
  string tmp;
	int i = 1;
    int start, end = -1*del6.size();
    do {
        start = end + del6.size();
        end = l6.find(del6, start);
        tmp = l6.substr(start, end - start);

        if (i == 1)
        {
        restokm[index].nama_supkul = tmp;
        }
        else if (i == 2){
        	restokm[index].jenis_supkul = tmp;
        }
        
        else if (i == 3){
          restokm[index].stok_supkul = to(tmp);
        }
      else{
         restokm[index].harga_supkul = to(tmp);
      }
        i++;

    } while (end != -1);
}


//ambil data dari karyawan.txt
void admiin :: ksize(string ss, string deel, int idx = 0){
  string tmp;
	int i = 1;
    int start, end = -1*deel.size();
    do {
        start = end + deel.size();
        end = ss.find(deel, start);
        tmp = ss.substr(start, end - start);

        if (i == 1)
        {
        	dt[idx].a1 = tmp;
        }
        else if (i == 2){
        	dt[idx].a2 = tmp;
        }
        else if (i == 3){
        	dt[idx].a3 = tmp;
        }
        else{
          dt[idx].a4 = tmp;
        }
        i++;

    } while (end != -1);
  }
// void admiin :: hapus_data_pelanggan(){
//   masuk.open("pelanggan.txt", std::ofstream::out | std::ofstream::trunc);
//   masuk.close();
//   cout << "data telah di hapus\n";
//   return;
// }

//menampilkan data karyawan yang sudah di hubungkan dengan linklist
void admiin :: tampil_karyawan(){
  // for(int i = 0; i < n; i++){
  //   cout << "nama : " << mulai -> Nama ;
  //   cout << "\n";

  //   cout << "alamat : " << mulai -> alamat;
  //  // mulai = mulai;
  //   cout << "jabatan : " << mulai -> jabatan;
  //   cout << "\n";
  //   //mulai = mulai;
  //   cout << "id : " << mulai -> id; 
  //   cout << "\n";
  //   mulai = mulai->next;
    
  
  // }
  int idx = 0;
  getdata.open("karyawan.txt");
	while(!getdata.eof()){
		getdata >> t;
		ksize(t, ";", idx);
		idx++;
	}
	getdata.close();
   for (int i = 0; i < idx-1; ++i){
      cout << endl;
      cout << "=============================================\n";
      cout << endl;
      cout << "nama    : " << mulai -> Nama ;
      cout << "\n";

      cout << "alamat  : " << mulai -> almt;
      cout << "\n";
   // mulai = mulai;
      cout << "jabatan : " << mulai -> jabatan;
      cout << "\n";
    //mulai = mulai;
      cout << "id      : " << mulai -> id; 
      cout << "\n";
      mulai = mulai->next;
      cout << endl;
      cout << "=============================================\n";
     }
  
}

//link list karyawan
void admiin :: input_nama(struct karyawan **mulai, string data,string data2, string data3, string data4){
  struct karyawan *node_baru = new karyawan;
  struct karyawan *ekor = NULL;
 
  
    node_baru->Nama = data;
     node_baru->next = (*mulai);
     //(*awal) = node_baru;
   
     node_baru -> id = data2;
     node_baru -> next = (*mulai);
     //(*mulai) = node_baru;

     node_baru -> almt = data3;
   node_baru -> next = (*mulai);
  
    node_baru -> jabatan = data4;
   node_baru -> next = (*mulai);
  // (*mulai) = node_baru;
    
    //   if(c == n){  
    //  (*mulai) -> next = ekor;
    // //ekor -> next = NULL;
    
    //  }else{
        (*mulai) = node_baru;
        
    // }
  
    
  
 
  //ekor -> next = NULL;
  
  
  
 }

//mengambil data karyawan dri file txt
void admiin :: data_karyawan(){
     int idx = 0;

	getdata.open("karyawan.txt");
	while(!getdata.eof()){
		getdata >> t;
		ksize(t, ";", idx);
		idx++;
	}
	getdata.close();
   for (int i = 0; i < idx-1; ++i){
    //dt[idx].a1;
   input_nama(  &mulai, dt[i].a2, dt[i].a1, dt[i].a3, dt[i].a4);
    
     }
   // input_nama(karyawan, nama, jabatan);
  // if(c < 1){
  //    admin();
  //  }
  //  else{
  //    data_karyawan(c-1);
  //  }
   
   // data_karyawan(c-1);
   // if(c < 1){
   //   admin();
   // }
   
 }

//menu admin
void admiin:: admin(){
		do{
      g:
      data_karyawan();
       KTP kk;
       queue hhhh;
       exp uhuy;
      cout << endl;
      cout << "\n\n==========Anda login sebagai admin==========";
      cout << endl;
			cout << "1. tambah data pelanggan";
      cout << endl;
			cout << "2. edit data pelanggan";
      cout << endl;
      cout << "3. tampilkan data pelanggan";
      cout << endl;
      cout << "4. hapus semua data pelanggan";
      cout << endl;
      cout << "5. input data karyawan";
      cout << endl;
      cout << "6. menampilkan data karyawan";
      cout << endl;
      cout << "7. restok barang ";
      cout << endl;
      cout << "8. list exp";
      cout << endl;
      cout << "9. pop exp";
      cout << endl;
      cout << "10. kemas barang";
      cout << endl;
      cout << "11. jawab pertanyaan konsultasi";
      cout << endl;
      cout << "=============================================\n";
			cout << "silahkan pilih : ";
			cin >> pilih;
			switch(pilih){
				case 1:
          kk.input_ktp();
          
				break;
							
				case 2:
        
				  kk.edit_pelanggan();
          
				break;
        
        case 3:
         
          kk.tampil_ktp();
        break;
        
        case 4:
					
          kk.hapus_semua_ktp();
        break;
        
        case 5:
					 //data_karyawan();
          kk.input_karyawan();
        break;
        
        case 6:
          
					tampil_karyawan();
        break;
        
        case 7:
         
          isiulang();
        break;
        
        case 8:
          uhuy.ambil();
        break;
        
        case 9:
           uhuy.pop();
          uhuy.pop2();
          uhuy.pop3();
        break;

        case 10:
          //cout << "cek";
          hhhh.m();
        break;
        
        case 11:
          // konsultasi093 p;
          // p.jawaban093();
        break;
        
        default:
          cout << endl;
          cout << "pilih no dengan teliti ";
          cout << endl;
          goto g;
        break;
								
								
			}
		}
		while(pilih != 12);
}

void admiin :: data_pelanggan(int n){
  
	if( n<=0 ){
		masuk.close();
	}
	else{
    
	cout << endl;
	cout << "masukkan data " << a ;
  cout << endl;
	getchar();
	cout << "inputkan nama : ";
	getline(cin,plg[a].nama);
	masuk << plg[a].nama ;
  cout << endl;
	
	cout << "inputkan kabupaten : ";
	getline(cin,plg[a].almt.kab);
	masuk << plg[a].almt.kab; 
  cout << endl;

  cout << "inputkan kecamatan : ";
  getline(cin,plg[a].almt.kec);
  masuk << plg[a].almt.kec ; 
  cout << endl;

  cout << "inputkan Desa : ";
  getline(cin,plg[a].almt.desa);
  masuk << plg[a].almt.desa ;
  cout << endl;

  cout << "inputkan no hp : ";
  getline(cin,plg[a].no);
  masuk << plg[a].no ;
  cout << endl;
    
	a++;
	data_pelanggan(n-1);
	}
}

