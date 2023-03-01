#pragma once
#include <string>

class Organismo
{
  public:
    virtual ~Organismo();
    virtual std::string getNombre()=0;
    virtual int getVida()=0;
    virtual int atacar(Organismo* o)=0;
    virtual void recibirDano(int d)=0;
    virtual int getAgilidad()=0;
    virtual int getDureza()=0;
  protected:
    virtual int aleatorio(int min, int max)=0;
    std::string nombre;
    int vida;
    int fuerza;
    int agilidad;
    int dureza;
};

class Globulo: public Organismo
{
  public:
    Globulo(std::string nombre);
    virtual ~Globulo();
    int getVida();
    int atacar(Organismo* bacteria);
    void recibirDano(int damage);
    std::string getNombre();
    int getAgilidad();
    int getDureza();
  private:
    int aleatorio(int min, int max);
    
};

class Bacteria: public Organismo
{
  public:
    Bacteria(std::string nombre);
    virtual ~Bacteria();
    int getVida();
    int atacar(Organismo* globulo);
    void recibirDano(int damage);
    std::string getNombre();
    int getAgilidad();
    int getDureza();

  private:
    int aleatorio(int min, int max);
};