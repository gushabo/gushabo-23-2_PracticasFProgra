#include <iostream>

using namespace std;

//Creacion de clase para guardar sus atributos
class Pokemon {
public:
    int ID = 0;
    string name;
    int attack = 0;
    int life = 0;
    int maxHealt = 0;
    float prob = 0;
};

/*
    Usare variables globales para evitarme la paja de hacer paso por referencia
    en las funciones aunque seria lo mas optimo. (lo importante es que sirve dicen por ahi)
*/

//Se crea un arreglo de 3 pokemons que son los que usaremos
Pokemon pokemons[3];

int resp;
int pokemonMalo;
int numPociones = 3, pocionesMalas = 3;

void EscogerPokemon() {

    cout << "Elige tu pokemon (Escribiendo el numero)" << endl;
    cout << "1.Charmander   ataque: 10 vida: 30 probabilidad de hit: 50%" << endl;
    cout << "2.Pichu        ataque: 17 vida: 15 probabilidad de hit: 30%" << endl;
    cout << "3.Ratata       ataque: 5 vida: 35 probabilidad de hit: 70%" << endl;
    cin >> resp;
    resp = resp - 1;
    system("cls");
    //escoge un numero random dentro de los parametros del arreglo
    //si no esta dentro de los parametros se repite
    //En teoria no deberia jamas de estar fuera de los parametros pero por si acaso :D
    while (pokemonMalo > 2 || pokemonMalo < 0) {
        pokemonMalo = rand() % 3;
    }
    cout << "Pelearas contra " << pokemons[pokemonMalo].name << endl;
    cout << "LISTO?" << endl;
    system("pause");
    system("cls");

}

void Pelea() {

    int accion;
    int prob;
    bool flag = true;
    int curar = 30 * pokemons[pokemonMalo].maxHealt / 100;
    int prob_;

    cout << "Antes de iniciar recuerda que tienes 3 pociones de vida" << endl;
    cout << "y recuerda... disfruta de este chico proyecto :b" << endl;

    while(pokemons[resp].life > 0 || pokemons[pokemonMalo].life > 0) {
        system("cls");
        while (flag) {
            cout << "                 TU TURNO" << endl;
            cout << "tus puntos de vida: " << pokemons[resp].life << endl;
            cout << "puntos de vida del enemigo: " << pokemons[pokemonMalo].life << endl;
            cout << "que haras?(Recuerda responder con numeros)" << endl << "1. Atacar" << endl << "2. Curarte" << endl;
            cin >> accion;
            if (accion == 1 || accion == 2) {
                if (accion == 1)
                {
                    prob = rand() % 10 + 1;
                    if (prob <= pokemons[resp].prob) {
                        pokemons[pokemonMalo].life -= pokemons[resp].attack;
                        cout << "has hecho " << pokemons[resp].attack << " puntos de daño" << endl;
                        if (pokemons[pokemonMalo].life <= 0) { cout << "HAS GANADO" << endl; return; }
                    }
                    else {
                        cout << "has fallado tu ataque" << endl;
                    }
                    flag = false;
                }
                if (accion == 2) {
                    if (numPociones > 0) {
                        cout << "te has curado 15 de vida" << endl;
                        pokemons[resp].life += 15;
                        if (pokemons[resp].life > pokemons[resp].maxHealt) {
                            pokemons[resp].life = pokemons[resp].maxHealt;
                        }
                        flag = false;
                        numPociones--;
                    }
                    else {
                        cout << "ya no te quedan pociones" << endl;
                    }

                }
            }
        
            system("pause");
            system("cls");
        }
        flag = true;

        cout << "                 TURNO ENEMIGO" << endl;
        cout << "tus puntos de vida: " << pokemons[resp].life << endl;
        cout << "puntos de vida del enemigo: " << pokemons[pokemonMalo].life << endl;
        if (pokemons[pokemonMalo].life <= curar && pocionesMalas > 0) {
            prob_ = rand() % 2;
            if (prob_ == 1) {
                cout << "el enemigo se ha curado 15 puntos de vida" << endl;
                pokemons[pokemonMalo].life += 15;
                if (pokemons[pokemonMalo].life > pokemons[pokemonMalo].maxHealt) {
                   pokemons[pokemonMalo].life = pokemons[pokemonMalo].maxHealt;
                }
                pocionesMalas--;
            }
        }
        else {
            prob_ = rand() % 10 + 1;
            if (prob_ <= pokemons[pokemonMalo].prob) {
                cout << "enemigo ataco " << endl;
                pokemons[resp].life -= pokemons[pokemonMalo].attack;
                cout << "el enemigo ha hecho " << pokemons[pokemonMalo].attack << "puntos de daño" << endl;
                if (pokemons[resp].life <= 0) { cout << "HAS PERDIDO" << endl; return; }
            }
            else {
                cout << "el enemigo ha fallado su ataque" << endl;
            }
        }
        system("pause");

    }

}

int main()
{
    //Rellenar los datos de los tres pokemones existentes
    pokemons[0] = { 1,"Charmander", 10, 30, 30, 5};
    pokemons[1] = { 2,"Pichu", 17, 15, 15, 3};
    pokemons[2] = { 1,"Ratata", 5, 35, 35 , 7};
    //llamada a la funcion para escoger nuestro pokemon
    EscogerPokemon();
    //llamada a la funcion de pelea desde esta funcion
    Pelea();
    system("pause");

    return 0;
}

