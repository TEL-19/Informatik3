#include <iostream>
#include <utility>

class cKomplex{
private:
   // Membervariable
   double _re;
   double _im;
public:
  cKomplex():_re(0.0), _im(0.0) {}
  cKomplex(double re, double im):_re(re), _im(im) {}
  // copy Konstruktor
  cKomplex(const cKomplex& obj){
    std::cout << "cKomplex(const cKomplex& obj)" << std::endl;
    _re = obj._re;
    _im = obj._im;
  }
  cKomplex operator=(const cKomplex& obj){
    std::cout << "cKomplex& operator=(const cKomplex& obj)" << std::endl;
    _re = obj._re;
    _im = obj._im;
    return *this;
  }
  // move Konstruktor
  cKomplex(cKomplex&& obj){
    std::cout << "cKomplex(cKomplex&& obj)" << std::endl;
    _re = obj._re;
    _im = obj._im;
    obj._re = 0.0;
    obj._im = 0.0;
  }
};

int main()
{

   std::cout << std::endl;

   cKomplex obj;

   cKomplex obj1(obj);    // copy konstruktor
   cKomplex obj2 = obj;   // copy konstruktor
  //  cKomplex obj123 (cKomplex(1,1));
   obj2 = obj;    /// copy zuweisungsoperator

   cKomplex obj3(std::move(obj1));
   cKomplex obj4 = std::move(obj2);

   std::cout << std::endl;
}