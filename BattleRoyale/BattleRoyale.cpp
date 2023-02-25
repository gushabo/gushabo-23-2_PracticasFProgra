#include <iostream>
#include <list>

using namespace std;

//Clase de cada arma y sus respectivos atributos
class objetos {
public:
    string nombre;
    float objDmg;
};

//Clase de cada jugador y sus respectivos atributos
class jugador {
public:
    string name;
    int vida;
    float dmg;
    int evasion;
    objetos obj;
};

//Se crean los objetos para tenerlos predefinidos
void CreacionObjetos(objetos o[]) {
    o[0] = {"palo", 1.5};
    o[1] = {"martillo", 1.7 };
    o[2] = {"bate", 2};
}

//Se le agregan los atributos a los personajes de manera manual por el hecho del nombre
//Aunque se podrian traer de una base de datos y hacer mas corto el codigo
//aparte del nombre los demas atributos son de manera aleatoria
void CreacionJugadores(jugador p[], objetos o[]) {
    
    p[0].name = "Gustavo";
    p[1].name = "Juan Pa";
    p[2].name = "Leon";
    p[3].name = "Milko";
    p[4].name = "Bryan";
    p[5].name = "Daniel";
    p[6].name = "Joel";
    p[7].name = "Jorge";
    p[8].name = "Josue";
    p[9].name = "Julio Cesar";
    p[10].name = "Julio";
    p[11].name = "Karen";
    p[12].name = "Mauricio";
    p[13].name = "Rodrigo";

    for (int i = 0; i < 14; i++) {
        p[i].vida = rand() % 100 + 1;
        p[i].dmg = rand() % 10 + 1;
        p[i].evasion = rand() % 7;
        p[i].obj = o[rand() % 3];
    }
   
}

//Impresion de cada uno de los jugadores
void Comienzo(jugador p[]) {
    cout << "vamos a simular un battle royale en pura consola con personajes con diferentes caracteristicas" << endl;
    cout << "Estos son los personajes junto con sus caracteristicas" << endl << endl;
    for (int i = 0; i < 14; i++) {
        cout << "Jugador " << i + 1 << ": " << p[i].name << " vida: " << p[i].vida << " ataque: " << p[i].dmg << " evasion: " << p[i].evasion << endl;
        cout << "tiene un " << p[i].obj.nombre << " que le da un multiplicador de " << p[i].obj.objDmg << " de ataque" << endl;
        cout << endl;
    }

    system("pause");
}

void ProcesoDelJuego(jugador p[]) {

    bool Dflag = false, pFlag = false;
    int aux[2];
    int deaths[13];
    int veces = 0;
    int roundWinner;
    int roundLosser;

    for (int i = 0; i < 13; i++) {
        deaths[i] = -1;
    }
    system("cls");

    cout << "Se inicia el juego y los jugadores se dispersan.... al cabo de las horas" << endl;
    //ciclo de pelea hasta que todos se mueran
    do {
        system("cls");
        //ciclo de seleccion de personajes para cada pelea
        do {
            pFlag = false;
            aux[0] = rand()% 14;
            for (int i = 0; i < 13; i++) {
                if (aux[0] == deaths[i]) {
                    pFlag = true;
                }
            }
            aux[1] = rand() % 14; 
            for (int i = 0; i < 13; i++) {
                if (aux[1] == deaths[i] || aux[1] == aux[0]) {
                    pFlag = true;
                }
            }
        } while (pFlag == true);

        cout << p[aux[0]].name << " se encuentra con " << p[aux[1]].name << " y pelean" << endl;
        //caracteristacas de cada personaje al momento de empezar a pelear
        for (int i = 0; i < 2; i++) {
            cout << endl;
            cout << "Caracteristicas de " << p[aux[i]].name << endl;
            cout << "vida: " << p[aux[i]].vida << "  ataque: " << p[aux[i]].dmg << endl;
            cout << "evasion: " << p[aux[i]].evasion << "  objeto: " << p[aux[i]].obj.nombre << endl;
        }

        //pelea
        int prob_;
        bool muerte = false;
        int turno;
        do {
            turno = rand() % 2;
            prob_ = rand() % 10;
            if (prob_ <= p[aux[turno]].evasion) {
                //ataca
                switch (turno)
                {
                case 0: {
                    //se le resta la vida al jugador 1, el 0 esta atacando
                    p[aux[1]].vida -= (p[aux[0]].dmg * p[aux[0]].obj.objDmg);

                    //si es que su vida se baja a 0 se agrega a la lista de muertos
                    if (p[aux[1]].vida <= 0) {
                        deaths[veces] = aux[1]; 
                        muerte = true;
                        roundWinner = aux[0];
                    }
                    break;
                }
                case 1: {
                    //se le resta la vida
                    p[aux[0]].vida -= (p[aux[1]].dmg * p[aux[1]].obj.objDmg);
                    //si es que su vida se baja a 0 se agrega a la lista de muertos
                    if (p[aux[0]].vida <= 0) {
                        deaths[veces] = aux[0];
                        muerte = true;
                        roundWinner = aux[1];
                    }
                    break;
                }
                default:
                    break;
                }
            }
  
        } while (!muerte);
        cout << "la pelea ha terminado y el ganador es: " << p[roundWinner].name << ", " << p[deaths[veces]].name << " ha muerto " << endl;

        veces++;

        system("pause");
    // se repetira el proceso de las peleas hasta que todos menos 1 hayan muerto
    } while (deaths[12] == -1); //12

    system("cls");

    cout << "El ganador es " << p[roundWinner].name << " y se quedo con " << p[roundWinner].vida << " de vida" << endl;

    system("pause");
 
}


int main()
{
    objetos obj[3];
    jugador players[14];
    CreacionObjetos(obj);
    CreacionJugadores(players, obj);
    Comienzo(players);
    ProcesoDelJuego(players);
    
}

