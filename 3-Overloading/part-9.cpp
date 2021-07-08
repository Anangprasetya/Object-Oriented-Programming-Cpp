#include <iostream>
using namespace std;

class Overloading {
	public :
		Overloading(){}
		Overloading(int x){
			this->angka = x;
		}

		Overloading operator()(int x){
			Overloading tampung;
			tampung.angka = x + 20;

			return tampung;
		}

		void tampil(){
			cout << "   Angka  : " << this->angka << endl;
		}

	private :
		int angka;

};



int main(){
	Overloading obj1(13), obj2;
	cout << " Satu \n";
	obj1.tampil();

	obj2 = obj1(17);
	cout << " Dua \n";
	obj2.tampil();

	return 0;
}


/*
      * Compiler    :  G++ 9.3.0
      * Materi      :  Operator Overloading (Function Call)
      * OS          :  Linux Ubuntu
      * Text Editor :  Sublime Text
      * Sumber Ilmu :  https://www.tutorialspoint.com/index.htm
      * Pembuat     :  Anang Nur Prasetya
      * Tahun       :  2021
*/