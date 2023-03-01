[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10279484&assignment_repo_type=AssignmentRepo)
# Lab_03_POO

Hacer un programa y su dieño de clases, que simule la batalla entre glóbulos 🩸 y bacterias 🦠, que se encuentran dentro de los organos de una persona
Las características del programa son las siguientes.

La Persona tiene 6 Organos, los cuales son
+ Cerebro
+ Corazón
+ Pulmones
+ Estómago
+ Hígado 
+ Riñon

La Persona puede tener de 1 a 6 bacterias ( definir en el constructor cuantas bacterias) 

Las bacterias y los glóbulos  son organismos y tienen las siguientes características 
+ Las bacterias tienen 1024 unidades de vida, a diferencia de los glóbulos que deben de tener 512 unidades.
+ Las bacterias y los glóbulos tienen 3 atributos, fuerza, agilidad y dureza, estos atributos se inicializan de manera aleatoria entre el rango de [100 a 255]
+ Las bacterias así como los glóbulos pueden atacar y defender
+ Las bacterias se pueden mover de organo de manera aleatoria
+ Cada glóbulo  habita un organo, por lo que solamente hay 6 glóbulos
+ Las bacterias realizan su daño de la siguiente manera $$daño = (fuerza+dureza)/globulo.agilidad$$
+ Los glóbulos realizan su daño de la siguiente manera $$daño = (fuerza+agilidad)/bacteria.dureza$$
+ Defender para ambos, significa que tienen una probabilidad del 3% a que mitiguen todo el daño causado en ese momento.

Dependiendo de que organo se encuentren peleando, los turnos de ataque cambian
+ Para Cerebro y Corazón, hay una probabilidad del 50% de que ataque la bacteria o ataque el glóbulo.
+ Para Pulmones y Estomago, la bacteria tiene 80% de atacar.
+ Para Hígado y Riñon, el glóbulo tiene 80% de atacar.
+ Si el glóbulos de dicho organo esta muerto, la bacteria no pelea.
+ Si la bacteria se muere, ya no es necesario, mostrar sus movimientos y ataques.

El programa debe de mostrar el nombre de la bacteria y a que organo se movió, Tambien debe mostrar contra que glóbulo esta peliando y el daño que hacen ya sea el glóbulo o la bacteria.

Tambien debe de mostrar la vida actual de las bacterias asi como la de los glóbulos 

La simulación se acaba cuando se mueran todas las bacterias o todos los glóbulos y al final el programa debe de decir quien ganó 

## Debe de utilizar interfaces o clases abstractas para el uso del polimorfismo.
## Lo mas probable es que le salga error de redunancia circular, para esos casos nomas con declarar la clase que causa redundancia al inicio se arregla

por ejemplo
A la mejor la clase de organo ocupa de la clase de organismos y a su vez organismos ocupa de la clase de organos, lo mas probable es que salga error por declaraciones circulares, para arreglar eso seria 
```c++
/*Organo.hpp*/
#include "Organismo.hpp"
class Organismo;
class Organo
{
  /*cuerpo de la clase*/
}
```
y en organismos igual

```c++
/*Organismo.hpp*/
#include "Organo.hpp"
class Organo;
class Organismo
{
  /*cuerpo de la clase*/
}
```

Ejemplo Corriendo

<img width="433" alt="image" src="https://user-images.githubusercontent.com/32945442/220854545-b1a344b9-f885-492f-b22b-bed8c90f1710.png">

<img width="433" alt="image" src="https://user-images.githubusercontent.com/32945442/220855795-a2689240-0a7e-4710-884c-8be2a5a3f61a.png">

