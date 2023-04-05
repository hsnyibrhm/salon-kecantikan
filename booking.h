#ifndef Node1_
#define Node1_
#include <iostream>
#include <fstream>


using namespace std;

struct Node
{
  string perawatan, nama_dokter, jam, produk, banyak_produk, konsultasi;
  Node* next;
  Node* prev;
};

Node* head;
Node* tail;
Node* print;
Node* insert;

class Node1{
public :
 //admiin bl;
  barang bl;



void inisialisasi(){
  head = NULL;
  tail = NULL;
}

int isEmpt()
{
	if(head == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void input(string perawatan, string nama_dokter, string jam, string produk, string banyak_produk, string konsultasi){
  insert = new Node;
  insert -> perawatan = perawatan;
  insert -> nama_dokter = nama_dokter;
  insert -> jam = jam;
  insert -> produk = produk;
  insert -> banyak_produk = banyak_produk;
  insert -> konsultasi = konsultasi;
  insert -> next = NULL;
  insert -> prev = NULL;
  if(isEmpt()==1)
	{
		head = insert;
		head->next = NULL;
		head->prev = NULL;
		tail = head;
  }
	else
	{
		tail->next = insert;
		insert->prev = tail;
		tail = insert;
	}  
}

void cetak_booking(){
  print = head;
			if(head!=NULL)
			{
				while(print!=NULL)
				{
					while(print!=NULL)
					{
			cout<<"INVOICE"<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"SALON KECANTIKAN - BOOKING PERAWATAN"<<endl;
            cout<<"-------------------------------";
            cout<<endl<<endl;
            cout<<"Jenis Perawatan   : "<<print -> perawatan<<endl;
            cout<<"Dokter  	      : "<<print -> nama_dokter<<endl;
            cout<<"Waktu             : "<<print -> jam<<endl;
            cout<<endl<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"TERIMA KASIH"<<endl;
            cout<<"-------------------------------"<<endl;
			print = print->next;
					}
				}
			}
			else
			{
				cout<<"DATA KOSONG"<<endl;
			}
}

void cetak_produk(){
    print = head;
			if(head!=NULL)
			{
				while(print!=NULL)
				{
					while(print!=NULL)
					{
			cout<<"INVOICE"<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"SALON KECANTIKAN - BELI PRODUK"<<endl;
            cout<<"-------------------------------";
            cout<<endl<<endl;
            cout<<"Nama Produk : "<<print -> produk<<endl;
            cout<<"Banyak Produk    : "<<print -> banyak_produk<<endl;
            cout<<endl<<endl;
            cout<<"-------------------------------";
            cout<<"TERIMA KASIH"<<endl;
            cout<<"-------------------------------";
						print = print->next;
					}
				}
			}
			else
			{
				cout<<"DATA KOSONG"<<endl;
			}
}

void cetak_konsultasi(){
    print = head;
			if(head!=NULL)
			{
				while(print!=NULL)
				{
					while(print!=NULL)
					{
			cout<<"INVOICE"<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"SALON KECANTIKAN - KONSULTASI"<<endl;
            cout<<"-------------------------------";
            cout<<endl<<endl;
            cout<<"Konsultasi : "<<endl<<print -> konsultasi;
            cout<<endl<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"TERIMA KASIH"<<endl;
            cout<<"-------------------------------";
			print = print->next;
					}
				}
			}
			else
			{
				cout<<"DATA KOSONG"<<endl;
			}
}

void layanan();
};

void Node1 :: layanan(){
  char pil_lay, ulang, invo;
  string perawatan, nama_dokter, jam, produk, banyak_produk, konsultasi;
  do
    {
      layan:
  cout<<"SALON KECANTIKAN"<<endl<<endl;
  cout<<"1. Booking Perawatan"<<endl;
  cout<<"2. Beli Produk"<<endl;
  cout<<"3. Konsultasi"<<endl;
  cout<<"4. Invoice"<<endl;
  cout<<"5. Cari"<<endl;
  cout<<"Masukkan pilihan anda : ";
  cin>>pil_lay;

  switch(pil_lay){
    case '1' :
      cout<<"SALON KECANTIKAN - BOOKING PERAWATAN"<<endl;
      cout<<"-------------------------------";
      cout<<endl<<endl;
      cout<<"1. Facial"<<endl;
      cout<<"2. Chemical Peeling"<<endl;
      cout<<"3. Laser"<<endl;
      cout<<"4. Microneedling"<<endl;
      cout<<"5. Totok Wajah"<<endl<<endl;
      cout<<"Masukkan pilihan anda : ";
      cin.ignore();
      getline(cin, perawatan);

      cout<<endl;

      cout<<"Daftar Dokter : "<<endl;
      cout<<"1. Dokter Faisal"<<endl;
      cout<<"2. Dokter Nur"<<endl;
      cout<<"3. Dokter Ali"<<endl;
      cout<<"Masukkan pilihan anda : ";
      getline(cin, nama_dokter);

      cout<<endl;

      cout<<"Daftar Waktu Booking : "<<endl;
      cout<<"1. 13.00"<<endl;
      cout<<"2. 15.00"<<endl;
      cout<<"3. 17.00"<<endl;
      cout<<"Masukkan pilihan anda : ";
      getline(cin, jam);
      
      input(perawatan, nama_dokter, jam, produk, banyak_produk, konsultasi);
      break;  

    case '2' :
      cout<<"SALON KECANTIKAN - BELI PRODUK"<<endl;
      cout<<"-------------------------------";
      cout<<endl<<endl;
      cout<<"1. Facial Wash"<<endl;
      cout<<"2. Toner"<<endl;
      cout<<"3. Serum"<<endl;
      cout<<"4. Mousterizer"<<endl;
      cout<<"5. Masker Wajah"<<endl<<endl;
      cout<<"Masukkan pilihan anda : ";
      cin.ignore();
      getline(cin, produk);
      cout<<"Berapa banyak : ";
      getline(cin, banyak_produk);
      input(perawatan, nama_dokter, jam, produk, banyak_produk, konsultasi);
     //bl.databrng();
      break;

    case '3' :
      cout<<"SALON KECANTIKAN - BELI PRODUK"<<endl;
      cout<<"-------------------------------";
      cout<<endl<<endl;
      cout<<"Konsultasi : "<<endl;
      cin.ignore();
      getline(cin, konsultasi);
      input(perawatan, nama_dokter, jam, produk, banyak_produk, konsultasi);
      break;

    case '4' :
      cout<<"SALON KECANTIKAN - INVOICE"<<endl;
      cout<<"-------------------------------";
      cout<<endl<<endl;
      cout<<"1. Booking Perawatan"<<endl;
      cout<<"2. Beli Produk"<<endl;
      cout<<"3. Konsultasi"<<endl;
      
      cout<<endl<<"Masukkan pilihan anda : ";
      cin>>invo;
      switch(invo)
        {
          case '1':
          return cetak_booking();
          case '2':
          return cetak_produk();
          case '3':
          return cetak_konsultasi();
          
          
        }
      break;

    // case '5' :
    //   cari();
  }
      cout<<"Kembali ke Menu Layanan? (Y | N) : ";
      cin>>ulang;
    }
    while(ulang == 'y' || ulang=='Y');
}

#endif

// #include <iostream>
// using namespace std;
class layanan{
  public :
    void booking1();
    void invoice_booking();
  private :
    string perawatan[100];
  int harga_perawatan[100];
	string nama_dokter[100]; 
	string waktu[100];
	int pil_perawatan;
	int pil_dokter;
	int pil_waktu;
};

void layanan::booking1(){
	perawatan[1] = "Facial";
	perawatan[2] = "Cemical Peeling";
	perawatan[3] = "Laser";
	perawatan[4] = "Microneedling";
	perawatan[5] = "Totok Wajah";

  harga_perawatan[1] = 200000;
  harga_perawatan[2] = 500000;
  harga_perawatan[3] = 300000;
  harga_perawatan[4] = 2000000;
  harga_perawatan[5] = 100000;
	
	nama_dokter[1] = "Dokter Faisal";
	nama_dokter[2] = "Dokter Nur";
	nama_dokter[3] = "Dokter Ali";
	
	waktu[1] = "13.00";
	waktu[2] = "15.00";
	waktu[3] = "17.00";
	
	
  cout<<"SALON KECANTIKAN - BOOKING PERAWATAN"<<endl;
      cout<<"-------------------------------";
      cout<<endl<<endl;
      cout<<"1. Facial - Rp 200.000"<<endl;
      cout<<"2. Chemical Peeling - Rp 500.000"<<endl;
      cout<<"3. Laser - Rp 300.000"<<endl;
      cout<<"4. Microneedling - Rp 2.000.000"<<endl;
      cout<<"5. Totok Wajah - Rp 100.000"<<endl<<endl;
      cout<<"Masukkan pilihan anda : ";
      cin>>pil_perawatan;

      cout<<endl;

      cout<<"Daftar Dokter : "<<endl;
      cout<<"1. Dokter Faisal"<<endl;
      cout<<"2. Dokter Nur"<<endl;
      cout<<"3. Dokter Ali"<<endl;
      cout<<"Masukkan pilihan anda : ";
      cin>>pil_dokter;

      cout<<endl;

      cout<<"Daftar Waktu Booking : "<<endl;
      cout<<"1. 13.00"<<endl;
      cout<<"2. 15.00"<<endl;
      cout<<"3. 17.00"<<endl;
      cout<<"Masukkan pilihan anda : ";
      cin>>pil_waktu;
}

void layanan::invoice_booking(){
	
  cout<<endl;
  cout<<"SALON KECANTIKAN - INVOICE BOOKING PERAWATAN"<<endl;
  cout<<"-------------------------------";
  cout<<endl<<endl;
  
  cout<<"Jenis Perawatan   : ";
  cout<<perawatan[pil_perawatan];
  
  cout<<endl;
  
  cout<<"Dokter  	  : ";
  cout<<nama_dokter[pil_dokter];
  
  cout<<endl;
  
  cout<<"Waktu             : ";
  cout<<waktu[pil_waktu];

  cout << endl;

  cout<<"Biaya    : Rp ";
  cout<<harga_perawatan[pil_perawatan];

  cout<<endl<<endl;
  cout<<"-------------------------------";
  cout<<endl;
  cout<<"TERIMA KASIH"<<endl;
  cout<<"-------------------------------";
}

// int main(){
// 	layanan x;
// 	x.booking1();
// 	x.invoice_booking();
// }

// #include <iostream>
// #include <fstream>
// #include <conio.h>
// using namespace std;

class testimoni{
	public :
		void testi_skincare();
		void testi_makeup();
		void testi_perawatan();
	private :
		int nilai;
		string saran;
		string layanan_dokter;
};

void testimoni :: testi_skincare(){
	cout << "==============================";
	cout << endl;
	cout << "TERIMA KASIH TELAH MEMBELI";
	cout << endl;
	cout << "==============================";
	cout << endl;
	cout << "Seberapa puas anda dengan layanan penjualan skincare kami ?";
	cout << endl;
	cin >> nilai;
	
	cout << "Masukkan saran untuk kami : ";
	cout << endl;
	cin >> saran;
	
	cout << "==============================";
	cout << endl;
	cout << "TERIMA KASIH ATAS MASUKANNYA";
	cout<< endl;
	cout << "==============================";
	
	ofstream testi("testimoni.txt", ios::out);
	testi<<"Nilai : "<<nilai;
	testi<<";Saran : "<<saran;
}

void testimoni :: testi_makeup(){
	cout << "==============================";
	cout << endl;
	cout << "TERIMA KASIH TELAH MEMBELI";
	cout << endl;
	cout << "==============================";
	cout << endl;
	cout << "Seberapa puas anda dengan layanan penjualan make up kami ?";
	cout << endl;
	cin >> nilai;
	
	cout << "Masukkan saran untuk kami : ";
	cout << endl;
	cin >> saran;
	
	cout << "==============================";
	cout << endl;
	cout << "TERIMA KASIH ATAS MASUKANNYA";
	cout<< endl;
	cout << "==============================";
	
	ofstream testi("testimoni.txt", ios::out);
	testi<<"Nilai : "<<nilai;
	testi<<";Saran : "<<saran;
}

void testimoni :: testi_perawatan(){
	cout << "==============================";
	cout << endl;
	cout << "TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI";
	cout << endl;
	cout << "==============================";
	cout << endl;
	cout << "Seberapa puas anda dengan layanan perawatan kami ?";
	cout << endl;
	cin >> nilai;
	cout<< "Apakah Dokter melayani dengan baik?";
  cout << endl;
	cin >> layanan_dokter;
	
	cout << "Masukkan saran untuk kami : ";
	cout << endl;
	cin >> saran;
	
	cout << "==============================";
	cout << endl;
	cout << "TERIMA KASIH ATAS MASUKANNYA";
	cout<< endl;
	cout << "==============================";
	
	ofstream testi("testimoni.txt", ios::out);
	testi<<"Nilai : "<<nilai;
	testi<<";Pelayanan Dokter : "<<layanan_dokter;
	testi<<";Saran : "<<saran;
}

// int main(){
// 	layanan x;
// 	x.booking1();
// 	x.invoice_booking();
// }

//faq

#include <iostream>
using namespace std;
class quest {
public:
  faq();

private:
  int pil, pilih;
};

quest::faq() {
  do {
    cout << "	====================================" << endl;
    cout << "		SELAMAT DATANG        " << endl;
    cout << "		DI FORUM FAQ          " << endl;
    cout << "		SALON KECANTIKAN      " << endl;
    cout << "	====================================\n" << endl;
    cout << "\tPertanyaaan yang tersedia : \n";
    cout << endl;
    cout << "1. Apa sabun muka yang cocok? \n";
    cout << "2. Apa saja jenis perawatan yang ada dalam salon kecantikan?\n";
    cout << "3. Bagaimana cara booking perawatan di salon kecantikan?\n";
    cout << "4. Apakah obat yang disediakan di klinik kecantikan sudah BPOM?\n";
    cout << "5. Apakah obat yang disediakan oleh salon kecantikan pasti dapat menyembuhkan jerawat? \n";
    cout << "6. Saya sedang dalam kondisi berjerawat di bagian wajah, apakah saya boleh melakukan perawatan?\n";
    cout << "7. Apakah konsultasi di salon kecantikan berbayar?\n";
    cout << "8. Berapa biaya perawatan di salon kecantikan??\n";
    cout << "9. Apakah tedapat member di salon kecantikan?\n";
    cout << "10. Dari jam berapa hingga jam berapa salon kecantikan dapat melakukan perawatan?\n";
    cout << "11. Apakah semua dokter yang berada di salon kecantikan sudah bersertifikat?\n";
    cout << "12. Apakah website resmi dari salon kecantikan ini?\n";
    cout << "13. Di mana lokasi dari salon kecantikan ini?\n";
    cout << "14. Lokasi salon kecantikan ini?\n";
    cout << "15. Apakah harus melakukan booking sebelum melakukan perawatan?\n";
    cout << "16. Apakah produk kosmetik di salon kecantikan sudah BPOM?\n";
    cout << "17. Apakah produk kosmetik di salon kecantikan sudah terdaftar halal MUI?\n";
    cout << "18. Adakah Biaya yang dikenakan apabila melakukan konsultasi?\n";
    cout << "19. Bagaimana saya dapat melihat testimoni perawatan di salon kecantikan ini?\n";
    cout << "20. Adakah perawatan di salon kecantikan ini yang bisa mengencangkan kulit wajah?\n";
    cout << "21. Apakah produk kosmetik dapat menyebabkan jerawat dan komedo?\n";
    cout << "22. Bagaimana cara mendapatkan akun?\n";
    cout << "23. Apakah saya dapat meminta bantuan customer service untuk membuat akun?\n";
    cout << "24. Apabila saya lupa password apa yang harus saya lakukan??\n";
    cout << "25. Apakah saya bisa melkaukan pendaftaran akun sendiri?\n";
    cout << "26. Berapa kisaran harga produk kosmetik?\n";
    cout << "27. Berapa kisaran harga"
			"  untuk perawatan?\n";
    cout << "28. Apakah konsultasi dipungut biaya?\n";
    cout << "29. Metode pembayaran apa saja yang disediakan?\n";
    cout << "30. Apakah salon kecantikan ini sudah bersertifikat? \n";
    cout << "\t-----------------------------------" << endl;
    cout << "\t Masukkan Pilihan Anda : ";
    cin >> pil;
    if (pil == 1) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apa sabun muka yang cocok? \n";
      cout << "\n\tJawaban : \n \n";
      cout << "Sabun cuci muka bisa dikatakan cocok apabila : \n"
	  			"1. Tidak menimbulkan iritasi. \n"
				"2. Bebas kilap. \n"
				"3. Tidak membuat muka menjadi kusam. \n"
				"4. Tidak mudah berjerawat. \n"
				"5. Kulit wajah tidak terasa kencang.\n";
    } 
      
    else if (pil == 2) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apa saja jenis perawatan yang ada dalam salon kecantikan?\n";
      cout << "\n\tJawaban : \n \n";
      cout << 	"1. Chemicalpeeling\n"
	  			"2. Microneedling\n"
	  			"3. Facial\n"
	  			"4. Totok Wajah\n"
				"5. Laser\n";
    }
      
    else if (pil == 3) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Bagaimana cara booking perawatan di salon kecantikan?\n";
      cout << "\n\tJawaban : \n \n";
      cout << "Cara booking perawatan di salon kecantikan : \n"
	  "1. Login akun sebagai pelanggan \n"
	  "2. Masuk ke menu booking \n"
	  "3. Pilih Jenis perawatan, nama dokter, dan waktu perawatan\n";
      
    }
      
    else if (pil == 4) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah obat yang disediakan di klinik kecantikan sudah BPOM?\n";
      cout << "\n\tJawaban : \n \n";
      cout << "Produk kami sudah teruji di laboratorium dan produk kami sudah terdaftar dalam BPOM dan bisa dilihat dalam"
	  			"https://cekbpom.pom.go.id/";
    }
      
    else if (pil == 5) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah obat yang disediakan oleh salon kecantikan pasti dapat menyembuhkan jerawat? \n";
      cout << "\n\tJawaban : \n \n";
      cout << "Pengobatan jerawat memang terkadang membutuhkan waktu yang "
      			"cukup lama untuk dapat menghasilkan"
				  " respon positif, yaitu sekitar 2-6 minggu."
	  			"Untuk itu, sebaiknya gunakanlah obat jerawat Anda untuk "
	  			"jangka waktu 1 bulan sebelum memutuskan untuk menghentikan pengobatan tersebut.";
    }
      
    else if (pil == 6) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Saya sedang dalam kondisi berjerawat di "
	  "bagian wajah, apakah saya boleh melakukan perawatan?\n";
      cout << "\n\tJawaban : \n \n";
      cout << "Perawatan untuk kulit berjerawat boleh saja,"
	  " tapi tidak semua jenis jerawat bisa dilakukan facial."
	  "Bagi kamu yang memiliki jerawat ringan dan tidak menyakitkan, "
	  "serta komedo hitam atau putih, bisa mendapatkan facial jerawat.\n"
	  "Sebaliknya, kamu yang memiliki jerawat besar, bernanah, dan menyakitkan, sebaiknya tidak perawatan.";
    }
      
    else if (pil == 7) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah konsultasi di salon kecantikan berbayar?";
      cout << "\n\tJawaban : \n \n";
      cout << "Umumnya mereka mematok tarif jasa pelayanan pemeriksaan kulit wajah mulai dari Rp 100.000 hingga Rp 350.000."
	  "Besaran biaya tersebut belum termasuk pembelian obat-obatan"
	  " atau serum apabila memang dokter kulit wajah meresepkannya.";
    }
      
    else if (pil == 8) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Berapa biaya perawatan di salon kecantikan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Harga Perawatan :\n "
	  			"1. Chemicalpeeling - Rp 200.000\n"
	  			"2. Microneedling - Rp 500.000\n"
	  			"3. Facial - Rp 300.000\n"
	  			"4. Totok Wajah - Rp 2.000.000\n"
				"5. Laser - Rp 100.000 \n";
    }
      
    else if (pil == 9) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah tedapat member di salon kecantikan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk saat ini belum tersedia."
	  			"Mungkin untuk kedepannya"
				" akan tersedia";
    }
      
    else if (pil == 10) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Dari jam berapa hingga jam berapa salon kecantikan dapat melakukan perawatan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Jam perawatan :\n"
	  "1. 13.00\n"
	  "2. 15.00\n"
	  "3. 17.00\n";
    }
      
    else if (pil == 11) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah semua dokter yang berada di salon kecantikan sudah bersertifikat?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk saat ini semua dokter yang ada dalam"
	  " salon kecantikan sudah bersertifikasi oleh badan resmi "
	  " dan sudah menjadi bagian dari kedokteran Indonesia.";
    }
      
    else if (pil == 12) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah website resmi dari salon kecantikan ini?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk website resmi dari salon kecantikan ini"
	  " wwww. salonkecantikan-cantik.com";
    }
      
    else if (pil == 13) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Di mana lokasi dari salon kecantikan ini?";
      cout << "\n\tJawaban : \n \n";
      cout << "Beralamatkan di Jl. Sisingamangaraja No.60, Brontokusuman, "
	  "Kec. Mergangsan, Kota Yogyakarta, Daerah Istimewa Yogyakarta 55153";
    }
      
    else if (pil == 14) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Lokasi salon kecantikan ini?";
      cout << "\n\tJawaban : \n \n";
      cout << "Beralamatkan di Jl. Sisingamangaraja No.60, Brontokusuman, "
	  "Kec. Mergangsan, Kota Yogyakarta, Daerah Istimewa Yogyakarta 55153";
    }
      
    else if (pil == 15) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah harus melakukan booking sebelum melakukan perawatan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk melakukan perawatan diperlukan booking terlebih dahulu";
    }
      
    else if (pil == 16) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah produk kosmetik di salon kecantikan sudah BPOM?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk produk kosmetik yangkami tawarkan sudah teruji di lab, dan terdaftar di BPOM";
    }
      
    else if (pil == 17) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah produk kosmetik di salon kecantikan sudah terdaftar halal MUI?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk produk kosmetik yangkami tawarkan sudah teruji di lab, dan terdaftar halal di MUI";
    }
      
    else if (pil == 18) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Adakah Biaya yang dikenakan apabila melakukan konsultasi?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk konsultasi terdapat biaya yang harus dibayarkan,"
	  " khususnya apabila konsultasi yang memerlukan penanganan secara langsung";
    }
      
    else if(pil == 19)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Bagaimana saya dapat melihat testimoni perawatan di salon kecantikan ini?";
      cout << "\n\tJawaban : \n \n";
      cout << "";
    }
      
    else if(pil == 20)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Adakah perawatan di salon kecantikan ini yang bisa mengencangkan kulit wajah?";
      cout << "\n\tJawaban : \n \n";
      cout << "";
    }
      
    else if(pil == 21)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah produk kosmetik dapat menyebabkan jerawat dan komedo?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk jerawat kecil boleh untuk ditutpi dengan menggunakan kosmetik,"
	  " tetapi jika jerawat radang maka sebaiknya menggunakan produk obat yang tepat terlebih "
	  "dahulu dan jangan menggunakan kosmetik untuk menutupinya agar segera sembuh.";
    }
      
    else if(pil == 22)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Bagaimana cara mendapatkan akun?";
      cout << "\n\tJawaban : \n \n";
      cout << "Menggunakan data yang terdapat dalam KTP untuk mendaftar";
    }
      
    else if(pil == 23)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah saya dapat meminta bantuan customer service untuk membuat akun?";
      cout << "\n\tJawaban : \n \n";
      cout << "Bisa, pelanggan hanya diminta untuk menyerahkan KTP pada bagian layanan untuk didaftarkan akun";
    }
      
    else if(pil == 24)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apabila saya lupa password apa yang harus saya lakukan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Pelanggan diminta untuk memberi tahu kepada bagian layanan agar diproses, "
	  "kemudian pelanggan diminta untuk ememinjamkan KTP agar dapat diverifikasi lebih lanjut "
	  "dan password baru bisa pelanggan dapatkan.";
    }
      
    else if(pil == 25)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah saya bisa melkaukan pendaftaran akun sendiri?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk pengaksesan daftar akun saat ini hanya bisa dilakukan oleh pihak salon kecantikan";
    }
      
    else if(pil == 26)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Berapa kisaran harga produk kosmetik?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk produk kosmetik yang kami tawarkan berkisar mulai dari harga Rp 30.000 hingga Rp 200.000";
    }
      
    else if(pil == 27)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Berapa kisaran harga untuk perawatan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk perawatan pada salon kami harga berkisar dari Rp 100.000 hingga Rp 1000.000";
    }
      
    else if(pil == 28)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah konsultasi dipungut biaya?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk konsultasi terdapat biaya yang harus dibayarkan,"
	  " khususnya apabila konsultasi yang memerlukan penanganan secara langsung";
    }
      
    else if(pil == 29)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Metode pembayaran apa saja yang disediakan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk pembayaran, kami hanya menerima cash";
    }
      
    else if(pil == 30)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah salon kecantikan ini sudah bersertifikat?";
      cout << "\n\tJawaban : \n \n";
      cout << "Salon kecantikan kami sudah terdaftar resmi dan bersertifikat, "
	  "mulai dari dokter dan produk yang kami tawarkan semuanya sudah bersertifikat";
    }
      
    else 
    {
      cout << "Maaf Pilihan Anda salah \n";
    }


    cout << "\n\nKembali ke pertanyaan (1) \nKeluar(0) : ";
    cin >> pilih;
  } while (pilih != 0);
}


