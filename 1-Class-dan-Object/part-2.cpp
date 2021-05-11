#include <iostream>
using namespace std;

class Kotak {
	public :
		// Deklatasi atribut
		double panjang;
		double lebar;
		double tinggi;


		// Deklarasi method
		double ambilVolume();
		void isiPanjang(double p);
		void isiLebar(double l);
		void isiTinggi(double t);
};


// Membuat method yang telah di deklarasikan
double Kotak::ambilVolume(){
	return panjang * lebar * tinggi;
}

void Kotak::isiPanjang(double p){
	this->panjang = p;
}

void Kotak::isiLebar(double l){
	this->lebar = l;
}

void Kotak::isiTinggi(double t){
	this->tinggi = t;
}



int main(){
	Kotak satu;		// Inisialisasi object (satu memiliki tipe data Kotak atau disebut satu object dari kotak)
	Kotak dua;		// Inisialisasi object
	double volume;


	// Mengisi atribut object menggunakan method
	satu.isiPanjang(5.0);
	satu.isiLebar(6.0);
	satu.isiTinggi(7.0);


	dua.isiPanjang(10.0);
	dua.isiLebar(13.0);
	dua.isiTinggi(18.0);

	volume = satu.ambilVolume();
	cout << "Volume kotak satu adalah : " << volume << endl;


	volume = dua.ambilVolume();
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