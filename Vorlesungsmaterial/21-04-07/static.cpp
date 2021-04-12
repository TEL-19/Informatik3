#include "../header.h"
#include <memory>

class Zaehler
{
   static int n;

public:
   Zaehler() { n++; }
   ~Zaehler() { n--; }
   static int get_n() { return n; }
};
// initialisieren

int Zaehler::n = 0;

int main(int argc, char *argv[])
{
   std::cout << "Hello World!\n";
   std::cout << Zaehler::get_n() << std::endl;
   Zaehler *z = new Zaehler;
   Zaehler *z2 = new Zaehler;
   std::cout << Zaehler::get_n() << std::endl;
   delete z2;
   std::cout << Zaehler::get_n() << std::endl;
   Zaehler *z_ar = new Zaehler[10];
   std::cout << Zaehler::get_n() << std::endl;
   delete[] z_ar;
   std::cout << Zaehler::get_n() << std::endl;

   return EXIT_SUCCESS;
}