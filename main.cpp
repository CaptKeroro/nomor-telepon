#include <iostream>

using namespace std;

int main(){
  int Op1, Op2;
  int Lama;
  int Bayar;

  cout << "Pilih Operator Anda : \n";
  cout << "\t1.Telkomsel\n";
  cout << "\t2.XL \n";
  cout << "Masukan Pilihan : ";
  cin >> Op1;

  cout << "Pilih Operator Yang akan Dihubungi : \n";
  cout << "\t1.Telkomsel\n";
  cout << "\t2.XL \n";
  cout << "Masukan Pilihan : ";
  cin >> Op2;

  if (Op1 == Op2){
    cout << "Masukan Lama Panggilan : ";
    cin >> Lama;
    if (Lama <= 10){
      Bayar = Lama * 500;
    }
    else{
      Bayar = Lama * 800;
    }
    cout << "Anda Mengghubungi Operator Telkomsel" << endl;
    cout << "Harga yang harus Dibayar : Rp." << Bayar << endl;
  }

  else if (Op1 != Op2){
    cout << "Masukan Lama Panggilan : ";
    cin >> Lama;
    if (Lama <= 10){
      Bayar = Lama * 800;
    }
    else{
      Bayar = Lama * 1000;
    }
    cout << "Anda Mengghubungi Operator XL" << endl;
    cout << "Harga yang harus Dibayar : Rp." << Bayar << endl;
  }

  else{
    cout << "Operator Tidak Tersedia" << endl;
  }

  cin.get();
  return 0;
}
