#include <iostream>
using namespace std;

class Rumah {
	public :
		Rumah(string w, string p){
			this->warna = w;
			// Objeck this menunjuk atribut warna

			this->posisi = p;
			// Objeck this menunjuk atribut posisi

		}

		void tampil(){
			cout << "Warna : " << this->warna << endl;
			// kode this->warna dapat di tulis warna saja

			cout << "Posisi : " << this->posisi << endl;
		}

	private :
		string warna;
		string posisi;
};

int main(){
	Rumah anang("Biru", "Mojokerto");
	anang.tampil();
	return 0;
}


/*
      * Compiler    :  G++ 9.3.0
      * OS          :  Linux Ubuntu
      * Text Editor :  Sublime Text
      * Sumber Ilmu :  https://www.tutorialspoint.com/index.htm
      * Pembuat     :  Anang Nur Prasetya
      * Tahun       :  2021
*/