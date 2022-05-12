#include <iostream>
#include <fstream>
#include "../library/proses.h"
int main (){
  Proses proses;
  proses.getdata();
  proses.input_hitung();
  proses.toFile();
}