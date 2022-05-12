#include <iostream>
using namespace std;

class Main{  
public:
  int jumlah; 
  int a[1], max, min, mahasiswa, index = 0;
  float total, rata;
  string dosen, matkul;
  void cetak_input (){
    
    cout<<"Masukkan Nama Dosen : ";
    getline(cin,dosen);
    cout<<"Masukkan Nama Mata Kuliah : ";
    getline(cin,matkul);
    cout<<"Masukkan banyak Mahasiswa : ";
    cin>>mahasiswa;
}
  void input_hitung(){
    a[mahasiswa];
    for (int i = 0; i < mahasiswa; i++){
      cout<<"Masukan nilai mahasiswa "<<i+1<<" : ";
      cin>>a[i];
    }
    max = a[0];
	  min = a[0];
	  for (int i = 0; i < mahasiswa; i++){
		  if(a[i] > max){
			  max = a[i];
		  }
	  }
	  for(int i = 0; i < mahasiswa; i++){
		  if(a[i] < min){
		  	min = a[i];
		  }
	  }
    total = 0;
  	for(int i = 0; i < mahasiswa; i++){
	  	total = total + a[i];
	  }
	  rata = total / mahasiswa;
}

  void cetak_output(){
    cout<<"DAFTAR NILAI PWEB"<<endl;
    cout<<"Nama Dosen : "<<dosen<<endl;
    cout<<"Nama Mata Kuliah : "<<matkul<<endl;
    for (int i=0; i < mahasiswa; i++){
      cout<<"Nilai : "<<a[i]<<endl;
    }
    cout<<"Nilai Terendah  : "<<min<<endl;
    cout<<"Nilai Tertinggi : "<<max<<endl;
    cout<<"Nilai Rata-Rata : "<<rata<<endl;
    
  }
};

int main() {
  Main main;
  main.cetak_input();
  main.input_hitung();
  main.cetak_output();
  return 0;
}