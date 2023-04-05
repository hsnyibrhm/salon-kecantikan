//class stack untuk menumpuk data expired obat
//104// hasany

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;

class exp{
	private:
    ofstream qq;
		int top;
    int top2;
    int top3;
    int index;
    int index2;
    int index3;
		string *datab;
    string *dataexp;
    int *datastk;
		int MAX;
    int MAX2;
    int MAX3;
    string tt;
    string nama_obat;
    string texp;
    int sisa;
    int aa;
    int bb;
    int cc;
	public:
		void init();
    void init2();
    void init3();
    void hpstack();
		bool isKosong();
    bool iskosong2();
    bool iskosong3();
		bool isFull();
    bool isFull2();
    bool isFull3();
		void push();
    void push2();
    void push3();
		void pop();
    void pop2();
    void pop3();
		void printStack();
    void printStack2();
    void printStack3();
		void maximum(int kapasitas);
    void maximum2(int kapasitas2);
    void maximum3(int kapasitas3);
    void tosize(string l, string del , int lk);
    ifstream toin;
    int to(string xxx);
    void ambil();

};
exp kdl[100];

void exp :: hpstack(){
  
   qq.open("exp.txt", std::ofstream::out | std::ofstream::trunc);
   qq.close();
}

void exp :: maximum(int kapasitas){
  
	MAX = kapasitas;
	datab = new string[MAX];

}

void exp :: maximum2(int kapasitas2){
  
	MAX2 = kapasitas2;
	
  dataexp = new string [MAX2];
}

// int exp :: to(string x){
// 	int y;

// 	stringstream ss;
// 	ss << x;
// 	ss >> y;

// 	return y;
// }

void exp :: maximum3(int kapasitas3){
  
	MAX3 = kapasitas3;
	
  datastk = new int [MAX3];
}

void exp :: init(){
  
	top = -1;
}

void exp :: init2(){
  
	top2 = -1;
}

void exp :: init3(){
  
	top3 = -1;
}

bool exp :: isKosong(){
  
  return top == -1;
}

bool exp :: iskosong2(){
  
  return top2 == -1;
}

bool exp :: iskosong3(){
  
  return top3 == -1;
}

bool exp :: isFull(){
  
	return top == MAX-1;
}

bool exp :: isFull2(){
  
	return top2 == MAX2-1;
}

bool exp :: isFull3(){
  
	return top3 == MAX3-1;
}
void exp :: ambil(){
 index = 0;
  // aa = 0;
  // bb = 0;
  // cc = 0;

	toin.open("exp.txt");
	while(!toin.eof()){
		toin >> tt;
		tosize(tt, ";", index);
		index++;
	}
  toin.close();
  
  maximum(index);
  maximum2(index);
  maximum3(index);

  index2 = index;
  index3 = index;

  aa = index;
  bb = index;
  cc = index;
  
  init();
  init2();
  init3();
 // for (int i = 0; i < index; ++i){
  
  push();
  push2();
  push3();
   // }
  for (int i = 0; i < index; i++){ 
  printStack();
  printStack2();
  printStack3();

    
    }
  cout << endl;
  // cout << " 1. pop stack"
 // pop();
  
}

void exp :: push(){
   if (isFull()) {
     
		cout << "\nTumpukan penuh"<<endl;
	}
	else {
    //top ++;
    
	
    for (int i = (index-1); i >= 0; i--){
      top ++;
      
     datab[top] = kdl[i].nama_obat ;
     // top ++;
     }
    
	}
}

void exp :: push2(){
   if (isFull2()) {
		cout << "\nTumpukan penuh"<<endl;
	}
	else {
   // top ++;
   
	
    for (int i = (index2-1); i >= 0; i--){
      
      top2 ++;
     dataexp[top2] = kdl[i].texp; ;
      
     }
    
	}
}

void exp :: push3(){
   if (isFull3()) {
     
		cout << "\nTumpukan penuh"<<endl;
	}
	else {
   // top ++;
   
	
    for (int i = (index3-1); i >= 0; i--){
      
      top3 ++;
     datastk[top3] = kdl[i].sisa;
      
     }
    
	}
}

void exp :: pop() {
	if (isKosong()) {
		cout << "\nData kosong\n" << endl;
	}
	else {
    cout<<"\nPop stack, elemen yang di-pop : "<<datab[0];
	  //string temp=datab[0];
    
	for(int i=0; i < top; i++){ 
		datab[i]=datab[i+1];
  	datab[top]='0';
	  top--;
	//return temp;
    }
}
    // cout << "\nData " << datab[top] << " sudah expired" << endl;
    // top--;
	
}

void exp :: pop2() {
  
	if (iskosong2()) {
		cout << "\nData kosong\n" << endl;
	}
	else {
    cout<<"\nPop stack, elemen yang di-pop : "<<dataexp[0];
	  //string temp1 = dataexp[0];
    
	for(int i = 0; i < top2; i++){ 
		dataexp[i] = dataexp[i+1];
  	dataexp[top2] = '0';
	  top2--;
	// return temp1;
    }
}
    // cout << "\nData " << datab[top] << " sudah expired" << endl;
    // top--;
	
}

void exp :: pop3() {
  
	if (iskosong3()) {
		cout << "\nData kosong\n" << endl;
	}
	else {
    cout<<"\nPop stack, elemen yang di-pop : "<<datastk[0];
	  //int temp2 = datastk[0];
    
	for(int i = 0; i < top3; i++){ 
		datastk[i] = datastk[i+1];
  	datastk[top3]='0';
	  top3--;
	//return temp2;
    }
}
  // hpstack();
  
    // cout << "\nData " << datab[top] << " sudah expired" << endl;
    // top--;

  //menghapus data yang sudah di pop dari txt
}

void exp::printStack() {
	if (isKosong() ) {
		cout << "Data Kosong";
	}
	else {
    aa --;
    cout << "=============================================\n";
    cout << endl;
    cout << "\nnama barang     : ";
    cout << datab[aa];
		
      // cout << datab[ii] << ((ii == 0) ? "" : ", \t");
    
			// cout << datab[ii] << ((ii == 0) ? "" : ", \t");
      // cout << dataexp[ii] << ((ii == 0) ? " " : ", ")
	}
}

void exp::printStack2() {
	if (iskosong2() ) {
		cout << "Data Kosong";
	}
	else {
   bb --;
    cout << "\ntanggal expired : ";


    cout << dataexp[bb];
    
			//cout << datab[i] << ((i == 0) ? "" : ",");
      // cout << dataexp[i] << ((i == 0) ? " " : ", \t");
	}
  // cout << endl;
  // cout << "======================================";
  // cout << endl;
}

void exp::printStack3() {
	if (iskosong3() ) {
		cout << "Data Kosong";
	}
	else {
   cc--;
    cout << "\nstok barang     : ";
    cout << datastk[cc];


    
			//cout << datab[i] << ((i == 0) ? "" : ",");
      // cout << dataexp[i] << ((i == 0) ? " " : ", \t");
	}
  cout << endl;
  cout << "=============================================\n";
  cout << endl;
}

void exp:: tosize(string s, string del = " ", int idx =0){
  string tmp;
	int i = 1;
  int start, end = -1*del.size();
  
    do {
        start = end + del.size();
        end = s.find(del, start);
        tmp = s.substr(start, end - start);

        if (i == 1)
        {
        	kdl[idx].nama_obat = tmp;
        }
        else if (i == 2){
        	kdl[idx].texp = tmp;
        }
        else {
        	kdl[idx].sisa = to(tmp);
        }
       
        i++;

    } while (end != -1);
}


int exp :: to(string x){
	int y;

	stringstream ss;
	ss << x;
	ss >> y;

	return y;
}