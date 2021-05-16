#include <iostream>
using namespace std;

class Garis {
	public :
		double panjang;

		void isiPanjang(double p);
		double ambilPanjang(void);
};

// Definisi fungsi sebagai anggota class
double Garis:: ambilPanjang(void){
	return this->panjang;
}

void Garis:: isiPanjang(double p){
	this->panjang = p;
}

int main(){
	Garis garis;

	// Akses atribut panjang melalui method
	garis.isiPanjang(20.0);
	cout << "Panjang garis : " << garis.ambilPanjang() << endl;

	// Akses atribut panjang tanpa perantara
	garis.panjang = 10.0;
	cout << "Panjang garis : " << garis.panjang << endl;
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