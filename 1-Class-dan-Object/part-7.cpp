#include <iostream>
using namespace std;

class Tali {
	public :
		void isiPanjang(double p);
		double ambilPanjang(void);

		Tali(double p); // Ini adalah Constructor
						// Ingat ! Constructor adalah sebuah method
						// Kita beri parameter
	private :
		double panjang;
};


// Tali:: Tali(double p){
// 	cout << "Object telah dibuat, dan Constructor ini dijalankan, isi paramter = " <<  p << endl;
// 	this->panjang = p;
// }

Tali:: Tali(double p) : panjang(p) {
	cout << "Object telah dibuat, dan Constructor ini dijalankan, isi paramter = " <<  p << endl;
}

void Tali:: isiPanjang(double p){
	this->panjang = p;
}

double Tali:: ambilPanjang(void){
	return this->panjang;
}

int main(){
	Tali rafia(20.0);

	cout << "Panjang tali rafia : " << rafia.ambilPanjang() << endl;

	rafia.isiPanjang(5.0);
	cout << "Panjang tali rafia : " << rafia.ambilPanjang() << endl;
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