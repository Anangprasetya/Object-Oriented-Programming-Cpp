#include <iostream>
using namespace std;

class CetakData {
	public :
		void tampil(int i){
			cout << "Ini adalah tampil int " << i;
		}

		void tampil(double i){
			cout << "Ini adalah tampil double " << i;
		}

		void tampil(string i){
			cout << "Ini adalah tampil character " << i;
		}
};

int main(){
	CetakData ceda;

	ceda.tampil(28.654);
	cout << endl;
	ceda.tampil("Anang Nur Prasetya | C++");
	cout << endl;
	ceda.tampil(20);
	cout << endl;
	return 0;
}


/*
      * Compiler    :  G++ 9.3.0
      * Materi      :  Function Overloading
      * OS          :  Linux Ubuntu
      * Text Editor :  Sublime Text
      * Sumber Ilmu :  https://www.tutorialspoint.com/index.htm
      * Pembuat     :  Anang Nur Prasetya
      * Tahun       :  2021
*/