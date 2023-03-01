#include "./Organo.hpp"
#include <iostream>

Organo::Organo(std::string nombre, int defensa)
{
  this->nombre = nombre;
  this->defensa = defensa;
  this->globulo = new Globulo("Globulo_" + this->nombre);
}

Organo::~Organo()
{
  delete this->globulo;
  std::cout << this->nombre << " destruido" << std::endl;
}

void Organo::entradaBacteria(Bacteria *bacteria)
{
  if (this->globulo->getVida() > 0)
  {
    int probabilidad = rand() % 100 + 1;
    std::cout << "------- Bacteria " << bacteria->getNombre() << " entrando en " << this->nombre << " -------"<< std::endl;
    if (probabilidad <= this->defensa)
    {
      this->globulo->atacar(bacteria);
    }
    else
    {
      bacteria->atacar(this->globulo);
    };
  }
  
};

Globulo *Organo::getGlobulo()
{
  return this->globulo;
};
