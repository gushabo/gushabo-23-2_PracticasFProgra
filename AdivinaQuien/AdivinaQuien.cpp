#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

template<typename Map>
void PrintMap(Map& m)
{
    int i = 0;

    cout << "Te mostraremos varios juegos, deberas escoger uno por su numero y yo la maquina" << endl;
    cout << "tratare de adivinarlo... listo?" << endl << endl;
    for (auto& item : m) {
        i++;
        cout << item.first << ":" << item.second << " ";
        if (i == 3) { cout << "" << endl; i = 0; }
    }
    cout << endl << endl << "presiona ENTER cuando ya tengas el numero en tu cabeza" << endl;
    system("pause");
    system("cls");

}

template<typename Map>
void InsertarJuegos(Map& m)
{
    m[1] = "The last of us       ";
    m[2] = "Bioshock infinite    ";
    m[3] = "Hades                ";
    m[4] = "Binding of Isaac     ";
    m[5] = "Overwatch            ";
    m[6] = "Dishonored           ";
    m[7] = "GTA V                ";
    m[8] = "Project Zomboid      ";
    m[9] = "BloodBorne           ";
    m[10] = "Halo Reach           ";
    m[11] = "Elden ring           ";
    m[12] = "League of legends    ";
    m[13] = "Tunic                ";
    m[14] = "Blasphemous          ";
    m[15] = "Atomic heart         ";
    m[16] = "Sekiro               ";
    m[17] = "Hollow knight        ";
    m[18] = "Dark and darker      ";
    m[19] = "Witch it             ";
    m[20] = "Left 4 Dead          ";
}


int PrimerPregunta(int resp[])
{
    int intent;
    int numRand;
    system("cls");
    //jasjasjasjas las preguntas estan mal hechas y hay codigo repetido (esto lo deberia de cambiar)
    //pero ya llevo mas de la mitaaaaaaaaaaaaaaaaaaaaaaad aaaaaaaaaaahhhhhhhhhhhhhhhhh
    //nomas si me lo piden n.n

    cout << "el codigo esta hecho para creer que no te equivocaste poniendo tu respuesta :D" << endl;
    cout << "Tu numero es mayor a 10?(y = 1/n = 0)" << endl;
    cin >> resp[0];
    if (resp[0] == 1) 
    {
        cout << "tu numero es par?(y = 1/n = 0)" << endl;
        cin >> resp[1];
        cout << "tu numero es mayor a 15?(y = 1/n = 0)" << endl;
        cin >> resp[2];

        //respuestas 11, 13, 15
        if(resp[1] == 0 && resp[0] == 0) {
            cout << "puedo intentar adivinar tu juego entre 3 opciones... quieres que lo haga?(y = 1/n = 0)" << endl;
            cin >> intent;
            if (intent == 1)
            {
                numRand = rand() % 3;
                switch (numRand)
                {
                case 0: {
                    return 11;
                    break;
                }
                case 1: {
                    return 13;
                    break;
                }
                case 2: {
                    return 15;
                    break;
                }
                default:
                    break;
                }
            }

            cout << "Es sovietico?(y = 1/n = 0)" << endl;
            cin >> resp[3];
            if (resp[3] == 1) {
                return 15;
            }
            else {
                cout << "Es un juego de Miyazaki?(y = 1/n = 0)" << endl;
                cin >> resp[4];
                if (resp[4] == 1) {
                    return 11;
                }
                else { return 13; }
            }

        }

        //respuestas 12,14
        if (resp[1] == 1 && resp[2] == 0) {
            cout << "la comunidad de tu juego es super toxica?(y = 1/n = 0)" << endl;
            cin >> resp[3];
            if (resp[3] == 1) { return 12; }
            return 14;
        }

        //respuestas 17,19
        if (resp[1] == 0 && resp[2] == 1) {
            cout << "tu juego es de brujitas?(y = 1/n = 0)" << endl;
            cin >> resp[3];
            if (resp[3] == 1) {
                return 19;
            }
            else { return 17; }
        }
        //respuestas 16,18,20
        if (resp[2] == 1 && resp[1] == 1) {
            cout << "puedo intentar adivinar tu juego entre 3 opciones... quieres que lo haga?(y = 1/n = 0)" << endl;
            cin >> intent;
            if (intent == 1)
            {
                numRand = rand() % 3;
                switch (numRand)
                {
                case 0: {
                    return 16;
                    break;
                }
                case 1: {
                    return 18;
                    break;
                }
                case 2: {
                    return 20;
                    break;
                }
                default:
                    break;
                }
            }
            cout << "Es considerado una obra maestra?(y = 1/n = 0)" << endl;
            cin >> resp[3];
            if (resp[3] == 1) {
                return 16; 
            }
            else {
                cout << "Es un juego viejito?(y = 1/n = 0)" << endl;
                cin >> resp[4];
                if (resp[4] == 1) {
                    return 20;
                }
                else { return 18; }
            }
        }
    }
    else {

        cout << "tu numero es par?(y = 1/n = 0)" << endl;
        cin >> resp[1];
        if (resp[1] == 1)
        {
            cout << "tu numero es mayor a 5?(y = 1/n = 0)" << endl;
            cin >> resp[2];

            if (resp[2] == 1)
            {
                // en este punto solo puede ser 6,8 y 10 XD
                cout << "puedo intentar adivinar tu juego entre 3 opciones... quieres que lo haga?(y = 1/n = 0)" << endl;
                cin >> intent;
                if (intent == 1)
                {
                    numRand = rand() % 3;
                    switch (numRand)
                    {
                        case 0: {
                            return 6;
                            break;
                        }
                        case 1: {
                            return 8;
                            break;
                        }
                        case 2: {
                            return 10;
                            break;
                        }
                        default: {
                            break; 
                        }
                    }
                }

                cout << "tu juego es de mundo abierto?(y = 1/n = 0)" << endl;
                cin >> resp[3];
                if (resp[3] == 1)
                {
                    return 8;
                }
                else { 
                    cout << "tu juego es un shooter?(y = 1/n = 0)" << endl;
                    cin >> resp[4];
                    if (resp[4] == 1) {
                        return 10;
                    }
                    else { return 6; }
                }
            }
            else {
                // en este punto solo puede ser 2 u 4
                cout << "puedo intentar adivinar tu juego entre 2 opciones... quieres que lo haga?(y = 1/n = 0)" << endl;
                cin >> intent;
                if (intent == 1)
                {
                    numRand = rand() % 2;
                    if (numRand == 0)
                    {
                        return 2;
                    }
                    else { return 4; }
                }

                cout << "tu juego es de una trilogia?(y = 1/ n = 0)" << endl;
                cin >> resp[3];
                if (resp[3] == 1) 
                {
                    return 2;
                }
                else { return 4; }
            }


        }
        else {
            cout << "tu numero es mayor a 5?(y = 1/n = 0)" << endl;
            cin >> resp[2];

            if (resp[2] == 1) {
                // en este punto solo puede ser 7, 9 
                cout << "puedo intentar adivinar tu juego entre 2 opciones... quieres que lo haga?(y = 1/n = 0)" << endl;
                cin >> intent;
                if (intent == 1)
                {
                    numRand = rand() % 2;
                    if (numRand == 0) {
                        return 7;
                    }
                    else { return 9; }
                }

                cout << "tu juego es de tipo souls?(y = 1/n = 0)" << endl;
                cin >> resp[3];
                if (resp[3] == 1) {
                    return 9;
                }
                else { return 7; }
            }
            else {
                cout << "puedo intentar adivinar tu juego entre 3 opciones... quieres que lo haga?(y = 1/n = 0)" << endl;
                cin >> intent;
                if (intent == 1)
                {
                    numRand = rand() % 3;
                    switch (numRand) {
                    case 0: {
                        return 1;
                        break;
                    }
                    case 1: {
                        return 3;
                        break;
                    }
                    case 2: {
                        return 5;
                        break;
                    }
                    default: {
                        break;
                    }
                    }
                }
                else {
                    cout << "es un shooter?(y = 1/n = 0)" << endl;
                    cin >> resp[3];
                    if (resp[3] == 1) 
                    {
                        cout << "es un survival horror?(y = 1/n = 0)" << endl;
                        cin >> resp[4];
                        if (resp[4] == 1) { return 1; }
                        return 5;
                    }
                    else { return 3; }
                }
            }
        }
    }

}


int main()
{
    int resp[5];
    map<int, string> map;
    int NumDJuego;

    /*
    * resp[1] = x... me lo marca mal : b nmms
    * lo hice por pruebas pero pq chotas me lo da mal? por no ser un puntero?...
    * resp[0] == "y" tampoco me deja pq al parecer no son del mismo tipo
    * te odio C++
    */

    InsertarJuegos(map);
    PrintMap(map);
    NumDJuego = PrimerPregunta(resp);

    cout <<  NumDJuego << ": " << map[NumDJuego];
    system("pause");

    return 0;
}

