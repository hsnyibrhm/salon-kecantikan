// 093_danial
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class booking_perawatan {
	public :
		void perawatan();
		void invoice_perawatan();

	private :
		string jenis_perawatan[6];
		int harga_perawatan[6];
		string nama_dokter[4];
		string waktu_booking[4];
		string tanggal_booking;
		int pil_perawatan, pil_dokter, pil_waktu;
};

void booking_perawatan :: perawatan(){
	jenis_perawatan[1] = "Facial";
	jenis_perawatan[2] = "Cemical_Peeling";
	jenis_perawatan[3] = "Laser";
	jenis_perawatan[4] = "Microneedling";
	jenis_perawatan[5] = "Totok Wajah";

	harga_perawatan[1] = 200000;
	harga_perawatan[2] = 500000;
	harga_perawatan[3] = 300000;
	harga_perawatan[4] = 2000000;
	harga_perawatan[5] = 100000;
	
	nama_dokter[1] = "Dokter_Faisal";
	nama_dokter[2] = "Dokter_Nur";
	nama_dokter[3] = "Dokter_Ali";
	
	waktu_booking[1] = "13.00";
	waktu_booking[2] = "15.00";
	waktu_booking[3] = "17.00";
	
	cout<<"SALON KECANTIKAN - BOOKING PERAWATAN"<<endl;
     cout << "=============================================\n";
    cout<<endl<<endl;
    cout<<"1. Facial - Rp 200.000"<<endl;
    cout<<"2. Chemical Peeling - Rp 500.000"<<endl;
    cout<<"3. Laser - Rp 300.000"<<endl;
    cout<<"4. Microneedling - Rp 2.000.000"<<endl;
    cout<<"5. Totok Wajah - Rp 100.000"<<endl<<endl;
    cout<<"Masukkan pilihan anda : ";
    cin>>pil_perawatan;
    
    cout << endl;
    
    cout << "Masukkan tanggal booking (DD-MM-YYYY) : ";
    cin >> tanggal_booking;

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
    
	cout<<endl;
  	cout<<"SALON KECANTIKAN - INVOICE BOOKING PERAWATAN"<<endl;
  	  cout << "=============================================\n";
  	cout<<endl<<endl;
  
  	cout<<"Jenis Perawatan   : ";
  	cout<<jenis_perawatan[pil_perawatan];
  	
  	cout<<endl;
  	
  	cout<<"Tanggal Perawatan : ";
 	cout<<tanggal_booking;
  
  	cout<<endl;
  
  	cout<<"Dokter  	  : ";
  	cout<<nama_dokter[pil_dokter];
  
  	cout<<endl;
  
  	cout<<"Waktu             : ";
  	cout<<waktu_booking[pil_waktu];

  	cout << endl;

  cout<<"Biaya    	  : Rp ";
  cout<<harga_perawatan[pil_perawatan];

  cout<<endl<<endl;
    cout << "=============================================\n";
  cout<<"TERIMA KASIH"<<endl;
    cout << "=============================================\n";
}

void booking_perawatan::invoice_perawatan(){
	
  ofstream invoice_perawatan("invoice_perawatan.txt", ios::app);
  invoice_perawatan<<"============================================="<<endl;
  invoice_perawatan<<"SALON KECANTIKAN - INVOICE BOOKING PERAWATAN"<<endl;
  invoice_perawatan<<"=============================================";
  invoice_perawatan<<endl<<endl;
  
  invoice_perawatan<<"Jenis Perawatan   : ";
  invoice_perawatan<<jenis_perawatan[pil_perawatan];
  
  invoice_perawatan<<endl;
  
  invoice_perawatan<<"Tanggal Perawatan : ";
  invoice_perawatan<<tanggal_booking;
  
  invoice_perawatan<<endl;
  
  invoice_perawatan<<"Dokter  	  : ";
  invoice_perawatan<<nama_dokter[pil_dokter];
  
  invoice_perawatan<<endl;
  
  invoice_perawatan<<"Waktu             : ";
  invoice_perawatan<<waktu_booking[pil_waktu];

  invoice_perawatan << endl;

  invoice_perawatan<<"Biaya    	  : Rp ";
  invoice_perawatan<<harga_perawatan[pil_perawatan];

  invoice_perawatan<<endl<<endl;
  invoice_perawatan<<"=============================================";
  invoice_perawatan<<endl;
  invoice_perawatan<<"		TERIMA KASIH"<<endl;
  invoice_perawatan<<"=============================================";
}