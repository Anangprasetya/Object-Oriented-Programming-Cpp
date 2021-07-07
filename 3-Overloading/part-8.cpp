#include <iostream>
using namespace std;

class Overloading {
	private :
		int angka;

	public :
		Overloading(int x){
			this->angka = x;
		}

		void tampil(){
			cout << "  Angka : " << this->angka << endl;
		}

		void operator = (Overloading ov){
			this->angka = ov.angka;
		}

};


int main(){
	Overloading satu(20), dua(6);

	satu.tampil();
	dua.tampil();

	dua = satu;
	dua.tampil();

	return 0;
}


/*
      * Compiler    :  G++ 9.3.0
      * Materi      :  Operator Overloading (Assignment)
      * OS          :  Linux Ubuntu
      * Text Editor :  Sublime Text
      * Sumber Ilmu :  https://www.tutorialspoint.com/index.htm
      * Pembuat     :  Anang Nur Prasetya
      * Tahun       :  2021
*/