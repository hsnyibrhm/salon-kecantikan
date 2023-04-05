#include <iostream>
using namespace std;
class quest {
public:
  void pertanyaan();

private:
  int pilih_faq, pilih_ulang;
};

void quest::pertanyaan() {
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
    cout << "14. Apakah saya boleh menyuci wajah tanpa menggunakan sabun batang?\n";
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
    cin >> pilih_faq;
    if (pilih_faq == 1) 
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
      
    else if (pilih_faq == 2) 
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
      
    else if (pilih_faq == 3) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Bagaimana cara booking perawatan di salon kecantikan?\n";
      cout << "\n\tJawaban : \n \n";
      cout << "Cara booking perawatan di salon kecantikan : \n"
	  "1. Login akun sebagai pelanggan \n"
	  "2. Masuk ke menu booking \n"
	  "3. Pilih Jenis perawatan, nama dokter, dan waktu perawatan\n";
      
    }
      
    else if (pilih_faq == 4) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah obat yang disediakan di klinik kecantikan sudah BPOM?\n";
      cout << "\n\tJawaban : \n \n";
      cout << "Produk kami sudah teruji di laboratorium dan produk kami sudah terdaftar dalam BPOM dan bisa dilihat dalam"
	  			"https://cekbpom.pom.go.id/";
    }
      
    else if (pilih_faq == 5) 
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
      
    else if (pilih_faq == 6) 
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
      
    else if (pilih_faq == 7) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah konsultasi di salon kecantikan berbayar?";
      cout << "\n\tJawaban : \n \n";
      cout << "Umumnya mereka mematok tarif jasa pelayanan pemeriksaan kulit wajah mulai dari Rp 100.000 hingga Rp 350.000."
	  "Besaran biaya tersebut belum termasuk pembelian obat-obatan"
	  " atau serum apabila memang dokter kulit wajah meresepkannya.";
    }
      
    else if (pilih_faq == 8) 
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
      
    else if (pilih_faq == 9) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah tedapat member di salon kecantikan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk saat ini belum tersedia."
	  			"Mungkin untuk kedepannya"
				" akan tersedia";
    }
      
    else if (pilih_faq == 10) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Dari jam berapa hingga jam berapa salon kecantikan dapat melakukan perawatan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Jam perawatan :\n"
	  "1. 13.00\n"
	  "2. 15.00\n"
	  "3. 17.00\n";
    }
      
    else if (pilih_faq == 11) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah semua dokter yang berada di salon kecantikan sudah bersertifikat?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk saat ini semua dokter yang ada dalam"
	  " salon kecantikan sudah bersertifikasi oleh badan resmi "
	  " dan sudah menjadi bagian dari kedokteran Indonesia.";
    }
      
    else if (pilih_faq == 12) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah website resmi dari salon kecantikan ini?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk website resmi dari salon kecantikan ini"
	  " wwww. salonkecantikan-cantik.com";
    }
      
    else if (pilih_faq == 13) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Di mana lokasi dari salon kecantikan ini?";
      cout << "\n\tJawaban : \n \n";
      cout << "Beralamatkan di Jl. Sisingamangaraja No.60, Brontokusuman, "
	  "Kec. Mergangsan, Kota Yogyakarta, Daerah Istimewa Yogyakarta 55153";
    }
      
    else if (pilih_faq == 14) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah saya boleh menyuci wajah tanpa menggunakan sabun batang?";
      cout << "\n\tJawaban : \n \n";
      cout << "Namun, perlu diingat bahwa tidak semua sabun batang dibuat dengan cara yang sama."
        " Terdiri dari apa sabun tersebut, membuat perbedaan besar, jadi memahami perbedaan ini akan membantumu memilih produk yang tepat untuk kulitmu.\n"
        " Para ahli merekomendasikan produk pembersih kulit jenis cair, daripada sabun batang, "
        "karena memang diformulasikan secara khusus untuk membersihkan kulit wajah, sambil menjaga"
        " fungsi penghalangnya. Apakah kamu juga masih menggunakan sabun batang untuk mencuci muka?";
    }
      
    else if (pilih_faq == 15) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah harus melakukan booking sebelum melakukan perawatan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk melakukan perawatan diperlukan booking terlebih dahulu";
    }
      
    else if (pilih_faq == 16) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah produk kosmetik di salon kecantikan sudah BPOM?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk produk kosmetik yangkami tawarkan sudah teruji di lab, dan terdaftar di BPOM";
    }
      
    else if (pilih_faq == 17) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah produk kosmetik di salon kecantikan sudah terdaftar halal MUI?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk produk kosmetik yangkami tawarkan sudah teruji di lab, dan terdaftar halal di MUI";
    }
      
    else if (pilih_faq == 18) 
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Adakah Biaya yang dikenakan apabila melakukan konsultasi?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk konsultasi terdapat biaya yang harus dibayarkan,"
	  " khususnya apabila konsultasi yang memerlukan penanganan secara langsung";
    }
      
    else if(pilih_faq == 19)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Bagaimana saya dapat melihat testimoni perawatan di salon kecantikan ini?";
      cout << "\n\tJawaban : \n \n";
      cout << "";
    }
      
    else if(pilih_faq == 20)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Adakah perawatan di salon kecantikan ini yang bisa mengencangkan kulit wajah?";
      cout << "\n\tJawaban : \n \n";
      cout << "";
    }
      
    else if(pilih_faq == 21)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah produk kosmetik dapat menyebabkan jerawat dan komedo?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk jerawat kecil boleh untuk ditutpi dengan menggunakan kosmetik,"
	  " tetapi jika jerawat radang maka sebaiknya menggunakan produk obat yang tepat terlebih "
	  "dahulu dan jangan menggunakan kosmetik untuk menutupinya agar segera sembuh.";
    }
      
    else if(pilih_faq == 22)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Bagaimana cara mendapatkan akun?";
      cout << "\n\tJawaban : \n \n";
      cout << "Menggunakan data yang terdapat dalam KTP untuk mendaftar";
    }
      
    else if(pilih_faq == 23)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah saya dapat meminta bantuan customer service untuk membuat akun?";
      cout << "\n\tJawaban : \n \n";
      cout << "Bisa, pelanggan hanya diminta untuk menyerahkan KTP pada bagian layanan untuk didaftarkan akun";
    }
      
    else if(pilih_faq == 24)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apabila saya lupa password apa yang harus saya lakukan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Pelanggan diminta untuk memberi tahu kepada bagian layanan agar diproses, "
	  "kemudian pelanggan diminta untuk ememinjamkan KTP agar dapat diverifikasi lebih lanjut "
	  "dan password baru bisa pelanggan dapatkan.";
    }
      
    else if(pilih_faq == 25)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah saya bisa melkaukan pendaftaran akun sendiri?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk pengaksesan daftar akun saat ini hanya bisa dilakukan oleh pihak salon kecantikan";
    }
      
    else if(pilih_faq == 26)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Berapa kisaran harga produk kosmetik?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk produk kosmetik yang kami tawarkan berkisar mulai dari harga Rp 30.000 hingga Rp 200.000";
    }
      
    else if(pilih_faq == 27)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Berapa kisaran harga untuk perawatan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk perawatan pada salon kami harga berkisar dari Rp 100.000 hingga Rp 1000.000";
    }
      
    else if(pilih_faq == 28)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Apakah konsultasi dipungut biaya?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk konsultasi terdapat biaya yang harus dibayarkan,"
	  " khususnya apabila konsultasi yang memerlukan penanganan secara langsung";
    }
      
    else if(pilih_faq == 29)
    {
      cout << "\n\tPertanyaan : \n\n";
      cout << "Metode pembayaran apa saja yang disediakan?";
      cout << "\n\tJawaban : \n \n";
      cout << "Untuk pembayaran, kami hanya menerima cash";
    }
      
    else if(pilih_faq == 30)
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
    cin >> pilih_ulang;
  } while (pilih_ulang != 0);
}