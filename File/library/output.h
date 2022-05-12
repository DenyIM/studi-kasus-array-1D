using namespace std;

class Output{
public:
  void cetak(){
    cout<<"DAFTAR NILAI PWEB"<<endl;
    cout<<"Nama Dosen : "<<data_file[0]<<endl;
    cout<<"Nama Mata Kuliah : "<<data_file[1]<<endl;
    for (i=0; i<=data_file[6]; i++){
      cout<<"Nilai : "<<data_file[]
    }
    cout<<"Nilai Terendah  : "<<data_file[3];
    cout<<"Nilai Tertinggi : "<<data_file[2];
    cout<<"Nilai Rata-Rata : "<<data_file[4];
    
  }

  void getData(){
  	ambil_data.open("api_data.txt");
  	while(!ambil_data.eof()){
    	ambil_data >> data_file[index];
    	index += 1;
  	}
  	ambil_data.close();
  }

private:
  int data_file[30];
  int index = 0; 
  ifstream ambil_data;
  ofstream tulis_data;
};