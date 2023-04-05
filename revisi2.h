#include <iostream>
#include <fstream>
using namespace std;

class konsultasi093 {
	public :
		void pertanyaan093();
		void jawaban093();
	private :
		string konsul_pertanyaan093;
		string konsul_jawaban093;
};

void konsultasi093 :: pertanyaan093(){
	cout << "=============================================";
	cout << endl << "\t KONSULTASI - PERTANYAAN" << endl;
	cout << "============================================="<< endl << endl;
	
	cout << "Masukkan pertanyaan anda : "<<endl;
	cout << endl;
  cin.ignore();
	getline(cin, konsul_pertanyaan093);
	
	cout << endl << "=============================================";
	cout << endl << "\tSilahkan menunggu jawaban dari admin";
	cout << endl << "Jawaban dari pertanyaan anda berada di jawaban.txt";
	cout << endl << "=============================================";
	
	ofstream pertanyaan_konsul("pertanyaan.txt", ios::app);
	pertanyaan_konsul << "=============================================" << endl;
	pertanyaan_konsul << "\t KONSULTASI - PERTANYAAN"<< endl;
	pertanyaan_konsul << "=============================================" << endl << endl;
	
	pertanyaan_konsul << "Pertanyaan : " << endl;
	pertanyaan_konsul << konsul_pertanyaan093 << endl << endl;
	
	pertanyaan_konsul << "=============================================";
	
}

void konsultasi093 :: jawaban093(){
	cout << "=============================================";
	cout << endl << "\t KONSULTASI - JAWABAN" << endl;
	cout << "============================================="<< endl << endl;
	
	cout << "Pertanyaan : "<<endl;
	cout << endl << konsul_pertanyaan093 << endl << endl;
	
	cout << "Jawaban : "<<endl;
	cout << endl;
  cin.ignore();
	getline(cin, konsul_jawaban093);
	
	cout << endl << "=============================================";
	
	ofstream jawaban_konsul("jawaban.txt", ios::app);
	jawaban_konsul << "=============================================" << endl;
	jawaban_konsul << "\t KONSULTASI - JAWABAN"<< endl;
	jawaban_konsul << "=============================================" << endl << endl;
	
	jawaban_konsul << "Pertanyaan : " << endl;
	jawaban_konsul << konsul_pertanyaan093 << endl << endl;
	
	jawaban_konsul << "Jawaban : " << endl;
	jawaban_konsul << konsul_jawaban093 << endl << endl;
	
	jawaban_konsul << "=============================================";
}