/*note
  104 // hasany
*/

#ifndef barang_
#define barang_
#include "ktp.h"
//#include "faq.h"
#include "revisi.h"
#include "booking.h"
#include "revisi2.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;


class barang{
  public :
    void tokenn(string li, string dl, int lkk);
    void tz(string l, string del , int lk);
    void ttzz(string ll, string ddel , int llk);
    void tttzz(string lll, string ddel , int llk);
    void tokenizet(string llll, string dell, int cc);
    void toize(string llll, string dell, int cc);
    void toize1(string llll1, string dell1, int cc1);
    void toize2(string llll2, string dell2, int cc2);
    void toize3(string llll3, string dell3, int cc3);
    void toize4(string llll4, string dell4, int cc4);
    void toize5(string llll5, string dell5, int cc5);
    int to(string xx);
    void databrng();
    void beli_makeup();
    void beli_obat();
    void beli_serum();
    void beli_cat_rambut();
    void beli_minyak_rambut();
    void beli_lensa_kontak();
    void beli_parfum();
    void beli_suplemen_kulit();
    ifstream jkt;
    void pelanggan();
    void konsul();
    void hps();
    void hps1();
    void hps2();
    void hps3();
    void hps4();
    void hps5();
    void hps6();
    void hps7();
    void hps8();

  private:
    int index_pelanggan;
    int pil_pel;
    
    int buy;
// variabel data skin care
    string namabrg;
    string jenis;
    int stk;
    int harga;

// variabel make up
    string namabrgm;
    string jenism;
    int stkm;
    int hargam;

  //serum
  string nama_serum;
  string jenis_serum;
  int stok_serum;
  int harga_serum;

  //minyak rambut
  string nama_mr;
  string jenis_mr;
  int stok_mr;
  int harga_mr;

//parfum
  string nama_parfum;
  string jenis_parfum;
  int stok_parfum;
  int harga_parfum;

//suplemen_kulit
  string nama_sk;
  string jenis_sk;
  int stok_sk;
  int harga_sk;

  //lensa kontak
  string nama_lk;
  string jenis_lk;
  int stok_lk;
  int harga_lk;

//cat rambut
string nama_cr;
  string jenis_cr;
  int stok_cr;
  int harga_cr;

//variabel obat
     string namabrgo;
    string jeniso;
    int stko;
    int hargao;

    string tt;
    int ind;
    int p;
    int banyak;
    int random[100];
    string kon;
    ofstream msk,mask;
    int smt;

  string agamat;
  string nikt;
  string namat;
  string alamatt;
  string tempatt;
  string jktt;
  string tlt;
};
barang brg[100];
barang pel[100];




void barang :: hps(){
  
  msk.open("stock.txt", std::ofstream::out | std::ofstream::trunc);
  msk.close();
}


void barang :: hps1(){
  
  msk.open("make_up.txt", std::ofstream::out | std::ofstream::trunc);
  msk.close();
}

void barang :: hps2(){
  
  msk.open("obat.txt", std::ofstream::out | std::ofstream::trunc);
  msk.close();
}

void barang :: hps3(){
   msk.open("obat.txt", std::ofstream::out | std::ofstream::trunc);
  msk.close();
}

void barang :: hps4(){
   msk.open("cat_rambut.txt", std::ofstream::out | std::ofstream::trunc);
  msk.close();
}

void barang :: hps5(){
   msk.open("minyak_rambut.txt", std::ofstream::out | std::ofstream::trunc);
  msk.close();
}

void barang :: hps6(){
   msk.open("lensa_kontak.txt", std::ofstream::out | std::ofstream::trunc);
  msk.close();
}

void barang :: hps7(){
   msk.open("parfum.txt", std::ofstream::out | std::ofstream::trunc);
  msk.close();
}

void barang :: hps8(){
   msk.open("suplemen_kulit.txt", std::ofstream::out | std::ofstream::trunc);
  msk.close();
}

void barang :: konsul(){
  
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
  cout << "anda sedang pada fitur konsultasi online ";
  cout << endl;
  cout << "1. mengirim pertanyaan : ";
  cout << endl;
  cout << "2. liat pertanyaan yang sering di tanyakan ";
  cout << endl;
  cout << "masukkan pilihan : ";
  cin >> p;
  cout << "=============================================\n";
  cout << endl;
  
  if(p == 1){
    cout << endl;
   cout << "=============================================\n";
    cout << endl;
    cout << "silahkan masukkan pertanyaan pada konsul.txt  ";
    
  }
    
  else if(p == 2){
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << "> tannya : saran sabun cuci muka yang cocok dok ? ";
    cout << endl;
    cout << "> jwb : tergantung dari jenis kulitnya jika kulit berminyak pakai sabun cuci muka yang mengandung Hyaluronic Acid ";
    cout << endl << endl;
    
    cout << "> tanya : Berapa harga produk-produk yang disediakan?";
    cout << endl;
    cout << "> jwb : Produk kami dijual dengan rentang harga Rp 18.000 s.d Rp 128.000";
    cout << endl << endl;
    
    cout << "> tanya : Apakah produk yang disediakan halal?";
    cout << endl;
    cout << "> jwb : Ya, pada dasarnya sejak dulu formula produk kami halal karena secara internal kami sebagai produsen telah menerapkan Kebijakan Jaminan Halal, dimana semua produk yang diproduksi harus memperhatikan kehalalannya. Artinya sejak dulu proses produksi selalu memperhatikan kehalalan produk yang dihasilkan.";
    cout << endl << endl;
    
    cout << "> tanya : Apakah Produk yang disediakan menyebabkan jerawat dan komedo??";
    cout << endl;
    cout << "> jwb : Beberapa produk kami teruji secara dermatologist tidak menyebabkan kulit berjerawat dan berkomedo. Dengan penggunaan yang tepat produk produk kami tidak memicu timbulnya jerawat dan komedo. Pastikan wajah dibersihkan dengan benar setelah menggunakan makeup dan gunakan makeup yang tepat";
    cout << endl << endl;

    cout << "> tanya : Berapa harga perawatan di Salon Kecantikan?";
    cout << endl;
    cout << "> jwb : Biaya perawatan di Salon Kecantikan kami bervariasi, tergantung kondisi kulit dan keluhan pasien dan solusi tindakan maupun produk yang dilakukan.";
    cout << endl << endl;

    cout << "> tanya : Berapa lama waktu yang dibutuhkan hingga perawatan saya di Salon Kecantikan menghasilkan efek yang terasa?";
    cout << endl;
    cout << "> jwb : Di Salon Kecantikan kami hanya menawarkan solusi tindakan maupun produk yang berbasis medis – jadi pastinya akan membuahkan hasil yang nyata. Namun, waktu yang dibutuhkan untuk membuahkan efek positif bervariasi – tergantung pada keluhan dan sifat kulit pasien, solusi yang dilakukan, serta kedisiplinan pasien dalam mengikuti anjuran dokter.";
    cout << endl << endl;

    cout << "tanya : ";

    
    cout << "=============================================\n";
    cout << "=============================================\n";
  }
}

//menu pelanggan
void barang :: pelanggan(){
 kesini:

  cout << "=============================================\n";
  cout << endl;
  cout << "1. beli barang/produk";
  cout << endl;
  cout << "2. booking perawatan";
  cout << endl;
  cout << "3. konsultasi";
  cout << endl;
  cout << endl;
  cout << "=============================================\n";
  cout << "masukkan pilihan : ";
  cin >> pil_pel;
  if(pil_pel == 1){
    
  
  
  do{
  //   jkt.open("idx_ktp.txt");
  // for (int i = 0; i < 1; i++){
  //   jkt >> index_pelanggan;
  // }
    
    
    cout << endl;
    cout << "=============================================\n";
    cout << endl;
    cout << endl;
    cout << "1. beli produk scin care";
    cout << endl;
    cout << "2. beli produk make up";
    cout << endl;
    cout << "3. beli obat ";
    cout << endl;
    cout << "4. beli serum ";
    cout << endl;
    cout << "5. beli cat rambut ";
    cout << endl;
    cout << "6. beli minyak rambut ";
    cout << endl;
    cout << "7. kontak lensa ";
    cout << endl;
    cout << "8. suplemen kulit";
    cout << endl;
    cout << "silahkan pilih : ";
    cin >> p;
    cout << "=============================================\n";
    // cout << endl;
    // cout << passwordc;
    // cout << endl;
    // cout << userc;
    // cout << endl;
    
    switch(p){
      
      case 1:
        databrng();
      break;
      
      case 2:
        // konsul();
        beli_makeup();
      break;
      
      case 3:
        // konsul();
        beli_obat();
      break;
      
      case 4:
        beli_serum();
      break;
      
      case 5:
        beli_minyak_rambut();
      break;
      
      case 6:
        beli_lensa_kontak();
      break;

      case 7:
        beli_parfum();
      break;

      case 8:
        beli_suplemen_kulit();
      break;
    }
  }while(p != 9);

  }
  else if (pil_pel==2){
    booking_perawatan ab;
    ab.perawatan();
    ab.invoice_perawatan();
    goto kesini;
  }

  else if (pil_pel==3){
    konsultasi093 ac;
    ac.pertanyaan093();
    goto kesini;
  }
  else {
    cout<<" ";
    goto kesini;
  }
}

void barang :: beli_obat(){
  int index = 0;
  int idxx = 0 ;
  jkt.open("idx_ktp.txt");
  for (int i = 0; i < 1; i++){
    jkt >> index_pelanggan;
  }
jkt.close();
  
  jkt.open("pelanggan.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tokenizet(tt, ";", idxx);
		idxx++;
	}
	jkt.close();

	jkt.open("obat.txt");
  
	while(!jkt.eof()){
		jkt >> tt;
		ttzz(tt, ";", index);
		index++;
	}
  jkt.close();

  for (int i = 0; i < index; ++i){
    cout << endl;
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << brg[i].namabrgo;
    cout << endl;
		cout << "jenis barang          : " << brg[i].jeniso;
    cout << endl;
    cout << "stok                  : " << brg[i].stko;
    cout << endl;
    cout << "harga barang          : " << brg[i].hargao;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
  
  cout << "silahkan pilih  : ";
  cin >> buy;
  cout << "berapa banyak   : ";
  cin >> banyak;
  cout << "=============================================\n";
  cout << endl;
  cout << "============struk pembelian barang===========" ;
  cout << endl;
  cout << "nama barang     : ";
  cout << brg[buy-1].namabrgo;
  cout << endl;
  cout << "sebanyak        : " ;
  cout << banyak;
  cout << endl;
  cout << "total harga     : ";
  cout << brg[buy-1].hargao*banyak;
  cout << endl;
  random[(banyak*2)/4]= rand();
  cout << "kode pembayaran : ";
  cout <<  random[(banyak*2)/4];
  cout << endl;
  cout << "silahkan bayar menggunakan kode pembayaran yang tertera di atas ";
  cout << endl;
  cout << "               TERIMAKASIH              ";
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
  cout << endl;
  
  // random = rand();x  
  hps2();
  
  smt =   brg[buy-1].stko - banyak ;
  brg[buy-1].stko = smt;
  // cout << brg[buy-1].stk;
  // cout << endl;

  msk.open("transaksi.txt",ios::app);
  //msk << endl;
  msk << pel[index_pelanggan].nikt << ";" << pel[index_pelanggan].namat << ";" << brg[buy-1].namabrgo << ";" << banyak << ";" << brg[buy-1].hargao*banyak;
  msk << endl;
  msk.close();
  
  msk.open("obat.txt",ios::app);
  for (int i = 0; i < index; ++i){
      msk << brg[i].namabrgo << ";" << brg[i].jeniso << ";" <<  brg[i].stko << ";" << brg[i].hargao;
      if(i == index-1){
       cout << " ";
     }else
      msk << endl;
    }
  msk.close();
}

//fitur beli makeup
void barang :: beli_makeup(){
  int index = 0;
  int idxx = 0 ;
  jkt.open("idx_ktp.txt");
  for (int i = 0; i < 1; i++){
    jkt >> index_pelanggan;
  }
jkt.close();
  
  jkt.open("pelanggan.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tokenizet(tt, ";", idxx);
		idxx++;
	}
	jkt.close();

	jkt.open("make_up.txt");
  
	while(!jkt.eof()){
		jkt >> tt;
		ttzz(tt, ";", index);
		index++;
	}
  jkt.close();

  for (int i = 0; i < index; ++i){
    cout << endl;
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << brg[i].namabrgm;
    cout << endl;
		cout << "jenis barang          : " << brg[i].jenism;
    cout << endl;
    cout << "stok                  : " << brg[i].stkm;
    cout << endl;
    cout << "harga barang          : " << brg[i].hargam;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
  
  cout << "silahkan pilih  : ";
  cin >> buy;
  cout << "berapa banyak   : ";
  cin >> banyak;
  cout << "=============================================\n";
  cout << endl;
  cout << "============struk pembelian barang===========" ;
  cout << endl;
  cout << "nama barang     : ";
  cout << brg[buy-1].namabrgm;
  cout << endl;
  cout << "sebanyak        : " ;
  cout << banyak;
  cout << endl;
  cout << "total harga     : ";
  cout << brg[buy-1].hargam*banyak;
  cout << endl;
  random[(banyak*2)/4]= rand();
  cout << "kode pembayaran : ";
  cout <<  random[(banyak*2)/4];
  cout << endl;
  cout << "silahkan bayar menggunakan kode pembayaran yang tertera di atas ";
  cout << endl;
  cout << "               TERIMAKASIH              ";
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
  cout << endl;
  
  msk.open("transaksi.txt",ios::app);
  //msk << endl;
  msk << pel[index_pelanggan].nikt << ";" << pel[index_pelanggan].namat << ";" << brg[buy-1].namabrgm << ";" << banyak << ";" << brg[buy-1].hargam*banyak;
  cout << endl;
  msk.close();
  
  // random = rand();x  
  hps1();
  
  smt =   brg[buy-1].stkm - banyak ;
  brg[buy-1].stkm = smt;
  // cout << brg[buy-1].stk;
  // cout << endl;
  msk.open("make_up.txt",ios::app);
  for (int i = 0; i < index; ++i){
      msk << brg[i].namabrgm << ";" << brg[i].jenism << ";" <<  brg[i].stkm << ";" << brg[i].hargam;
      if(i == index-1){
       cout << " ";
     }else
      msk << endl;
    }
  msk.close();
}

//lensa kontak
void barang :: beli_lensa_kontak(){
  int index = 0;
  int idxx = 0 ;
  jkt.open("idx_ktp.txt");
  for (int i = 0; i < 1; i++){
    jkt >> index_pelanggan;
  }
jkt.close();
  
  jkt.open("pelanggan.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tokenizet(tt, ";", idxx);
		idxx++;
	}
	jkt.close();

 // cout << "cek " << pel[index_pelanggan].nikt;
	jkt.open("lensa_kontak.txt");
	while(!jkt.eof()){
		jkt >> tt;
		toize3(tt, ";", index);
		index++;
	}
	jkt.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
    cout << endl;
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << brg[i].nama_lk;
    cout << endl;
		cout << "jenis barang          : " << brg[i].jenis_lk;
    cout << endl;
    cout << "stok                  : " << brg[i].stok_lk;
    cout << endl;
    cout << "harga barang          : " << brg[i].harga_lk;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
  
  cout << "silahkan pilih  : ";
  cin >> buy;
  cout << "berapa banyak   : ";
  cin >> banyak;
  cout << "=============================================\n";
  cout << endl;
  cout << "============struk pembelian barang===========" ;
  cout << endl;
  cout << "nama barang     : ";
  cout << brg[buy-1].nama_lk;
  cout << endl;
  cout << "sebanyak        : " ;
  cout << banyak;
  cout << endl;
  cout << "total harga     : ";
  cout << brg[buy-1].harga_lk*banyak;
  cout << endl;
  random[(banyak*2)/4]= rand();
  cout << "kode pembayaran : ";
  cout <<  pel[index_pelanggan].nikt << random[(banyak*2)/4];
  cout << endl;
  cout << "silahkan bayar menggunakan kode pembayaran yang tertera di atas ";
  cout << endl;
  cout << "               TERIMAKASIH              ";
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
  cout << endl;
  // random = rand();x 

  msk.open("transaksi.txt",ios::app);
  //msk << endl;
  msk << pel[index_pelanggan].nikt << ";" << pel[index_pelanggan].namat << ";" << brg[buy-1].nama_lk << ";" << banyak << ";" << brg[buy-1].harga_lk*banyak;
  cout << endl;
  msk.close();
  
  hps6();
  smt =   brg[buy-1].stok_lk - banyak ;
  brg[buy-1].stok_lk = smt;
  // cout << brg[buy-1].stk;
  // cout << endl;
  msk.open("lensa_kontak.txt",ios::app);
  for (int i = 0; i < index; ++i){
      msk << brg[i].nama_lk << ";" << brg[i].jenis_lk << ";" <<  brg[i].stok_lk << ";" << brg[i].harga_lk;
     if(i == index-1){
       cout << " ";
     }else
      msk << endl;
    }
  msk.close();
//}
// mask.open("transaksi.txt",ios::app);
  
//       // msk << brg[i].namabrgm << ";" << brg[i].jenism << ";" <<  brg[i].stkm << ";" << brg[i].hargam;
//       // msk << endl;
//     mask << userc << ";" << passwordc << endl;
    
//   mask.close();
}

//parfum
void barang :: beli_parfum(){
  int index = 0;
  int idxx = 0 ;
  jkt.open("idx_ktp.txt");
  for (int i = 0; i < 1; i++){
    jkt >> index_pelanggan;
  }
jkt.close();
  
  jkt.open("pelanggan.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tokenizet(tt, ";", idxx);
		idxx++;
	}
	jkt.close();

 // cout << "cek " << pel[index_pelanggan].nikt;
	jkt.open("parfum.txt");
	while(!jkt.eof()){
		jkt >> tt;
		toize4(tt, ";", index);
		index++;
	}
	jkt.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
    cout << endl;
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << brg[i].nama_parfum;
    cout << endl;
		cout << "jenis barang          : " << brg[i].jenis_parfum;
    cout << endl;
    cout << "stok                  : " << brg[i].stok_parfum;
    cout << endl;
    cout << "harga barang          : " << brg[i].harga_parfum;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
  
  cout << "silahkan pilih  : ";
  cin >> buy;
  cout << "berapa banyak   : ";
  cin >> banyak;
cout << "=============================================\n";
  cout << endl;
  cout << "============struk pembelian barang===========" ;
  cout << endl;
  cout << "nama barang     : ";
  cout << brg[buy-1].nama_parfum;
  cout << endl;
  cout << "sebanyak        : " ;
  cout << banyak;
  cout << endl;
  cout << "total harga     : ";
  cout << brg[buy-1].harga_parfum*banyak;
  cout << endl;
  random[(banyak*2)/4]= rand();
  cout << "kode pembayaran : ";
  cout <<  pel[index_pelanggan].nikt << random[(banyak*2)/4];
  cout << endl;
  cout << "silahkan bayar menggunakan kode pembayaran yang tertera di atas ";
  cout << endl;
  cout << "               TERIMAKASIH              ";
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
  cout << endl;
  // random = rand();x 

  msk.open("transaksi.txt",ios::app);
  //msk << endl;
  msk << pel[index_pelanggan].nikt << ";" << pel[index_pelanggan].namat << ";" << brg[buy-1].nama_parfum << ";" << banyak << ";" << brg[buy-1].harga_parfum*banyak;
  cout << endl;
  msk.close();
  
  hps7();
  smt =   brg[buy-1].stok_parfum - banyak ;
  brg[buy-1].stok_parfum = smt;
  // cout << brg[buy-1].stk;
  // cout << endl;
  msk.open("parfum.txt",ios::app);
  for (int i = 0; i < index; ++i){
      msk << brg[i].nama_parfum << ";" << brg[i].jenis_parfum << ";" <<  brg[i].stok_parfum << ";" << brg[i].harga_parfum;
     if(i == index-1){
       cout << " ";
     }else
      msk << endl;
    }
  msk.close();
//}
// mask.open("transaksi.txt",ios::app);
  
//       // msk << brg[i].namabrgm << ";" << brg[i].jenism << ";" <<  brg[i].stkm << ";" << brg[i].hargam;
//       // msk << endl;
//     mask << userc << ";" << passwordc << endl;
    
//   mask.close();
}

//suplemen kulit

void barang :: beli_suplemen_kulit(){
  int index = 0;
  int idxx = 0 ;
  jkt.open("idx_ktp.txt");
  for (int i = 0; i < 1; i++){
    jkt >> index_pelanggan;
  }
jkt.close();
  
  jkt.open("pelanggan.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tokenizet(tt, ";", idxx);
		idxx++;
	}
	jkt.close();

 // cout << "cek " << pel[index_pelanggan].nikt;
	jkt.open("suplemen_kulit.txt");
	while(!jkt.eof()){
		jkt >> tt;
		toize5(tt, ";", index);
		index++;
	}
	jkt.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
    cout << endl;
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << brg[i].nama_sk;
    cout << endl;
		cout << "jenis barang          : " << brg[i].jenis_sk;
    cout << endl;
    cout << "stok                  : " << brg[i].stok_sk;
    cout << endl;
    cout << "harga barang          : " << brg[i].harga_sk;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
  
  cout << "silahkan pilih  : ";
  cin >> buy;
  cout << "berapa banyak   : ";
  cin >> banyak;
  cout << "=============================================\n";
  cout << endl;
  cout << "============struk pembelian barang===========" ;
  cout << endl;
  cout << "nama barang     : ";
  cout << brg[buy-1].nama_sk;
  cout << endl;
  cout << "sebanyak        : " ;
  cout << banyak;
  cout << endl;
  cout << "total harga     : ";
  cout << brg[buy-1].harga_sk*banyak;
  cout << endl;
  random[(banyak*2)/4]= rand();
  cout << "kode pembayaran : ";
  cout <<  pel[index_pelanggan].nikt << random[(banyak*2)/4];
  cout << endl;
  cout << "silahkan bayar menggunakan kode pembayaran yang tertera di atas ";
  cout << endl;
  cout << "               TERIMAKASIH              ";
  cout << endl;
cout << "=============================================\n";
  cout << endl;
  cout << endl;
  // random = rand();x 

  msk.open("transaksi.txt",ios::app);
  //msk << endl;
  msk << pel[index_pelanggan].nikt << ";" << pel[index_pelanggan].namat << ";" << brg[buy-1].nama_sk << ";" << banyak << ";" << brg[buy-1].harga_sk*banyak;
  cout << endl;
  msk.close();
  
  hps7();
  smt =   brg[buy-1].stok_sk - banyak ;
  brg[buy-1].stok_sk = smt;
  // cout << brg[buy-1].stk;
  // cout << endl;
  msk.open("suplemen_kulit.txt",ios::app);
  for (int i = 0; i < index; ++i){
      msk << brg[i].nama_sk << ";" << brg[i].jenis_sk << ";" <<  brg[i].stok_sk << ";" << brg[i].harga_sk;
     if(i == index-1){
       cout << " ";
     }else
      msk << endl;
    }
  msk.close();
}

//minyak rambut

void barang :: beli_minyak_rambut(){
  int index = 0;
  int idxx = 0 ;
  jkt.open("idx_ktp.txt");
  for (int i = 0; i < 1; i++){
    jkt >> index_pelanggan;
  }
jkt.close();
  
  jkt.open("pelanggan.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tokenizet(tt, ";", idxx);
		idxx++;
	}
	jkt.close();

 // cout << "cek " << pel[index_pelanggan].nikt;
	jkt.open("minyak_rambut.txt");
	while(!jkt.eof()){
		jkt >> tt;
		toize2(tt, ";", index);
		index++;
	}
	jkt.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
    cout << endl;
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << brg[i].nama_mr;
    cout << endl;
		cout << "jenis barang          : " << brg[i].jenis_mr;
    cout << endl;
    cout << "stok                  : " << brg[i].stok_mr;
    cout << endl;
    cout << "harga barang          : " << brg[i].harga_mr;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
  
  cout << "silahkan pilih  : ";
  cin >> buy;
  cout << "berapa banyak   : ";
  cin >> banyak;
  cout << "=============================================\n";
  cout << endl;
  cout << "============struk pembelian barang===========" ;
  cout << endl;
  cout << "nama barang     : ";
  cout << brg[buy-1].nama_mr;
  cout << endl;
  cout << "sebanyak        : " ;
  cout << banyak;
  cout << endl;
  cout << "total harga     : ";
  cout << brg[buy-1].harga_mr*banyak;
  cout << endl;
  random[(banyak*2)/4]= rand();
  cout << "kode pembayaran : ";
  cout <<  pel[index_pelanggan].nikt << random[(banyak*2)/4];
  cout << endl;
  cout << "silahkan bayar menggunakan kode pembayaran yang tertera di atas ";
  cout << endl;
  cout << "               TERIMAKASIH              ";
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
  cout << endl;
  // random = rand();x 

  msk.open("transaksi.txt",ios::app);
  //msk << endl;
  msk << pel[index_pelanggan].nikt << ";" << pel[index_pelanggan].namat << ";" << brg[buy-1].nama_mr << ";" << banyak << ";" << brg[buy-1].harga_mr*banyak;
  cout << endl;
  msk.close();
  
  hps5();
  smt =   brg[buy-1].stok_mr - banyak ;
  brg[buy-1].stok_mr = smt;
  // cout << brg[buy-1].stk;
  // cout << endl;
  msk.open("minyak_rambut.txt",ios::app);
  for (int i = 0; i < index; ++i){
      msk << brg[i].nama_mr << ";" << brg[i].jenis_mr << ";" <<  brg[i].stok_mr << ";" << brg[i].harga_mr;
     if(i == index-1){
       cout << " ";
     }else
      msk << endl;
    }
  msk.close();
//}
// mask.open("transaksi.txt",ios::app);
  
//       // msk << brg[i].namabrgm << ";" << brg[i].jenism << ";" <<  brg[i].stkm << ";" << brg[i].hargam;
//       // msk << endl;
//     mask << userc << ";" << passwordc << endl;
    
//   mask.close();
}

//cat_rambut

void barang :: beli_cat_rambut(){ 

int index = 0;
  int idxx = 0 ;
  jkt.open("idx_ktp.txt");
  for (int i = 0; i < 1; i++){
    jkt >> index_pelanggan;
  }
jkt.close();
  
  jkt.open("pelanggan.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tokenizet(tt, ";", idxx);
		idxx++;
	}
	jkt.close();

 // cout << "cek " << pel[index_pelanggan].nikt;
	jkt.open("cat_rambut.txt");
	while(!jkt.eof()){
		jkt >> tt;
		toize1(tt, ";", index);
		index++;
	}
	jkt.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
    cout << endl;
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << brg[i].nama_cr;
    cout << endl;
		cout << "jenis barang          : " << brg[i].jenis_cr;
    cout << endl;
    cout << "stok                  : " << brg[i].stok_cr;
    cout << endl;
    cout << "harga barang          : " << brg[i].harga_cr;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
  
  cout << "silahkan pilih  : ";
  cin >> buy;
  cout << "berapa banyak   : ";
  cin >> banyak;
  cout << "=============================================\n";
  cout << endl;
  cout << "============struk pembelian barang===========" ;
  cout << endl;
  cout << "nama barang     : ";
  cout << brg[buy-1].nama_cr;
  cout << endl;
  cout << "sebanyak        : " ;
  cout << banyak;
  cout << endl;
  cout << "total harga     : ";
  cout << brg[buy-1].harga_cr*banyak;
  cout << endl;
  random[(banyak*2)/4]= rand();
  cout << "kode pembayaran : ";
  cout <<  pel[index_pelanggan].nikt << random[(banyak*2)/4];
  cout << endl;
  cout << "silahkan bayar menggunakan kode pembayaran yang tertera di atas ";
  cout << endl;
  cout << "               TERIMAKASIH              ";
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
  cout << endl;
  // random = rand();x 

  msk.open("transaksi.txt",ios::app);
  //msk << endl;
  msk << pel[index_pelanggan].nikt << ";" << pel[index_pelanggan].namat << ";" << brg[buy-1].nama_cr << ";" << banyak << ";" << brg[buy-1].harga_cr*banyak;
  cout << endl;
  msk.close();
  
  hps4();
  smt =   brg[buy-1].stok_cr - banyak ;
  brg[buy-1].stok_cr = smt;
  // cout << brg[buy-1].stk;
  // cout << endl;
  msk.open("cat_rambut.txt",ios::app);
  for (int i = 0; i < index; ++i){
      msk << brg[i].nama_cr << ";" << brg[i].jenis_cr << ";" <<  brg[i].stok_cr << ";" << brg[i].harga_cr;
     if(i == index-1){
       cout << " ";
     }else
      msk << endl;
    }
  msk.close();
//}
// mask.open("transaksi.txt",ios::app);
  
//       // msk << brg[i].namabrgm << ";" << brg[i].jenism << ";" <<  brg[i].stkm << ";" << brg[i].hargam;
//       // msk << endl;
//     mask << userc << ";" << passwordc << endl;
    
//   mask.close();
}

//serum
void barang :: beli_serum(){ 

int index = 0;
  int idxx = 0 ;
  jkt.open("idx_ktp.txt");
  for (int i = 0; i < 1; i++){
    jkt >> index_pelanggan;
  }
jkt.close();
  
  jkt.open("pelanggan.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tokenizet(tt, ";", idxx);
		idxx++;
	}
	jkt.close();

 // cout << "cek " << pel[index_pelanggan].nikt;
	jkt.open("serum.txt");
	while(!jkt.eof()){
		jkt >> tt;
		toize(tt, ";", index);
		index++;
	}
	jkt.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
    cout << endl;
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << brg[i].nama_serum;
    cout << endl;
		cout << "jenis barang          : " << brg[i].jenis_serum;
    cout << endl;
    cout << "stok                  : " << brg[i].stok_serum;
    cout << endl;
    cout << "harga barang          : " << brg[i].harga_serum;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
  
  cout << "silahkan pilih  : ";
  cin >> buy;
  cout << "berapa banyak   : ";
  cin >> banyak;
  cout << "=============================================\n";
  cout << endl;
  cout << "============struk pembelian barang===========" ;
  cout << endl;
  cout << "nama barang     : ";
  cout << brg[buy-1].nama_serum;
  cout << endl;
  cout << "sebanyak        : " ;
  cout << banyak;
  cout << endl;
  cout << "total harga     : ";
  cout << brg[buy-1].harga_serum*banyak;
  cout << endl;
  random[(banyak*2)/4]= rand();
  cout << "kode pembayaran : ";
  cout <<  pel[index_pelanggan].nikt << random[(banyak*2)/4];
  cout << endl;
  cout << "silahkan bayar menggunakan kode pembayaran yang tertera di atas ";
  cout << endl;
  cout << "               TERIMAKASIH              ";
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
  cout << endl;
  // random = rand();x 

  msk.open("transaksi.txt",ios::app);
  //msk << endl;
  msk << pel[index_pelanggan].nikt << ";" << pel[index_pelanggan].namat << ";" << brg[buy-1].nama_serum << ";" << banyak << ";" << brg[buy-1].harga_serum*banyak;
  cout << endl;
  msk.close();
  
  hps3();
  smt =   brg[buy-1].stok_serum - banyak ;
  brg[buy-1].stok_serum = smt;
  // cout << brg[buy-1].stk;
  // cout << endl;
  msk.open("serum.txt",ios::app);
  for (int i = 0; i < index; ++i){
      msk << brg[i].nama_serum << ";" << brg[i].jenis_serum << ";" <<  brg[i].stok_serum << ";" << brg[i].harga_serum;
     if(i == index-1){
       cout << " ";
     }else
      msk << endl;
    }
  msk.close();
//}
// mask.open("transaksi.txt",ios::app);
  
//       // msk << brg[i].namabrgm << ";" << brg[i].jenism << ";" <<  brg[i].stkm << ";" << brg[i].hargam;
//       // msk << endl;
//     mask << userc << ";" << passwordc << endl;
    
//   mask.close();
}

//fitur beli skin care
void barang :: databrng(){
  int index = 0;
  int idxx = 0 ;
  jkt.open("idx_ktp.txt");
  for (int i = 0; i < 1; i++){
    jkt >> index_pelanggan;
  }
jkt.close();
  
  jkt.open("pelanggan.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tokenizet(tt, ";", idxx);
		idxx++;
	}
	jkt.close();

 // cout << "cek " << pel[index_pelanggan].nikt;
	jkt.open("stock.txt");
	while(!jkt.eof()){
		jkt >> tt;
		tz(tt, ";", index);
		index++;
	}
	jkt.close();
  //cout << index << endl;
    for (int i = 0; i < index; ++i){
    cout << endl;
		cout << "=============================================\n";
    cout << "barang ke : " << i+1;
    cout << endl;
    cout << "Nama barang           : " << brg[i].namabrg;
    cout << endl;
		cout << "jenis barang          : " << brg[i].jenis;
    cout << endl;
    cout << "stok                  : " << brg[i].stk;
    cout << endl;
    cout << "harga barang          : " << brg[i].harga;
    cout << endl;
		cout << "=============================================\n";
    cout << endl;
    cout << endl;
	}
  
  cout << "silahkan pilih  : ";
  cin >> buy;
  cout << "berapa banyak   : ";
  cin >> banyak;
  cout << "=============================================\n";
  cout << endl;
  cout << "============struk pembelian barang===========" ;
  cout << endl;
  cout << "nama barang     : ";
  cout << brg[buy-1].namabrg;
  cout << endl;
  cout << "sebanyak        : " ;
  cout << banyak;
  cout << endl;
  cout << "total harga     : ";
  cout << brg[buy-1].harga*banyak;
  cout << endl;
  random[(banyak*2)/4]= rand();
  cout << "kode pembayaran : ";
  cout <<  pel[index_pelanggan].nikt << random[(banyak*2)/4];
  cout << endl;
  cout << "silahkan bayar menggunakan kode pembayaran yang tertera di atas ";
  cout << endl;
  cout << "               TERIMAKASIH              ";
  cout << endl;
  cout << "===========================================";
  cout << endl;
  cout << endl;
  // random = rand();x 

  msk.open("transaksi.txt",ios::app);
  // msk << endl;
  msk << pel[index_pelanggan].nikt << ";" << pel[index_pelanggan].namat << ";" << brg[buy-1].namabrg << ";" << banyak << ";" << brg[buy-1].harga*banyak;
  msk << endl;
  msk.close();
  //cout << index;
  hps();
  smt =   brg[buy-1].stk - banyak ;
  brg[buy-1].stk = smt;
  // cout << brg[buy-1].stk;
  // cout << endl;
  msk.open("stock.txt",ios::app);
  for (int i = 0; i < index; i++){
      msk << brg[i].namabrg << ";" << brg[i].jenis << ";" <<  brg[i].stk << ";" << brg[i].harga;
      if (i == index-1){
        cout << " ";
      }else
        msk << endl;
    }
  msk.close();
//}
// mask.open("transaksi.txt",ios::app);
  
//       // msk << brg[i].namabrgm << ";" << brg[i].jenism << ";" <<  brg[i].stkm << ";" << brg[i].hargam;
//       // msk << endl;
//     mask << userc << ";" << passwordc << endl;
    
//   mask.close();
}

//program di bawah untuk ambil data dari txt

//cat rambut
void barang :: toize1(string llll1, string dell1, int index){
  string tmp;
	int i = 1;
    int start, end = -1*dell1.size();
  
    do {
        start = end + dell1.size();
        end = llll1.find(dell1, start);
        tmp = llll1.substr(start, end - start);

        if (i == 1)
        {
        	brg[index].nama_cr = tmp;
        }
        else if (i == 2){
        	brg[index].jenis_cr = tmp;
        }
        
        else if (i == 3){
          brg[index].stok_cr = to(tmp);
        }
      else{
         brg[index].harga_cr = to(tmp);
      }
        i++;

    } while (end != -1);
}

//minyak rambut
void barang :: toize2(string llll2, string dell2, int index){
  string tmp;
	int i = 1;
    int start, end = -1*dell2.size();
  
    do {
        start = end + dell2.size();
        end = llll2.find(dell2, start);
        tmp = llll2.substr(start, end - start);

        if (i == 1)
        {
        	brg[index].nama_mr = tmp;
        }
        else if (i == 2){
        	brg[index].jenis_mr = tmp;
        }
        
        else if (i == 3){
          brg[index].stok_mr = to(tmp);
        }
      else{
         brg[index].harga_mr = to(tmp);
      }
        i++;

    } while (end != -1);
}

//lensa kontak
void barang :: toize3(string llll3, string dell3, int index){
  string tmp;
	int i = 1;
    int start, end = -1*dell3.size();
  
    do {
        start = end + dell3.size();
        end = llll3.find(dell3, start);
        tmp = llll3.substr(start, end - start);

        if (i == 1)
        {
        	brg[index].nama_lk = tmp;
        }
        else if (i == 2){
        	brg[index].jenis_lk = tmp;
        }
        
        else if (i == 3){
          brg[index].stok_lk = to(tmp);
        }
      else{
         brg[index].harga_lk = to(tmp);
      }
        i++;

    } while (end != -1);
}

//parfum
void barang :: toize4(string llll4, string dell4, int index){
  string tmp;
	int i = 1;
    int start, end = -1*dell4.size();
  
    do {
        start = end + dell4.size();
        end = llll4.find(dell4, start);
        tmp = llll4.substr(start, end - start);

        if (i == 1)
        {
        	brg[index].nama_parfum = tmp;
        }
        else if (i == 2){
        	brg[index].jenis_parfum = tmp;
        }
        
        else if (i == 3){
          brg[index].stok_parfum = to(tmp);
        }
      else{
         brg[index].harga_parfum = to(tmp);
      }
        i++;

    } while (end != -1);
}

//suplemen kulit
void barang :: toize5(string llll5, string dell5, int index){
  string tmp;
	int i = 1;
    int start, end = -1*dell5.size();
  
    do {
        start = end + dell5.size();
        end = llll5.find(dell5, start);
        tmp = llll5.substr(start, end - start);

        if (i == 1)
        {
        	brg[index].nama_sk = tmp;
        }
        else if (i == 2){
        	brg[index].jenis_sk = tmp;
        }
        
        else if (i == 3){
          brg[index].stok_sk = to(tmp);
        }
      else{
         brg[index].harga_sk = to(tmp);
      }
        i++;

    } while (end != -1);
}

//serum

void barang :: toize(string llll, string dell, int index){
  string tmp;
	int i = 1;
    int start, end = -1*dell.size();
  
    do {
        start = end + dell.size();
        end = llll.find(dell, start);
        tmp = llll.substr(start, end - start);

        if (i == 1)
        {
        	brg[index].nama_serum = tmp;
        }
        else if (i == 2){
        	brg[index].jenis_serum = tmp;
        }
        
        else if (i == 3){
          brg[index].stok_serum = to(tmp);
        }
      else{
         brg[index].harga_serum = to(tmp);
      }
        i++;

    } while (end != -1);
}
  
//ambil data dari make_up.txt
void barang :: ttzz(string l, string del = " ", int index = 0){
  
  string tmp;
	int i = 1;
    int start, end = -1*del.size();
  
    do {
        start = end + del.size();
        end = l.find(del, start);
        tmp = l.substr(start, end - start);

        if (i == 1)
        {
        	brg[index].namabrgm = tmp;
        }
        else if (i == 2){
        	brg[index].jenism = tmp;
        }
        
        else if (i == 3){
          brg[index].stkm = to(tmp);
        }
      else{
         brg[index].hargam = to(tmp);
      }
        i++;

    } while (end != -1);
}

//ambil data pelanggan
//untuk di tulis pada transaksi
void barang :: tokenizet(string llll, string dell = " ", int idxx = 0) {
  string tmp;
  int i = 1;
  int start, end = -1 * dell.size();

  do {
    start = end + dell.size();
    end = llll.find(dell, start);
    tmp = llll.substr(start, end - start);

    if (i == 1) {

      pel[idxx].nikt = tmp;
    } else if (i == 2) {

      pel[idxx].namat = tmp;
    } else if (i == 3) {

      pel[idxx].tempatt = tmp;
    } else if (i == 4) {

      pel[idxx].tlt = tmp;
    } else if (i == 5) {

      pel[idxx].jktt = tmp;
    } else if (i == 6) {

      pel[idxx].alamatt = tmp;
    } else {

      pel[idxx].agamat = tmp;
    }
    i++;

  } while (end != -1);
}

//ambil data obat
void barang :: tttzz(string l, string del = " ", int index = 0){
  
  string tmp;
	int i = 1;
    int start, end = -1*del.size();
  
    do {
        start = end + del.size();
        end = l.find(del, start);
        tmp = l.substr(start, end - start);

        if (i == 1)
        {
        	brg[index].namabrgo = tmp;
        }
        else if (i == 2){
        	brg[index].jeniso = tmp;
        }
        
        else if (i == 3){
          brg[index].stko = to(tmp);
        }
      else{
         brg[index].hargao = to(tmp);
      }
        i++;

    } while (end != -1);
}

void barang ::  tokenn(string li, string dl, int index = 0){
  
}

//ambil data dari skin care
void barang :: tz(string l, string del = " ", int index = 0){
  
  string tmp;
	int i = 1;
  int start, end = -1*del.size();
  
    do {
        start = end + del.size();
        end = l.find(del, start);
        tmp = l.substr(start, end - start);

        if (i == 1)
        {
          
        	brg[index].namabrg = tmp;
        }
        else if (i == 2){
          
        	brg[index].jenis = tmp;
        }
        
        else if (i == 3){
          
          brg[index].stk = to(tmp);
        }
      else{
        
        brg[index].harga = to(tmp);
      }
        i++;

    } while (end != -1);
}

//ambil data dari txt ke tipe data int
int barang :: to(string x){
	int y;

	stringstream ss;
	ss << x;
	ss >> y;

	return y;
}
#endif
