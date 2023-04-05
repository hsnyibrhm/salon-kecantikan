//104/ hasany
#include "admin.h"
#include "faq.h"
#include "ktp.h"


class lgn : public admiin{
    public:
       void login();
private:
    ifstream getdata;
};



void lgn :: login(){
  lagi:
  int pilih;
	string pw[100];
  string usr[100];
  int index = 0;
	string password;
  string user;
  char userc;
  char passwordc;
	getdata.open("admin.txt");
 // Node1 ll;
  KTP z;

	
	cout << "=============================================\n";
  cout << endl;
	cout << "=====selamat datang di salon kecantikan======";
  cout << endl;
  cout << endl;
	cout << "silahkan login : ";
  cout << endl;
	cout << "1. login sebagai admin  ";
  cout << endl;
	cout << "2. login sebagai pelanggan";
  cout << endl;
  cout << "3. bikin akun ";
  cout << endl;
  cout << "4. Frequently Asked Questions ";
  cout << endl;
 cout << "=============================================\n";
  cout << endl;
	cout << "silahkan masukan pilihan : "; 
  cin >> pilih; 
  getchar();
	
	switch(pilih){
		case 1:
      //int i = 0;
			while (!getdata.eof()){
        
				//for (int i = 0; i < 2; i++){
					getdata >> usr[index];
					getdata >> pw[index];
				//}
				
				index++;
			}
   //    cout << "\ndata yang di ambil\n";
			// cout << usr[0] <<endl;
			// cout << pw[0] << endl;
			// cout << usr[1] <<endl;
			// cout << pw[1] << endl;
      
			getdata.close();
      cout << "=============================================\n";
      cout << endl;
      cout << "==========Anda login sebagai admin===========";
      cout << endl;
      cout << endl;
			cout << "masukkan username : ";
			getline(cin,user);
			cout << "masukkan password : ";
      //cin.ignore();
			getline(cin,password);
      
      
			for(int j = 0; j < sizeof(usr); j++){
				if (user == usr[j]){
          if(password == pw[j]){
            admiin p;
            p.admin();
          }
          else {
            cout << endl;
            cout << "password salah!!";
            cout << endl;
            goto lagi;
          }
				}
				
			}
			break;
    case 2:
      
      z.ambil_login();
   
			break;
        case 3:
          z.input_ktp();
          login();
        break;

    case 4:
      quest xx;
      xx.pertanyaan();
    break;
		default:
			cout << "harap input angka sesuai yang ada di pilihan";
			login();
			break;
	}
}



//    cout << "============================================\n";
   //    cout << "=========Anda login sebagai customer=========\n";
   //    cout << "\nmasukkan username : ";
			// getline(cin,user);
			// cout << "masukkan password : ";
   //    //cin.ignore();
			// getline(cin,password);

   //    for(int l = 0; l < idx; l++){
   //      if (userc == nama[l]){
   //        if (passwordc == nik[l]){
   //          cout << "es";
   //          ll.layanan();
   //        }
   //      }
   //      else{
   //        cout << "\npassword salah\n";
   //      }
   //      goto lagi;
   //      }
      //   if (user == nama[l]){
      //     if(password == nik[l]){
      //       cout << "jgkjhgjdfg";
      //     }
      //     else {
      //       cout << "\npassword salah\n";
      //       goto lagi;
      //     }
      // }
      //   }
