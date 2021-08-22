#include <iostream>
using namespace std;

class OrangTua {
   public :
      virtual void cetak() = 0;
};


class AnakSatu : public OrangTua {
   private :
      void cetak(){
         cout << "    Class Anak Satu  \n";
      }
};


class AnakDua : public OrangTua {
   private :
      void cetak(){
         cout << "    Class Anak Dua  \n";
      }
};


int main(){
   OrangTua * ot;

   AnakSatu as;
   AnakDua ad;

   ot = &as;
   ot->cetak();


   ot = &ad;
   ot->cetak();

   return 0;
}


/*
      * Compiler    :  G++ 9.3.0
      * Materi      :  Polymorphism (Basic versi simple)
      * OS          :  Linux Ubuntu
      * Text Editor :  Sublime Text
      * Sumber Ilmu :  https://www.tutorialspoint.com/index.htm
      * Pembuat     :  Anang Nur Prasetya
      * Tahun       :  2021
*/