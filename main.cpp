#include "login.h"
//#include "queue.h"
#include <fstream>
//#include "104.h"


using namespace std;

int main() {
  ofstream masuk;
    masuk.open("idx_ktp.txt", std::ofstream::out | std::ofstream::trunc);
  masuk.close();
  // queue x;
  // x.m();
  lgn x;
  x.login(); // dalam method login..jika login sebagai admin nanti akan
             // memamngil

  return 0;
}