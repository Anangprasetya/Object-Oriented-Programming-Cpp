#include <iostream>
using namespace std;

class Kotak {
	public :
		// Deklatasi atribut
		double panjang;
		double lebar;
		double tinggi;
};


int main(){
	Kotak satu;		// Inisialisasi object (satu memiliki tipe data Kotak atau disebut satu object dari kotak)
	Kotak dua;		// Inisialisasi object
	double volume;


	// Mengisi atribut object satu
	satu.panjang = 5.0;
	satu.lebar = 6.0;
	satu.tinggi = 7.0;



	// Mengisi atribut object dua
	dua.panjang = 10.0;
	dua.lebar = 13.0;
	dua.tinggi = 18.0;

	volume = satu.panjang * satu.lebar * satu.tinggi;
	cout << "Volume kotak satu adalah : " << volume << endl;



	volume = dua.panjang * dua.lebar * dua.tinggi;
	cout << "Volume kotak dua adalah : " << volume << endl;


}


/*
      * Compiler    :  G++ 9.3.0
      * OS          :  Linux Ubuntu
      * Text Editor :  Sublime Text
      * Sumber Ilmu :  https://www.tutorialspoint.com/index.htm
      * Pembuat     :  Anang Nur Prasetya
      * Tahun       :  2021
*/