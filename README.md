[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10279484&assignment_repo_type=AssignmentRepo)
# Lab_03_POO

Hacer un programa y su die帽o de clases, que simule la batalla entre gl贸bulos 馃└ y bacterias 馃, que se encuentran dentro de los organos de una persona
Las caracter铆sticas del programa son las siguientes.

La Persona tiene 6 Organos, los cuales son
+ Cerebro
+ Coraz贸n
+ Pulmones
+ Est贸mago
+ H铆gado 
+ Ri帽on

La Persona puede tener de 1 a 6 bacterias ( definir en el constructor cuantas bacterias) 

Las bacterias y los gl贸bulos  son organismos y tienen las siguientes caracter铆sticas 
+ Las bacterias tienen 1024 unidades de vida, a diferencia de los gl贸bulos que deben de tener 512 unidades.
+ Las bacterias y los gl贸bulos tienen 3 atributos, fuerza, agilidad y dureza, estos atributos se inicializan de manera aleatoria entre el rango de [100 a 255]
+ Las bacterias as铆 como los gl贸bulos pueden atacar y defender
+ Las bacterias se pueden mover de organo de manera aleatoria
+ Cada gl贸bulo  habita un organo, por lo que solamente hay 6 gl贸bulos
+ Las bacterias realizan su da帽o de la siguiente manera $$da帽o = (fuerza+dureza)/globulo.agilidad$$
+ Los gl贸bulos realizan su da帽o de la siguiente manera $$da帽o = (fuerza+agilidad)/bacteria.dureza$$
+ Defender para ambos, significa que tienen una probabilidad del 3% a que mitiguen todo el da帽o causado en ese momento.

Dependiendo de que organo se encuentren peleando, los turnos de ataque cambian
+ Para Cerebro y Coraz贸n, hay una probabilidad del 50% de que ataque la bacteria o ataque el gl贸bulo.
+ Para Pulmones y Estomago, la bacteria tiene 80% de atacar.
+ Para H铆gado y Ri帽on, el gl贸bulo tiene 80% de atacar.
+ Si el gl贸bulos de dicho organo esta muerto, la bacteria no pelea.
+ Si la bacteria se muere, ya no es necesario, mostrar sus movimientos y ataques.

El programa debe de mostrar el nombre de la bacteria y a que organo se movi贸, Tambien debe mostrar contra que gl贸bulo esta peliando y el da帽o que hacen ya sea el gl贸bulo o la bacteria.

Tambien debe de mostrar la vida actual de las bacterias asi como la de los gl贸bulos 

La simulaci贸n se acaba cuando se mueran todas las bacterias o todos los gl贸bulos y al final el programa debe de decir quien gan贸 

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

