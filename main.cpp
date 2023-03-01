#include <iostream>
#include <locale.h>
#include "src/Persona.hpp"

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "spanish");
  int nBacterias;
  
  do
  {
    std::cout << "Introduce el numero de bacterias: ";
    std::cin >> nBacterias;
    if (nBacterias > 6 || nBacterias <= 0)
    {
      std::cout << "El numero de bacterias debe estar entre 1 y 6" << std::endl;
    }
  } while (nBacterias > 6 || nBacterias <= 0);

  Persona *persona = new Persona(nBacterias);
  persona->play();
  delete persona;
  return 0;
};

