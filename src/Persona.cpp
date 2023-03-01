#include "./Persona.hpp"
#include <iostream>
#include <string>
#include <time.h>

Persona::Persona(int nBacterias){
  std::cout << "Numero de bacterias: " << nBacterias << std::endl;
  this->organos = {new Organo("Cerebro", 50), new Organo("Corazon", 50), new Organo("Pulmones", 20), new Organo("Estomago", 20), new Organo("Higado", 80), new Organo("Riñon", 80)};
  for (int i = 0; i < nBacterias; i++)
  {
    this->bacterias.push_back(new Bacteria("Bacteria_" + std::to_string(i+1)));
  }
};

Persona::~Persona(){
  for (auto &bacteria : this->bacterias)
  {
    delete bacteria;
  }
  for (auto &organo : this->organos)
  {
    delete organo;
  }
};

bool Persona::comprobarBacterias(){
  for (auto &bacteria : this->bacterias)
  {
    if (bacteria->getVida() > 0)
    {
      return true;
    }
  }
  return false;
};

bool Persona::comprobarOrganos(){
  for (auto &organo : this->organos)
  {
    if (organo->getGlobulo()->getVida() > 0)
    {
      return true;
    }
  }
  return false;
};

void Persona::play(){
  srand(time(NULL)); 
  int nOrgano;
  while (this->comprobarBacterias() && this->comprobarOrganos())
  {
    for (auto &bacteria : this->bacterias)
    {
      if (bacteria->getVida() > 0)
      {
        nOrgano = rand() % 6;
        this->organos[nOrgano]->entradaBacteria(bacteria);
      }
    }

  }
  if (!this->comprobarBacterias())
  {
    std::cout << "\n\nLos globulos ganaron\n\n" << std::endl;
  } else {
    std::cout << "\n\nLas bacterias ganaron\n\n" << std::endl;
  }
  
  
};




