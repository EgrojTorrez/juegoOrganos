#pragma once 
#include <string>
#include "Organismo.hpp"
class Organismo;

class Organo
{
  public:
    Organo(std::string nombre, int defensa);
    virtual ~Organo();
    void entradaBacteria(Bacteria *org);
    Globulo *getGlobulo();
  private:
    Globulo *globulo;
    std::string nombre;
    int defensa;
};
