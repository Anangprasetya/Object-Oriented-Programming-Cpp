#include <iostream>
using namespace std;

class TTL {
	private :
		int tanggal;
		int tahun;

	public :
		TTL(int t, int h){
			this->tanggal = t;
			this->tahun = h;
		}

		void cetak(){
			cout << "  " << this->tanggal;
			cout << " " << this->tahun;
			cout << endl << endl;
		}


		TTL operator ++ (){
			tanggal += 1;
			tahun += 1;

			return TTL(tanggal ,tahun);
		}

		TTL operator ++ (int){
			tanggal += 1;
			tahun += 1;

			return TTL(tanggal, tahun);
		}

		TTL operator -- (){
			tanggal -= 1;
			tahun -= 1;

			return TTL(tanggal ,tahun);
		}

		TTL operator -- (int){
			tanggal -= 1;
			tahun -= 1;

			return TTL(tanggal, tahun);
		}


};

int main(){
	TTL a(3 , 2017);
	TTL b(4, 2019);


	a.cetak();
	b.cetak();
	++a;
	--b;


	a.cetak();
	b.cetak();
	a++;
	b--;

	a.cetak();
	b.cetak();

	return 0;

}


/*
      * Compiler    :  G++ 9.3.0
      * Materi      :  Operator Overloading (Increment Decrement)
      * OS          :  Linux Ubuntu
      * Text Editor :  Sublime Text
      * Sumber Ilmu :  https://www.tutorialspoint.com/index.htm
      * Pembuat     :  Anang Nur Prasetya
      * Tahun       :  2021
*/