#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"
#include "Melee.h"
#include "Flying.h"
#include "Range.h"
#include "Goomba.h"
#include "ChainChomp.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "HammerBro.h"
#include "Magikoopa.h"
#include "Equipo.h"

int main();

vector <Minion *> agregarMinion(vector <Minion *>);

void simulacion();

int main() {
  vector <Minion *> lista;
  vector <Equipo *> equipos;
  int opcion = 0;
  do {
    cout << "Bowser's Minions." << '\n'
         << "  1. Agregar a un secuaz" << '\n'
         << "  2. Agregar a un equipo" << '\n'
         << "  3. Modificar a un equipo" << '\n'
         << "  4. Simulador de batalla." << '\n'
         << "  5. Salir" << '\n'
         << "Ingrese una Opcion: ";
    cin >> opcion;
    if (opcion == 1) {
      lista = agregarMinion(lista);
    } else if (opcion == 2) {
      if (lista.size() >= 7) {
        int opcion2 = 0;
        cout << "Ingrese el nombre de este equipo: ";
        string nombre;
        cin >> nombre;
        equipos.push_back(new Equipo(nombre));
        for (int i = 0; i < 7; i++) {
          for (int j = 0; j < lista.size(); j++) {
            cout << j << '.' << lista[j]->getNombre() << endl;
          }
          cout << "Ingrese su opcion: ";
          cin >> opcion2;
          while (opcion2 < 0 || opcion2 > lista.size()) {
            cout << "Opcion invalida: ";
            cin >> opcion2;
          }
          equipos[equipos.size()-1]->addMinion(lista[opcion2]);
          lista.erase(lista.begin()+opcion2);
        }
        cout << "Equipo creado!" << '\n';
      } else {
        cout << "No hay secuaces para agregar." << '\n';
      }
    } else if (opcion == 3) {
      int pos1 = 0;
      for (int i = 0; i < equipos.size(); i++) {
        cout << i << '.' << equipos[i]->getNombre() << endl;
      }
      cout << "Ingrese el equipo a Modificar: ";
      cin >> pos1;
      while (pos1 < 0 || pos1 > lista.size()) {
        cout << "Opcion invalida: ";
        cin >> pos1;
      }
      int pos2 = 0;
      for (int i = 0; i < equipos[pos1]->getEquipo().size(); i++) {
        cout << i << '.' << equipos[pos1]->getEquipo()[i]->getNombre() << endl;
      }
      cout << "Ingrese el secuaz a cambiar: ";
      cin >> pos2;
      while (pos2 < 0 || pos2 > equipos[pos1]->getEquipo().size()) {
        cout << "Opcion invalida: ";
        cin >> pos2;
      }
      int pos3 = 0;
      for (int i = 0; i < lista.size(); i++) {
        cout << i << '.' << lista[i]->getNombre() << endl;
      }
      cout << "Ingrese el secuaz que remplazara: ";
      cin >> pos3;
      while (pos3 < 0 || pos3 > lista.size()) {
        cout << "Opcion invalida: ";
        cin >> pos3;
      }
      lista.push_back(equipos[pos1]->getEquipo()[pos2]);
      equipos[pos1]->getEquipo().erase(equipos[pos1]->getEquipo().begin()+pos2);
      equipos[pos1]->addMinion(lista[pos3]);
    } else if (opcion == 4) {
      simulacion();
    } else if (opcion == 5){
      /* code */
    } else {
      cout << "Opcion invalida." << '\n';
    }
  } while(opcion != 5);
  for (int i = 0; i < lista.size(); i++) {
    delete lista[i];
    lista.erase(lista.begin()+i);
  }
  for (int i = 0; i < equipos.size(); i++) {
      delete equipos[i];
      equipos.erase(equipos.begin()+i);
  }
  return 0;
}

vector <Minion *> agregarMinion(vector <Minion *> lista){
  cout << "Ingrese el nombre del secuaz: ";
  string nombre;
  cin >> nombre;
  int batalla = 0;
  int xp = 0;
  int hp,def,vel,fuerza,opcion;
  cout << "Ingrese cual tipo de secuaz quiere." << '\n'
       << "  1. Goomba" << '\n'
       << "  2. Chain Chomp" << '\n'
       << "  3. Boo" << '\n'
       << "  4. Paratroopa." << '\n'
       << "  5. Hammer Bro" << '\n'
       << "  6. Magikoopa" << '\n'
       << "Ingrese una Opcion: ";
  cin >> opcion;
  while (opcion < 1 || opcion > 6) {
    cout << "Opcion invalida: ";
    cin >> opcion;
  }
  if (opcion == 1) {
    int intimidar,size;
    cout << "Ingrese la capacidad de intimidar: ";
    cin >> intimidar;
    cout << "Ingrese el hp del Goomba: ";
    cin >> hp;
    while (hp < 20 || hp > 40) {
      cout << "Opcion invalida: ";
      cin >> hp;
    }
    def = 0;
    vel = 65;
    fuerza = 10;
    cout << "Ingrese el tamaño del Goomba: ";
    cin >> size;
    lista.push_back(new Goomba(nombre, batalla, xp, hp, def, vel, fuerza, intimidar ,size));
  } else if (opcion == 2) {
    int intimidar;
    cout << "Ingrese la capacidad de intimidar: ";
    cin >> intimidar;
    string color;
    cout << "Ingrese el hp del Chain Chomp: ";
    cin >> hp;
    while (hp < 10 || hp > 30) {
      cout << "Opcion invalida: ";
      cin >> hp;
    }
    def = 60;
    vel = 20;
    fuerza = 15;
    cout << "Ingrese el color del Chain Chomp: ";
    cin >> color;
    lista.push_back(new ChainChomp(nombre, batalla, xp, hp, def, vel, fuerza, intimidar ,color));
  } else if (opcion == 3) {
    int vuelo;
    cout << "Ingrese la habilad de vuelo: ";
    cin >> vuelo;
    string color;
    cout << "Ingrese el hp del Boo: ";
    cin >> hp;
    while (hp < 20 || hp > 40) {
      cout << "Opcion invalida: ";
      cin >> hp;
    }
    def = 20;
    vel = 35;
    fuerza = 8;
    cout << "Ingrese el color del Boo: ";
    cin >> color;
    lista.push_back(new Boo(nombre, batalla, xp, hp, def, vel, fuerza, vuelo ,color));
  } else if (opcion == 4) {
    int vuelo;
    cout << "Ingrese la habilad de vuelo: ";
    cin >> vuelo;
    string color;
    cout << "Ingrese el hp del Paratroopa: ";
    cin >> hp;
    while (hp < 40 || hp > 60) {
      cout << "Opcion invalida: ";
      cin >> hp;
    }
    def = 40;
    vel = 10;
    fuerza = 9;
    cout << "Ingrese el color del Paratroopa: ";
    cin >> color;
    lista.push_back(new Paratroopa(nombre, batalla, xp, hp, def, vel, fuerza, vuelo ,color));
  } else if (opcion == 5) {
    int rango,size;
    cout << "Ingrese el rango de ataque: ";
    cin >> rango;
    cout << "Ingrese el hp del Hammer Bro: ";
    cin >> hp;
    while (hp < 60 || hp > 80) {
      cout << "Opcion invalida: ";
      cin >> hp;
    }
    def = 0;
    vel = 65;
    fuerza = 10;
    cout << "Ingrese el tamaño de los martillos del Hammer Bro: ";
    cin >> size;
    lista.push_back(new HammerBro(nombre, batalla, xp, hp, def, vel, fuerza, rango ,size));
  } else {
    int rango;
    cout << "Ingrese el rango de ataque: ";
    cin >> rango;
    string color;
    cout << "Ingrese el hp del Magikoopa: ";
    cin >> hp;
    while (hp < 50 || hp > 70) {
      cout << "Opcion invalida: ";
      cin >> hp;
    }
    def = 0;
    vel = 65;
    fuerza = 10;
    cout << "Ingrese el color del traje del Magikoopa: ";
    cin >> color;
    lista.push_back(new Magikoopa(nombre, batalla, xp, hp, def, vel, fuerza, rango ,color));
  }
  return lista;
}

void simulacion(){

}
