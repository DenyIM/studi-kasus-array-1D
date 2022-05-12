#include<iostream>
using namespace std;

class Proses{  
public:
  ifstream ambil_data;
  ofstream tulis_data;
  string data_file;
  int jumlah; 
  int a[1], max, min, index = 0;
  float total, rata;
  string dosen, matkul;
  void getdata(){
    ambil_data.open("api_data.txt");
    while(!ambil_data.eof()){
    	ambil_data >> data_file[index];
    	index += 1;
  	}
  	ambil_data.close();
    dosen = data_file[0];
    matkul = data_file[1];
  }
  void input_hitung(){
    jumlah = (int)data_file[2];
    a[jumlah];
    for(int i = 0; i < jumlah; i++){
      cout<<"Masukan nilai mahasiswa "<<i<<" : ";cin>>a[i];
    }
    max = a[0];
	  min = a[0];
	  for(int i = 0; i < jumlah; i++){
		  if(a[i] > max){
			  max = a[i];
		  }
	  }
	  for(int i = 0; i < jumlah; i++){
		  if(a[i] < min){
		  	min = a[i];
		  }
	  }
    total = 0;
  	for(int i = 0; i < jumlah; i++){
	  	total = total + a[i];
	  }
	  rata = total / jumlah;
}
  void toFile(){
    tulis_data.open("api_data.txt");
    tulis_data<<dosen<<endl;
    tulis_data<<matkul<<endl;
    tulis_data<<max<<endl;
    tulis_data<<min<<endl;
    tulis_data<<rata<<endl;
    tulis_data<<jumlah<<endl;
    for(int i = 0; i < jumlah; i++){
      if(i == jumlah - 1){
        tulis_data<<a[i];
      }else{
        tulis_data<<a[i]<<endl;
      }
    }
  }

};