using namespace std;

class Input {
public:
void cetak (){
  cout<<"Masukkan Nama Dosen : ";
  cin>>dosen;
  cout<<"Masukkan Nama Mata Kuliah : ";
  cin>>matkul;
  cout<<"Masukkan banyak Mahasiswa : ";
  cin>>mahasiswa;
}

void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << dosen<<endl;
      tulis_data << matkul<<endl;
      tulis_data << mahasiswa;
			tulis_data.close();
}

private:
ofstream tulis_data;
int dosen, matkul, mahasiswa;
};