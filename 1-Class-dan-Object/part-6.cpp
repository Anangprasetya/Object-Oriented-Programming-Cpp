#include <iostream>
using namespace std;

class Tali {
	public :
		void isiPanjang(double p);
		double ambilPanjang(void);

		Tali(); // Ini adalah Constructor
				// Ingat ! Constructor adalah sebuah method

	private :
		double panjang;
};


Tali:: Tali(){
	cout << "Object telah dibuat, dan Constructor ini dijalankan" << endl;
}

void Tali:: isiPanjang(double p){
	this->panjang = p;
}

double Tali:: ambilPanjang(void){
	return this->panjang;
}

int main(){
	Tali rafia;
	rafia.isiPanjang(20.0);
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