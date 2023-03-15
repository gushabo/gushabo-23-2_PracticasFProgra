#include <iostream>

using namespace std;

int main()
{
    /*
    dire de antemano que este programa estara hecho con las patas
    /pq segun yo nomas son if's anidados y ps jaja eso esta medio x
    pero si eso es lo que me piden entonces XD, sera una historia corta jaja salu2
    */
    int resp, resp_;
    bool flag =  false;

    cout << "Esta es una historia narrativa entonces te narrare lo que sucede y te dare opciones" << endl;
    cout << "a traves de numeros tu solo coloca el numero que quieras y dale enter.... el programa esta pensado para que no te equivoques" << endl;
    system("pause");
    system("cls");

    cout << "Eres un adolescente de 17 anios el cual esta en casa de sus padres solo" << endl;
    cout << "son las 8 de la noche y mientras vez la tele cortan la transmision y avisan sobre personas que se volvieron locas" << endl;
    cout << "y que de la nada se volvieron agresivas... nadie sabe que esta pasando." << endl;
    cout << "En ese instante corres a marcarle a tus papas y ..." << endl;
    cout << "no contestan" << endl;
    cout << "despues de varios intentos, se corta la linea y pierdes la senial de todo, cable, radio, internet, TODO." << endl;
    cout << "de la nada escuchas sonidos fuera de casa y te escapas a tu cuarto, despues de cierto rato escuchas solo ruidos en el pasillo" << endl;
    cout << "segundos despues empiezan a golpear tu puerta fuertemente, como si la quisieran, tirar." << endl;
    do {
        cout << "que haces? 1.Preguntas quien es 2. abres la puerta 3. Agarras un trofeo que tienes en tu cuarto" << endl;
        flag = false;
        cin >> resp;
        cout << "" << endl;
        switch (resp)
        {
        case 1:
            cout << "Preguntas quien es y solo se intensifican los golpes en tu puerta" << endl;
            flag = true;
            break; //fin de la rama
        case 2:
            cout << "abres la puerta y entra tu madre llena de sangre que solo te abraza" << endl;
            cout << "le preguntas que que ha pasado pero no te contesta solamente se pone a llorar" << endl;
            cout << "intentas moverte para ver si es que tu padre esta con ella pero tu madre no te lo permite" << endl;
            cout << "despues de 5 minutos tu madre te platica sobre la situacion y que fueron atacados, que han visto lo que los hombres locos hacen" << endl;
            cout << "y que estos son resistentes a todo... ella ha visto como golpeaban a varios de ellos y nada los hacia morir....." << endl;
            cout << "Despues de que te platicara todo, te comenta las opciones que ella cree apropiadas" << endl;
            cout << "1. ir al centro comercial por comida" << endl;
            cout << "2. quedarse en la casa" << endl;
            cin >> resp;
            switch (resp)
            {
            case 1:
                cout << "han decidido ir al centro comercial por lo que corren hacia la cochera para tomar el coche" << endl;
                cout << "despues de un viaje bastante tranquilo al llegar ven que al parecer todos han tenido la misma idea" << endl;
                cout << "el centro comercial llena de gente la cual parece bastante alterada, robandose, pegandose, atacandose unos a otros" << endl;
                cout << "decides entrar con tu madre al centro comercial y deciden separarse tu buscaras armas y herramientas" << endl;
                cout << "y tu madre comida" << endl;
                cout << "corres por los pasillos esquivando a toda la gente posible, despues de un momento alguien te ataca, un hombre cuerdo" << endl;
                cout << "el cual al parecer intenta defender todo el pasillo por que se lo quiere quedar, corre directamente hacia ti" << endl;
                cout << "y tu ves un rifle detras de el y un martillo a tu lado... que haces" << endl;
                cout << "1. ir por el rifle 2. agarrar el martillo" << endl; // camino cerrado
                cin >> resp;
                switch (resp)
                {
                case 1:
                    cout << "has corrido por el rifle, intentando sortear al hombre que te ataca y dado a su gran complexion te agarra y te mata" << endl;
                    cout << "HAS MUERTO" << endl;
                    break; //camino cerrado
                case 2:
                    cout << "agarras el martillo rapidamente y le golpeas en la cabeza, te llenas de sangre y dado a shock te quedas parado sin hacer nada" << endl;
                    cout << "alguien te agarra de repente y ves que es tu madre, ella te grita y te dice que agarres el rifle y te vayas con ella" << endl;
                    cout << "despues de hacer lo que te pide escapan del centro comercial y llegan al coche, se dirigen a la casa de nuevo" << endl;
                    cout << "en la casa encuentran mucha gente atacando a los vecinos de manera descontrolada, comiendose los intestinos de los muertos" << endl;
                    cout << "en ese momento se viene la idea a tu cabeza ZOMBIEEEEEEEEEEES" << endl;
                    cout << "despues de haber visto tantas series y peliculas sobre esos temas crees estar preparado" << endl;
                    cout << "paran el coche y alguien te ataca. que usas?" << endl;
                    cout << "1. rifle 2. martillo" << endl;
                    cin >> resp;
                    switch (resp)
                    {
                    case 1:
                        cout << "has usado el rifle lo que atrajo a los demas, te rodearon y te mataron" << endl;
                        cout << "HAS MUERTO" << endl; // camino cerrado
                        break;
                    case 2:
                        cout << "usando el martillo, matas al primer enemigo, te vienes arriba el intentas matar a otros, poco a poco vas eliminandolos hasta que" << endl;
                        cout << "tu madre ve a tu padre, lo mata y ella al no poder con la carga se suicida... momentos despues lo vez y tu tambien te quitas la vida" << endl;
                        cout << "MUERTE POR DEPRESION" << endl; // camino cerrado
                        break;
                    default:
                        break;
                    }
                default:
                    break;
                }
                break;
            case 2:
                cout << "se han decidido quedarse en la casa... al poco tiempo, vez que llega tu padre caminando lentamente" << endl;
                cout << "se acerca poco a poco a tu madre y ella corre a abrazarlo, al hacerlo el le muerde el cuello y ves como tu madre se desangra" << endl;
                cout << "te quedas en shock y al poco tiempo tu madre se levanta y ves que se acercan hacia ti, sin esperanza en tu cuerpo dejas que se acerquen" << endl;
                cout << "y tus padres se alimentan de ti" << endl;
                cout << "MUERTE POR COMPASION" << endl; // camino cerrado
                break;
            default:
                break;
            }
        case 3:
            cout << "agarras el trofeo de tu cuarto, abres la puerta y atacas a quien entro de manera incontrolable... despues de haberle sacado hasta los sesos" << endl;
            cout << "decides observar quien era y descubres que era tu madre... despues de ver su cadaver por el shock tu mente te hace creer que no ha pasado nada" << endl;
            cout << "logras sobrevivir a todo y sobre el paso de los años... algunos sobrevivientes te encuentran comiendo en la mesa con el cadaver de tu madre sentado en el otro lado de la mesa" << endl;
            cout << "deciden terminar con tu vida por misericordia" << endl;
            cout << "HAS MUERTO... GRACIAS A DIOS" << endl;
        default:
            break;
        }
    } while (flag);


}
