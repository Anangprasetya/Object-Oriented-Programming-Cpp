#include <iostream>
using namespace std;

class Data {
	private :
		int angka_dalam;

	public :
		int angka_luar;

		void isiDalam(int x){
			this->angka_dalam = x;
		}

		int ambilDalam(){ return this->angka_dalam; }
};

class Operator {
	private :
		friend ostream & operator << (ostream &, Operator &);
		Data * dataPtr;

	public :
		Data * operator -> (){
			return dataPtr;
		}

		void operator = (int x){
			dataPtr->angka_luar = x;
		}
};


ostream & operator << (ostream & keluar, Operator & op){
	keluar << op.dataPtr;
	return keluar;
}



int main(){
	Operator anang;
	anang->angka_luar = 20;

	cout << "  Isi angka luar : ";
	cout << anang->angka_luar << endl;


	anang->isiDalam(43);
	cout << "  Isi angka dalam : ";
	cout << anang->ambilDalam() << endl;


	return 0;
}


/*
      * Compiler    :  G++ 9.3.0
      * Materi      :  Operator Overloading (Arrow)
      * OS          :  Linux Ubuntu
      * Text Editor :  Sublime Text
      * Sumber Ilmu :  https://www.tutorialspoint.com/index.htm
      * Pembuat     :  Anang Nur Prasetya
      * Tahun       :  2021
*/