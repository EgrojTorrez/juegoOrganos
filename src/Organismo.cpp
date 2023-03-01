#include "./Organismo.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


Organismo::~Organismo()
{
  std::cout << "Organismo destruido" << std::endl;
};

Globulo::Globulo(std::string nombre)
{
  srand(time(NULL));
  this->nombre = nombre;
  this->vida = 512;
  this->fuerza = rand() % 155 + 100;
  this->agilidad = rand() % 155 + 100;
  this->dureza = rand() % 155 + 100;
};

Globulo::~Globulo()
{
  std::cout << this->nombre <<" destruido" << std::endl;
};

int Globulo::getVida() 
{
  return this->vida;
};

int Globulo::atacar(Organismo* bacteria)
{
  int ataque = ((this->fuerza + this->agilidad)/bacteria->getDureza());
  std::cout << this->nombre <<" ataco a " << bacteria->getNombre() << " con " << ataque << " de daño" << std::endl;
  bacteria->recibirDano(ataque);
  return ataque;
};

int Globulo::getDureza()
{
  return this->dureza;
};

void Globulo::recibirDano(int damage)
{
  int r = this->aleatorio(0, 100);
  if (r <= 97)
  {
    this->vida -= damage;
    std::cout << "Vida " << this->nombre << ": " << this->vida << std::endl;
  }
  else
  {
    std::cout << "Globulo bloqueo el ataque" << std::endl;
  }

};

int Globulo::getAgilidad()
{
  return this->agilidad;
};

int Globulo::aleatorio(int min, int max)
{
  return rand() % (max - min + 1) + min;
};

std::string Globulo::getNombre()
{
  return this->nombre;
};



Bacteria::Bacteria(std::string nombre)
{
  srand(time(NULL));
  this->nombre = nombre;
  this->vida = 1024;
  this->fuerza = rand() % 155 + 100;
  this->agilidad = rand() % 155 + 100;
  this->dureza = rand() % 155 + 100;
};

Bacteria::~Bacteria()
{
  std::cout << this->nombre <<" destruido" << std::endl;
};

int Bacteria::getVida()
{
  return this->vida;
};

int Bacteria::getDureza()
{
  return this->dureza;
};

int Bacteria::getAgilidad()
{
  return this->agilidad;
};

int Bacteria::atacar(Organismo* globulo)
{
  int ataque = ((this->fuerza + this->agilidad)/globulo->getDureza());
  std::cout << this->nombre <<" ataco con " << ataque << " de daño a " << globulo->getNombre() << std::endl;
  globulo->recibirDano(ataque);
  return ataque;
};

void Bacteria::recibirDano(int damage)
{
  int r = this->aleatorio(0, 100);
  if (r <= 97)
  {
    this->vida -= damage;
    std::cout << "Vida " << this->nombre << ": " << this->vida << std::endl;
  }
  else
  {
    std::cout << "Bacteria bloqueo el ataque" << std::endl;
  }

};

int Bacteria::aleatorio(int min, int max)
{
  return rand() % (max - min + 1) + min;
};

std::string Bacteria::getNombre()
{
  return this->nombre;
};
