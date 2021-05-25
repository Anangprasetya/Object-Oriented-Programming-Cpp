#include <iostream>
using namespace std;

class Kotak {
	double panjang;

	public :
		void isiPanjang(double p){
			this->panjang = p;
		}
	protected :
		friend void cetakPanjang(Kotak x);
};

void cetakPanjang(Kotak x){
	cout << "Panjang : " << x.panjang << endl;
}

int main(){
	Kotak obj;

	obj.isiPanjang(20.0);
	cetakPanjang(obj);
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