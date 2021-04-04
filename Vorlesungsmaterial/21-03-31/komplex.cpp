#include "../header.h"


struct Komplex {
   double _re;  // Membervariable
   double _im;
   Komplex(int re, int im);
   void ausgabe();   // Methode
};

int main() {
   Komplex a (2, 5);
   // a._im = 2;
   // a._re = 5;
   a.ausgabe();

   return EXIT_SUCCESS;
}

void Komplex::ausgabe() {
   cout << '(' << _re << ',' << _im << ')' << endl;
}

Komplex::Komplex(int re, int im) {
   _re = re;
   _im = im;
}