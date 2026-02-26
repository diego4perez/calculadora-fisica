#include <iostream>
#include <windows.h> //para Sleep y system
#include <chrono> //para el tiempo
using namespace std;

void menu(){
    cout << "========================================" << endl;
    cout << " 1. Calculadora de MRUV" << endl;
    cout << " 2. Calculadora de Tiro Parabolico" << endl;
    cout << " 3. Calculadora de Caida Libre" << endl;
    cout << " 4. Salir" << endl;
    cout << "========================================" << endl;
    cout << "Seleccione una opcion: " << endl;
};

void menumruv(){
    cout << "========================================" << endl;
    cout << " 1. Calculadora de Aceleracion, Formula: (vf - vo)/t" << endl;
    cout << " 2. Calculadora de Velocidad Final, Formula: vo + at" << endl;
    cout << " 3. Calculadora de Distancia, Formula: ((vo + vf)/2) * t" << endl;
    cout << "========================================" << endl;
    cout << "Seleccione una opcion: " << endl;
};

int main() {
    //variables para el switch
    int opcion1;
    int opcion2;

    //variables para calcular
    double velocidadfinal = 0;
    double velocidadinicial = 0;
    double tiempo = 0;
    double aceleracion = 0;
    double resultado = 0;

    //variable booleana para salir
    bool opcionsalir = true;

    //ciclo while para repetir el proceso
    while (opcionsalir == true) {
        system("cls"); //limpia la consola
    cout << "Bienvenido a la calculadora de fisica!" << endl; //mejorar mensaje de bienvenida
    menu(); //llama a una funcion void para deplegar el menu
    cin >> opcion1;
    switch (opcion1) { //elige una opcion recibida por el teclado
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
                    resultado = (velocidadfinal - velocidadinicial) / tiempo;

                    double contador = velocidadinicial * tiempo + 0.5 * resultado * tiempo * tiempo; //calcula la distancia con los datos
                    int caminar; //define la variable para la animacion
                    caminar = contador; //transforma la variable contador en int para utilizarla en el bucle for de la animacion

                    //establece un limite en caso de utilizar numeros demasiado grandes
                    if (contador >= 150) {
                        caminar = 150;
                    }

                    for (int i = 0; i < caminar; ++i) { //repite tantas veces como sea de grande la distancia

                        system("cls");

                        for (int j = 0; j < i; ++j) { //repite hasta que j sea igual a i
                            cout << " "; //escribe un espacio para simular movimiento de izquierda a derecha

                        }
                        cout << "    _____,,;;;`;" << endl; //dibuja una linea de la figura despues de escribir el espacio

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << " ,~(  )  , )~~\\|" << endl;

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << " ' / / --`--," << endl;

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << "  /  \\    | '" << endl;

                        Sleep(100); //velocidad de la animacion
                    }

                    cout << "El caballo recorrio una distancia de: " << contador << " metros." << endl;
                    cout << "El resultado de la aceleracion es: " << resultado << " m/s2" << endl;
                    system("pause"); //esto sirve para que el usuario tenga que pulsar cualquier tecla para continuar
                }
                    break;
                case 2: {
                    //-------------------velocidad final--------------------------------
                    cout << "Introduzca la velocidad inicial en m/s: " << endl;
                    cin >> velocidadinicial;
                    cout << "Introduzca la aceleracion en m/s2:" << endl;
                    cin >> aceleracion;
                    cout << "Introduzca el tiempo en segundos: " << endl;
                    cin >> tiempo;
                    resultado = velocidadinicial + aceleracion * tiempo;

                    double contador = velocidadinicial * tiempo + 0.5 * aceleracion * tiempo * tiempo;
                    int caminar;
                    caminar = contador;

                    if (contador >= 150) {
                        caminar = 150;
                    }

                    cout << caminar << endl;

                    for (int i = 0; i < caminar; ++i) {

                        system("cls");

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << "    _____,,;;;`;" << endl;

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << " ,~(  )  , )~~\\|" << endl;

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << " ' / / --`--," << endl;

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << "  /  \\    | '" << endl;

                        Sleep(100);
                    }

                    cout << "El caballo recorrio una distancia de: " << contador << " metros." << endl;
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

                    int caminar;
                    caminar = resultado;

                    if (resultado >= 150) {
                        caminar = 150;
                    }

                    cout << caminar << endl;

                    for (int i = 0; i < caminar; ++i) {

                        system("cls");

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << "    _____,,;;;`;" << endl;

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << " ,~(  )  , )~~\\|" << endl;

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << " ' / / --`--," << endl;

                        for (int j = 0; j < i; ++j) {
                            cout << " ";

                        }
                        cout << "  /  \\    | '" << endl;

                        Sleep(100);
                    }

                    cout << "El caballo recorrio una distancia de: " << resultado << " metros." << endl;
                    system("pause");
                }
                    break;

                default: //este caso es si el usuario no elige una de las opciones predeterminadas
                    cout << "Elija una opcion valida por favor." << endl;
            }
        }
            case 2: {

        }
            break;
            case 3: {

        }
            break;
            case 4: {
                opcionsalir = false; //sale del programa nota: meter mensaje de despedida
            }
            break;
    }
    };


    return 0;
}