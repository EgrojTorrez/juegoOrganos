#pragma once 
#include <string>
#include <iostream>
#include <vector>
#include "./Organismo.hpp"
#include "./Organo.hpp"
class Organismo;
class Organo;

class Persona
{
  private:
    std::vector<Organo *> organos;
    std::vector<Bacteria *> bacterias;
    bool comprobarBacterias();
    bool comprobarOrganos();
  public:
    Persona(int nBacterias);
    ~Persona();
    void play();
};
