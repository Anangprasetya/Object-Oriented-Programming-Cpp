#include <iostream>
using namespace std;

class Kotak {
	public :
		double panjang;

		void isiLebar(double l);
		double ambilLebar(void);

	private :
		double lebar;
};

double Kotak:: ambilLebar(void){
	return this->lebar;
}

void Kotak:: isiLebar(double l){
	this->lebar = l;
}


int main(){
	Kotak kotak;

	// Isi atribut panjang secara langsung
	kotak.panjang = 5.0;
	cout << "Panjang kotak : " << kotak.panjang << endl;

	// kotak.lebar = 20.0  | Error, karena tidak bisa di akses secara langsung
	kotak.isiLebar(20.0);
	cout << "Lebar kotak : " << kotak.ambilLebar() << endl;
}


/*
      * Compiler    :  G++ 9.3.0
      * OS          :  Linux Ubuntu
      * Text Editor :  Sublime Text
      * Sumber Ilmu :  https://www.tutorialspoint.com/index.htm
      * Pembuat     :  Anang Nur Prasetya
      * Tahun       :  2021
*/