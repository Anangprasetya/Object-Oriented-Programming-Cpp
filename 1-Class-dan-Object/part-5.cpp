#include <iostream>
using namespace std;

class Kotak {
	protected :
		double lebar;
};

class KotakKecil : Kotak {
	public :
		void isiLebarKecil(double l);
		double ambilLebarKecil(void);
};

double KotakKecil:: ambilLebarKecil(void){
	return this->lebar;
}

void KotakKecil:: isiLebarKecil(double l){
	this->lebar = l;
}



int main(){
	KotakKecil kotak;

	kotak.isiLebarKecil(20.0);
	cout << "Lebar kotak : " << kotak.ambilLebarKecil() << endl;
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