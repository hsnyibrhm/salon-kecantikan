//104/ hasany2

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
//#include "ktp.h"
using namespace std;

struct node{
  int niktb;
  string namatb;
  string namabt;
  int jmlbt;
  int hrgbt;
  node* next;
 	node* prev;
};
node* head;
node* akhir;
node* cekData;
node* insert;
node* delt;

class queue{
public:
  
	void inis();
  int isEmpty();
  void print();
  void masuk(int niktb, string namatb, string namabt, int jmlbt, int hrgbt);
  void dequeue();
  int keint(string xx);
  void ambildt(string li, string dl, int lkk);
  void m();
  void hpst();
  void enter();

private:
  ifstream ambil;
  ofstream ketxt;
  int nikam;
  int snik;
  string namaam;
  string snamaam;
  string gg;
  string namabam;
  string snamabam;
  int jmlbam;
  int sjmlbam;
  int hrgbam;
  int shrgbam;
  int pilih1;
  int banyak;
int g;
  int ini;


};
queue tb[100];

void queue :: hpst(){
  ketxt.open("transaksi.txt", std::ofstream::out | std::ofstream::trunc);
  ketxt.close();
}

void queue :: masuk(int niktb, string namatb, string namabt, int jmlbt, int hrgbt){
  	insert = new node(); //alokasi memori/ membuat objek
 	insert -> niktb = niktb;
 	insert ->namatb = namatb;
 	insert -> namabt = namabt;
 	insert -> jmlbt = jmlbt;
 	insert -> hrgbt = hrgbt;
 	
 	insert -> next = NULL;
 	insert -> prev = NULL;
 	if(isEmpty()==1){
 		head = insert;
 		head -> next = NULL;
 		head -> prev = NULL;
 		akhir = head;
 	}else{
 		akhir -> next = insert;
 	insert -> prev = akhir;
 	akhir = insert;
 	}
}

void queue :: print(){
 int i = 1;
 	cekData = head;
 	if(head == NULL){
    cout << endl;
    cout << "tidak ada data dalam linked list";
    cout << endl;
  }
 		
 	else{

 		while(cekData != NULL){
      cout << endl;
      cout << "=============================================\n";
      cout << endl;
			cout << "No.           : " << i ;
      cout << endl;
			cout << "nik           : " << cekData -> niktb;
      cout << endl;
      cout << "nama          : " << cekData -> namatb;
      cout << endl;
      cout << "nama barang   : " << cekData -> namabt;
      cout << endl;
      cout << "jumlah barang : " << cekData -> jmlbt;
      cout << endl;
      cout << "total harga   : " << cekData -> hrgbt;
      cout << endl;
      cout << "=============================================\n";
      cout << endl;
      i++;
			
 			cekData = cekData -> next;
 			if(cekData != NULL){
 				cout << endl;
 			}
 			
 		}
 	}
}

void queue :: dequeue(){
   	int hapus, nik;
 	if(head == NULL){
 		cout << "\nData kosong, pengemasan tidak dapat dilakukan" << endl; 
 	}
  else{
    
 		hapus = head -> niktb;
 		delt = head;
 		head = head->next;
 		delete delt;
cout << g << endl;
     //cout << banyak;
  cout << "=============================================\n";
  cout << "nik : " << tb[g].nikam;
  cout << endl;
  cout << "nama : " << tb[g].namaam;
  cout << endl;
  cout << "nama barang :" << tb[g].namabam; 
  cout << endl;
  cout << "jumla barang : " << tb[g].jmlbam;
  cout << endl;
  cout << "total harga :" << tb[g].hrgbam;
  cout <<"\n===========================================\n";
  hpst();
   
    ketxt.open("transaksi.txt",ios :: app);
    for (int hp = g+1; hp < banyak;hp++){
      ketxt << tb[hp].nikam << ";" << tb[hp].namaam << ";" << tb[hp].namabam << ";" << tb[hp].jmlbam << ";" << tb[hp].hrgbam;
      ketxt << endl;
      }
       ketxt.close();
  
      
 		cout << "silahkan kemas barangnya" << endl;
    g++;
    }
  // hpst();
 
    }
  

/*void queue :: enter(){
  ini = 0;
  ambil.open("transaksi.txt");
  while(!ambil.eof()){
		ambil >> gg;
		ambildt(gg, ";", ini);
		ini++;
	}
  ambil.close();
}*/

void queue :: m(){
   kesini:
 //  ini = 0;
 //  ambil.open("transaksi.txt");
 //  while(!ambil.eof()){
	// 	ambil >> gg;
	// 	ambildt(gg, ";", ini);
	// 	ini++;
	// }
 //  ambil.close();

 //   //enter();
 //  cout << "cek";
   
 //  for(int i = 0; i < ini; i++){
 //    snik = tb[i].nikam;
 //    snamaam = tb[i].namaam;
 //    snamabam = tb[i].namabam;
 //    sjmlbam = tb[i].jmlbam;
 //    shrgbam = tb[i].hrgbam;
 //    masuk(snik, snamaam, snamabam, sjmlbam, shrgbam );
 //  }
      ini = 0;
  g = 0;
  ambil.open("transaksi.txt");
  while(!ambil.eof()){
		ambil >> gg;
		ambildt(gg, ";", ini);
		ini++;
	}
  ambil.close();
        banyak = ini;

   //enter();
 // cout << "cek";
   
  for(int i = 0; i < ini; i++){
    snik = tb[i].nikam;
    snamaam = tb[i].namaam;
    snamabam = tb[i].namabam;
    sjmlbam = tb[i].jmlbam;
    shrgbam = tb[i].hrgbam;
    masuk(snik, snamaam, snamabam, sjmlbam, shrgbam );
  }
  do{
    cout << "=============================================\n";
    
    cout << "1. Tampilin data transaksi ";
    cout << endl;
    cout << "2. lakukan pengemasan barang ";
    cout << endl;
    cout << "3. exit";
    cout << endl;
    cout << "=============================================\n";
    cout << "masukkan pilihan anda ! : ";
    cin >> pilih1;
    cout << endl;
    
    switch(pilih1){
      case 1 :
 //         ini = 0;
 //  ambil.open("transaksi.txt");
 //  while(!ambil.eof()){
	// 	ambil >> gg;
	// 	ambildt(gg, ";", ini);
	// 	ini++;
	// }
 //  ambil.close();
 //        banyak = ini;

 //   //enter();
 //  cout << "cek";
   
 //  for(int i = 0; i < ini; i++){
 //    snik = tb[i].nikam;
 //    snamaam = tb[i].namaam;
 //    snamabam = tb[i].namabam;
 //    sjmlbam = tb[i].jmlbam;
 //    shrgbam = tb[i].hrgbam;
 //    masuk(snik, snamaam, snamabam, sjmlbam, shrgbam );
 //  }
        print();
      break;
      case 2 :

       
        dequeue();
      break;
      case 3 :
 				//exit(0);
 			break;
 			default :
        cout << endl;
 				cout << "\nPilihan tidak tersedia";
        cout << endl;
        goto kesini;
      
    }
  }while(pilih1!=4);
  
}



void queue :: ambildt(string li, string dl, int index = 0){
    string tmp;
	int i = 1;
    int start, end = -1*dl.size();
  
    do {
        start = end + dl.size();
        end = li.find(dl, start);
        tmp = li.substr(start, end - start);

        if (i == 1)
        {
        	tb[index].nikam = keint(tmp);
        }
        else if (i == 2){
        	tb[index].namaam = tmp;
        }
        
        else if (i == 3){
          tb[index].namabam = tmp;
        }
        else if (i == 4){
         tb[index].jmlbam = keint(tmp);
        }
        else{
          tb[index].hrgbam = keint(tmp);
        }
        i++;

    } while (end != -1);
}

int queue :: keint(string x){
	int y;

	stringstream ss;
	ss << x;
	ss >> y;

	return y;
}

void queue :: inis(){
 	head = NULL;
 	akhir = NULL;
}

int queue :: isEmpty(){
 	if(head == NULL)
 		return 1;
 	else
 		return 0;
 }

