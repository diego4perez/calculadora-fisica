#include <iostream>
#include <windows.h> //para Sleep y system
#include <chrono> //para el tiempo
#include <cmath> //para raices, sen y cos
using namespace std;

void bienvenida(){ cout << R"(
 ______ __                                 __     __         __
|   __ \__|.-----.-----.--.--.-----.-----.|__|.--|  |.-----.|  |
|   __ <  ||  -__|     |  |  |  -__|     ||  ||  _  ||  _  ||__|
|______/__||_____|__|__|\___/|_____|__|__||__||_____||_____||__|
)" << endl;
};

void despedida(){ cout << R"(
 _______               __              __                           __
|   |   |.---.-.-----.|  |_.---.-.    |  |.--.--.-----.-----.-----.|  |
|       ||  _  |__ --||   _|  _  |    |  ||  |  |  -__|  _  |  _  ||__|
|___|___||___._|_____||____|___._|    |__||_____|_____|___  |_____||__|
                                                      |_____|
=============Programa hecho por: Diego Perez Chanquin==================
)" << endl;
};

void menu(){
    cout << "========================================" << endl;
    cout << " 1. Calculadora de MRUV" << endl;
    cout << " 2. Calculadora de Caida Libre y Tiro Vertical" << endl;
    cout << " 3. Calculadora de Tiro Parabolico" << endl;
    cout << " 4. Salir" << endl;
    cout << "========================================" << endl;
    cout << "Seleccione una opcion: " << endl;
};

void menumruv(){
    cout << "========================================" << endl;
    cout << " 1. Calculadora de Aceleracion, Formula: a = (Vf - Vo)/t" << endl;
    cout << " 2. Calculadora de Velocidad Final, Formula: Vf = Vo + at" << endl;
    cout << " 3. Calculadora de Distancia, Formula: x = (Vo + Vf)/2 * t" << endl;
    cout << "========================================" << endl;
    cout << "Seleccione una opcion: " << endl;
};

void menucaidalibre(){
    cout << "========================================" << endl;
    cout << " 1. Calculadora de Velocidad Final, Formula: Vf = Vo +- gt" << endl;
    cout << " 2. Calculadora de Altura, Formula: h = Vot +- 1/2gt^2" << endl;
    cout << " 3. Calculadora de Velocidad Final, Formula: Vf^2 = Vo^2 +- 2gh" << endl;
    cout << " 4. Calculadora de Altura, Formula: h = (Vo + Vf)/2 * t" << endl;
    cout << "========================================" << endl;
    cout << "Seleccione una opcion: " << endl;
};

void menutiroparabolico(){
    cout << "========================================" << endl;
    cout << " 1. Calculadora de Componente en X de la Velocidad Inicial, Formula: Vox = Vo * cos0" << endl;
    cout << " 2. Calculadora de Componente en X de la Velocidad Inicial, Formula: Voy = Vo * sen0" << endl;
    cout << " 3. Calculadora de Desplazamiento Horizontal, Formula: x = Voxt" << endl;
    cout << " 4. Calculadora de Componente en Y de la Velocidad Final, Formula: Vfy = Voy - gt" << endl;
    cout << " 5. Calculadora de Desplazamiento Vartical, Formula: yf = yo + Voyt - 1/2gt^2" << endl;
    cout << " 6. Calculadora de Desplazamiento Vertical, Formula: yf = yo + 1/2(Vy + Voy)t" << endl;
    cout << " 7. Calculadora de Componente en Y de la Velocidad Final, Formula: Vfy^2 = Voy^2 - 2g(yf - yo)" << endl;
    cout << "========================================" << endl;
    cout << "Seleccione una opcion: " << endl;
};

void animacionmruv(int avance) {
    for (int i = 0; i < avance; i++) { //repite tantas veces como sea de grande la distancia

        system("cls");

        for (int j = 0; j < i; j++) { //repite hasta que j sea igual a i
            cout << " "; //escribe un espacio para simular movimiento de izquierda a derecha
        }

        cout << "                       ____________________" << endl; //dibuja una linea de la figura despues de escribir el espacio

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "                     //|           |        \\" << endl;

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "                   //  |           |          \\" << endl;

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "      ___________//____|___________|__________()\\__________________" << endl;

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "    /__________________|_=_________|_=___________|_________________{}" << endl;

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "    [           ______ |           | .           | ==  ______      { }" << endl;

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "  __[__        /##  ##\\|           |             |    /##  ##\\    _{# }_" << endl;

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << " {_____)______|##    ##|___________|_____________|___|##    ##|__(______}" << endl;

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "                ##__##                                 ##__##        " << endl;

        Sleep(100); //velocidad de la animacion
    }
};

void animacioncaidalibre(int descenso) {
    //repite tantas veces como necesite caer
    for (int i = 0; i < descenso; i++) {

    system("cls");

        //imprime una linea desplazando lo demas hacia abajo
    for (int j = 0; j < i; j++) {
        cout << "         |" << endl;
    }
        cout << "         |" << endl;
        cout << "        (_)" << endl;
        cout << "      <--|-->" << endl;
        cout << "     _   |   _" << endl;
        cout << "    `\\__/ \\__/`" << endl;
        cout << "      `-. .-'" << endl;
        cout << "         '" << endl;

    Sleep(100);
    }
};

void animaciontirovertical(int ascenso) {
    //repite el proceso 15 veces
    for (int i = 0; i < 15; i++) {

        system("cls");

        //aparece el objeto hasta 15 enters abajo
        for (int j = 0; j < ascenso; j++) {
            cout << endl;
        }

        cout << "        ____" << endl;
        cout << "      .'    '." << endl;
        cout << "     /'-....-'\\" << endl;
        cout << "     |        |" << endl;
        cout << "     \\.-''''-./" << endl;
        cout << "      '.____.'" << endl;

        ascenso -= 1; //borra un enter cada que llega al final del ciclo

        Sleep(100);
    }
}

void animaciontiroparabolico(int parabola) {
    //define una variable que sube y baja el objeto
     int direccion = 1;

    //repite el proceso 30 veces; la mitad para subir y para bajar
    for (int i = 0; i < 30; i++) {
    system("cls");

        //el objeto comienza hasta 15 enters abajo
        for (int j = 0; j < parabola; j++) {
            cout << endl;
        }

        //imprime varios espacios para mover el objeto a la derecha
        for (int j = 0; j < i; j++) {
            cout << "   ";
        }

        //imprime una linea del objeto
        cout << "        _.-=::=-._ " << endl;

        for (int j = 0; j < i; j++) {
            cout << "   ";
        }

        cout << "      .'\\\\-++++-//'." << endl;

        for (int j = 0; j < i; j++) {
            cout << "   ";
        }

        cout << "     (  ||      ||  )" << endl;

        for (int j = 0; j < i; j++) {
            cout << "   ";
        }

        cout << "      './/      \\\\.'" << endl;

        for (int j = 0; j < i; j++) {
            cout << "   ";
        }

        cout << "        `'-=..=-'`" << endl;

        //determina si el objeto se encuentra en su altura maxima o su altura minima
        if (parabola == 15 || parabola == 0) {
            //cambia para ir hacia arriba o hacia abajo en caso se cumpla la condicion
            direccion *= -1;
        }
        //suma o resta un enter para subir o bajar
        parabola += direccion;

        Sleep(100);
    }

};

int main() {
    //variables para el switch
    int opcion1;
    int opcion2;
    int opcion3;
    int opcion4;

    //variable para elegir tipo de gravedad
    char opciongravedad;

    //variables para calcular
    double velocidadfinal = 0;
    double velocidadinicial = 0;
    double tiempo = 0;
    double aceleracion = 0;
    double resultado = 0;
    double altura = 0;
    double grado = 0;
    double posicioninicial = 0;
    double posicionfinal = 0;
    const double gravedadpos = 9.8;
    const double gravedadneg = -9.8;
    const double pi = acos(-1); //define pi para poder transformar los radianes a grados

    //variable booleana para salir
    bool opcionsalir = true;

    //ciclo while para repetir el proceso
    while (opcionsalir == true) {
        system("cls"); //limpia la consola
    bienvenida(); //llama a una funcion void para deplegar la bienvenida
    menu(); //llama a una funcion void para deplegar el menu
    cin >> opcion1;
    switch (opcion1) { //elige una opcion recibida por el teclado

        //-----------------------------mruv--------------------------------------------------------
        case 1: {
                menumruv(); //llama al void para dibujar el menu
                cin >> opcion2;

            switch (opcion2) {
                case 1: {

                    //-------------------aceleracion------------------

                    cout << "Introduzca la velocidad final en m/s: " << endl;
                    cin >> velocidadfinal;
                    cout << "Introduzca la velocidad inicial en m/s:" << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    resultado = (velocidadfinal - velocidadinicial) / tiempo; //calcula el resultado

                    double contador = velocidadinicial * tiempo + 0.5 * resultado * tiempo * tiempo; //calcula la distancia con los datos
                    int caminar = contador; //transforma la variable contador en int para utilizarla en el bucle for de la animacion

                    //establece un limite en caso de utilizar numeros demasiado grandes
                    if (contador > 150) {
                        caminar = 150;
                    }

                    animacionmruv(caminar); //llama a la funcion de la animacion y utiliza la variable para determinar el movimiento a la derecha

                    cout << "El carro recorrio una distancia de: " << contador << " metros." << endl;
                    cout << "El resultado de la aceleracion es: " << resultado << " m/s^2" << endl;
                    system("pause"); //esto sirve para que el usuario tenga que pulsar enter para continuar
                }
                    break;
                case 2: {

                    //-------------------velocidad final--------------------------------

                    cout << "Introduzca la velocidad inicial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca la aceleracion en m/s^2:" << endl;
                    cin >> aceleracion;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    resultado = velocidadinicial + aceleracion * tiempo;

                    double contador = velocidadinicial * tiempo + 0.5 * aceleracion * tiempo * tiempo;
                    int caminar = contador;

                    if (contador >= 150) {
                        caminar = 150;
                    }

                    animacionmruv(caminar);

                    cout << "El carro recorrio una distancia de: " << contador << " metros." << endl;
                    cout << "El resultado de la velocidad final es: " << resultado << " m/s" << endl;
                    system("pause");
                }
                    break;
                case 3: {

                    //----------------------distancia--------------------------------

                    cout << "Introduzca la velocidad inicial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca la velocidad final en m/s:" << endl;
                    cin >> velocidadfinal;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    resultado = ((velocidadinicial + velocidadfinal) / 2) * tiempo;

                    int caminar = resultado;

                    if (resultado >= 150) {
                        caminar = 150;
                    }

                    animacionmruv(caminar);

                    cout << "El carro recorrio una distancia de: " << resultado << " metros." << endl;
                    system("pause");
                }
                    break;

                default: {
                    //este caso es si el usuario no elige una de las opciones predeterminadas
                    cout << "Introduzca una opcion valida por favor." << endl;
                }
            }
        }
            break;
            //-----------------------------caida libre y tiro vertical---------------------------------------------
            case 2: {

            menucaidalibre();
            cin >> opcion3;

            switch (opcion3) {
                case 1: {
                    //-----------------------------velocidad final---------------------------------------------
                    cout << "Usar ecuacion para tiro vertical para convertir la gravedad en negativa? (S/N): " << endl;
                    cin >> opciongravedad;
                    cout << "Introduzca la velocidad inicial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    //verifica que el usuario haya tecleado s para decidir que tipo de gravedad y animacion usar
                    if (opciongravedad == 's' || opciongravedad == 'S' ) {
                        resultado = velocidadinicial + gravedadneg * tiempo;
                    }
                    else {
                        resultado = velocidadinicial + gravedadpos * tiempo;
                    }

                    double contador = (velocidadinicial + velocidadfinal) / 2 * tiempo;
                    int bajar = contador;

                    if (contador >= 15) {
                        bajar = 15;
                    }
                    //cambia resultado y animacion para tiro vertical
                    if (opciongravedad == 's' || opciongravedad == 'S' ) {
                        animaciontirovertical(bajar);
                        cout << "La pelota subio una altura de: " << contador << " metros." << endl;
                        cout << "El resultado de la velocidad final es: " << resultado << " m/s." << endl;
                        system("pause");
                    }
                    //cambia resultado y animacion para caida libre
                    else {
                        animacioncaidalibre(bajar);
                        cout << "El ancla cayo una altura de: " << contador << " metros." << endl;
                        cout << "El resultado de la velocidad final es: " << resultado << " m/s." << endl;
                        system("pause");
                    }

                }break;

                case 2: {
                    //-----------------------------altura---------------------------------------------
                    cout << "Usar ecuacion para tiro vertical para convertir la gravedad en negativa? (S/N): " << endl;
                    cin >> opciongravedad;
                    cout << "Introduzca la velocidad inicial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    if (opciongravedad == 's' || opciongravedad == 'S' ) {
                        resultado = velocidadinicial * tiempo + 0.5 * gravedadneg * tiempo * tiempo;
                    }
                    else {
                        resultado = velocidadinicial * tiempo + 0.5 * gravedadpos * tiempo * tiempo;
                    }

                    int bajar = resultado;

                    if (resultado >= 15) {
                        bajar = 15;
                    }

                    if (opciongravedad == 's' || opciongravedad == 'S' ) {
                        animaciontirovertical(bajar);
                        cout << "La pelota subio una altura de: " << resultado << " metros." << endl;
                        system("pause");
                    }
                    else {
                        animacioncaidalibre(bajar);
                        cout << "El ancla cayo una altura de: " << resultado << " metros." << endl;
                        system("pause");
                    }
                } break;

                case 3: {
                    //-----------------------------velocidad final 2---------------------------------------------
                    cout << "Usar ecuacion para tiro vertical para convertir la gravedad en negativa? (S/N): " << endl;
                    cin >> opciongravedad;
                    cout << "Introduzca la velocidad inicial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca la altura en metros: " << endl;
                    cin >> altura;
                    if (opciongravedad == 's' || opciongravedad == 'S' ) {
                        //sqrt para raiz cuadrada
                        resultado = sqrt(velocidadinicial * velocidadinicial + 2 * gravedadneg * altura);
                    }
                    else {
                        resultado = sqrt(velocidadinicial * velocidadinicial + 2 * gravedadpos * altura);
                    }

                    int bajar = altura;

                    if (altura >= 15) {
                        bajar = 15;
                    }

                    if (opciongravedad == 's' || opciongravedad == 'S' ) {
                        animaciontirovertical(bajar);
                        cout << "La pelota subio una altura de: " << altura << " metros." << endl;
                        cout << "El resultado de la velocidad final es: " << resultado << " m/s." << endl;
                        system("pause");
                    }
                    else {
                        animacioncaidalibre(bajar);
                        cout << "El ancla cayo una altura de: " << altura << " metros." << endl;
                        cout << "El resultado de la velocidad final es: " << resultado << " m/s." << endl;
                        system("pause");
                    }
                } break;

                case 4: {
                    //-----------------------------altura 2---------------------------------------------
                    cout << "Introduzca la velocidad inicial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca la velocidad final en m/s:" << endl;
                    cin >> velocidadfinal;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    resultado = ((velocidadinicial + velocidadfinal) / 2) * tiempo;

                    int bajar = resultado;

                    if (resultado >= 15) {
                        bajar = 15;
                    }

                    animacioncaidalibre(bajar);

                    cout << "El ancla cayo una altura de: " << resultado << " metros." << endl;
                    system("pause");

                } break;

                default: {
                    cout << "Introduzca una opcion valida por favor." << endl;
                }
            }

        }
            break;
            //-----------------------------tiro parabolico---------------------------------------------
            case 3: {
            menutiroparabolico();
                cin >> opcion4;

            switch (opcion4) {
                case 1: {
                    //-----------------------------componente en x de la velocidad inicial---------------------------------------------
                    cout << "Introduzca la velocidad incial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el angulo en grados: " << endl;
                    cin >> grado;
                    grado = grado * (pi / 180); //transforma radianes a grados usando la formula grad = rad * (pi / 180)
                    resultado = velocidadinicial * cos(grado);
                    int tiro = 15;

                    animaciontiroparabolico(tiro);

                    cout << "El resultado de la componente en x de la velocidad inicial es: " << resultado << " m/s." << endl;
                    system("pause");
                } break;
                case 2: {
                    //-----------------------------componente en y de la velocidad inicial---------------------------------------------
                    cout << "Introduzca la velocidad incial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el angulo en grados: " << endl;
                    cin >> grado;
                    grado = grado * (pi / 180);
                    resultado = velocidadinicial * sin(grado);
                    int tiro = 15;

                    animaciontiroparabolico(tiro);

                    cout << "El resultado de la componente en x de la velocidad inicial es: " << resultado << " m/s." << endl;
                    system("pause");
                } break;
                case 3: {
                    //-----------------------------desplazamiento horizontal---------------------------------------------
                    cout << "Introduzca la componente en x de la velocidad inicial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el tiempo: " << endl;
                    cin >> tiempo;
                    resultado = velocidadinicial * tiempo;
                    int tiro = 15;

                    animaciontiroparabolico(tiro);

                    cout << "El desplazamiento horizontal del balon es de: " << resultado << " metros." << endl;
                    system("pause");
                } break;
                case 4: {
                    //-----------------------------componente en y de la velocidad final---------------------------------------------
                    cout << "Introduzca la componente en y de la velocidad incial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    resultado = velocidadinicial + gravedadneg * tiempo;
                    int tiro = 15;

                    animaciontiroparabolico(tiro);

                    cout << "El resultado de la componente en y de la velocidad final es: " << resultado << " m/s." << endl;
                    system("pause");
                } break;
                case 5: {
                    //-----------------------------desplazamiento vertical---------------------------------------------
                    cout << "Introduzca la posicion vertical incial en metros: " << endl;
                    cin >> posicioninicial;
                    cout << "Introduzca la componente en y de la velocidad incial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    resultado = posicioninicial + velocidadinicial * tiempo + 0.5 * gravedadneg * tiempo * tiempo;
                    int tiro = 15;

                    animaciontiroparabolico(tiro);

                    cout << "El desplazamiento vertical del balon es de: " << resultado << " metros." << endl;
                    system("pause");
                } break;
                case 6: {
                    //-----------------------------desplazamiento vertical 2---------------------------------------------
                    cout << "Introduzca la posicion vertical incial en metros: " << endl;
                    cin >> posicioninicial;
                    cout << "Introduzca la componente en y de la velocidad final en m/s: " << endl;
                    cin >> velocidadfinal;
                    cout << "Introduzca la componente en y de la velocidad incial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    resultado = posicioninicial + 0.5 * (velocidadfinal + velocidadinicial) * tiempo;
                    int tiro = 15;

                    animaciontiroparabolico(tiro);

                    cout << "La posicion horizontal final del balon es de: " << resultado << " metros." << endl;
                    system("pause");
                } break;
                case 7: {
                    //-----------------------------componente en y de la velocidad final 2---------------------------------------------
                    cout << "Introduzca la componente en y de la velocidad incial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca el desplazamiento vertical en metros: " << endl;
                    cin >> posicionfinal;
                    cout << "Introduzca la posicion vertical incial en metros: " << endl;
                    cin >> posicioninicial;
                    resultado = sqrt(velocidadinicial * velocidadinicial + 2 * gravedadneg * (posicionfinal - posicioninicial));
                    int tiro = 15;

                    animaciontiroparabolico(tiro);

                    cout << "El resultado de la componente en y de la velocidad final es: " << resultado << " m/s." << endl;
                    system("pause");
                } break;

                default: {
                    cout << "Introduzca una opcion valida por favor." << endl;
                }
            }
        }
            break;
            //-----------------------------salir---------------------------------------------------------
            case 4: {
                opcionsalir = false; //sale del programa
                despedida();
            }
            break;
            //------------------------------default-----------------------------------------------------
        default: {
            cout << "Introduzca una opcion valida por favor." << endl;
        }
    }

    };

    return 0;
}