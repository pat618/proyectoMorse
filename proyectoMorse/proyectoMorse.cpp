#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

void ALFA() { //Funcion para traducir un codigo morse a letras
    int entrado = 0;
    //Alfabeto Morse representado como un arreglo de strings
    string codigo[38] = { "*-","-***","-*-*","-**","*","**-*","--*","****","**","*---","-*-","*-**","--","-*","---","*--*","--*-","*-*","***","-","**-","***-","*--","-**-","-*--","--**","-*-*--","*----","**---","***--","****-","*****","-****","--***","---**","----*","-----", " " };

    cout << "Cuantos codigos quieres traducir: ";
    cin >> entrado;
    string morse = "";
    string letra = "";

    //Busca la correspondencia entre el codigo Morse ingresado y las letrasen el alfabeto Morse
    for (int i = 0; i < entrado; i++) {
        cout << "Entre el codigo " << i + 1 << ": ";
        cin >> morse;

        if (morse == codigo[0]) {
            PlaySound(L"C:\\Users\\patri\\source\\repos\\morse\\morse\\A_morse_code.wav", NULL, SND_FILENAME | SND_SYNC);
            letra += "A";
        }
        else if (morse == codigo[1]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\B_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "B";
        }
        else if (morse == codigo[2]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\C_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "C";
        }
        else if (morse == codigo[3]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\D_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "D";
        }
        else if (morse == codigo[4]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\E_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "E";
        }
        else if (morse == codigo[5]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\F_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "F";
        }
        else if (morse == codigo[6]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\G_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "G";
        }
        else if (morse == codigo[7]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\H_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "H";
        }
        else if (morse == codigo[8]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\I_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "I";
        }
        else if (morse == codigo[9]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\J_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "J";
        }
        else if (morse == codigo[10]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\K_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "K";
        }
        else if (morse == codigo[11]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\L_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "L";
        }
        else if (morse == codigo[12]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\M_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "M";
        }
        else if (morse == codigo[13]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\N_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "N";
        }
        else if (morse == codigo[14]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\O_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "O";
        }
        else if (morse == codigo[15]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\P_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "P";
        }
        else if (morse == codigo[16]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\Q_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "Q";
        }
        else if (morse == codigo[17]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\R_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "R";
        }
        else if (morse == codigo[18]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\S_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "S";
        }
        else if (morse == codigo[19]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\T_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "T";
        }
        else if (morse == codigo[20]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\U_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "U";
        }
        else if (morse == codigo[21]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\V_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "V";
        }
        else if (morse == codigo[22]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\W_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "W";
        }
        else if (morse == codigo[23]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\X_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "X";
        }
        else if (morse == codigo[24]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\Y_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "Y";
        }
        else if (morse == codigo[25]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\Z_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "Z";
        }
        else if (morse == codigo[26]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\Ñ_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "Ñ";
        }
        else if (morse == codigo[27]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\1_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "1";
        }
        else if (morse == codigo[28]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\2_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "2";
        }
        else if (morse == codigo[29]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\3_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "3";
        }
        else if (morse == codigo[30]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\4_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "4";
        }
        else if (morse == codigo[31]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\5_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "5";
        }
        else if (morse == codigo[32]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\6_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "6";
        }
        else if (morse == codigo[33]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\7_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "7";
        }
        else if (morse == codigo[34]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\8_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "8";
        }
        else if (morse == codigo[35]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\9_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "9";
        }
        else if (morse == codigo[36]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\0_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            letra += "0";
        }
        else if (morse == codigo[37]) //Si es un espacio
            letra += " "; // Añade un espacio en el morse

    }

    cout << letra << endl;
}
//Funcion para convertir la palabra(s) en codigo Morse
string mayusculas(string palabra) {
    for (int i = 0; i < palabra.length(); i++) {
        palabra[i] = toupper(palabra[i]);
    }
    return palabra;
}
//Funcion para convertir una palabra en codigo Morse
string palabrasAcodigo(string palabraEntrada) {
    string palabra = mayusculas(palabraEntrada);
    int largo = palabra.length();
    //Alfabeto Morse en un arreglo
    string alf[37] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "Ñ", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0" };
    string morse = "";
    //Busca la correspondencia entre la letra y su representacion en codigo Morse
    for (int i = 0; i < largo; i++) {
        string letra = palabra.substr(i, 1);

        if (letra == alf[0]) {
            PlaySound(L"C:\\Users\\patri\\source\\repos\\morse\\morse\\A_morse_code.wav", NULL, SND_FILENAME | SND_SYNC);
            morse += "*- ";
        }
        else if (letra == alf[1]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\B_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-*** ";
        }
        else if (letra == alf[2]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\C_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-*-* ";
        }
        else if (letra == alf[3]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\D_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-** ";
        }
        else if (letra == alf[4]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\E_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "* ";
        }
        else if (letra == alf[5]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\F_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "**-* ";
        }
        else if (letra == alf[6]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\G_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "--* ";
        }
        else if (letra == alf[7]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\H_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "**** ";
        }
        else if (letra == alf[8]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\I_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "** ";
        }
        else if (letra == alf[9]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\J_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "*--- ";
        }
        else if (letra == alf[10]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\K_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-*- ";
        }
        else if (letra == alf[11]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\L_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "*-** ";
        }
        else if (letra == alf[12]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\M_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-- ";
        }
        else if (letra == alf[13]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\N_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-* ";
        }
        else if (letra == alf[14]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\O_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "--- ";
        }
        else if (letra == alf[15]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\P_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "*--* ";
        }
        else if (letra == alf[16]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\Q_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "--*- ";
        }
        else if (letra == alf[17]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\R_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "*-* ";
        }
        else if (letra == alf[18]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\S_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "*** ";
        }
        else if (letra == alf[19]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\T_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "- ";
        }
        else if (letra == alf[20]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\U_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "**- ";
        }
        else if (letra == alf[21]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\V_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "***- ";
        }
        else if (letra == alf[22]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\W_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "*-- ";
        }
        else if (letra == alf[23]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\X_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-**- ";
        }
        else if (letra == alf[24]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\Y_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-*-- ";
        }
        else if (letra == alf[25]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\Z_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "--** ";
        }
        else if (letra == alf[26]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\Ñ_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-*-*-- ";
        }
        else if (letra == alf[27]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\1_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "*---- ";
        }
        else if (letra == alf[28]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\2_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "**--- ";
        }
        else if (letra == alf[29]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\3_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "***-- ";
        }
        else if (letra == alf[30]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\4_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "****- ";
        }
        else if (letra == alf[31]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\5_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "***** ";
        }
        else if (letra == alf[32]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\6_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "-**** ";
        }
        else if (letra == alf[33]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\7_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "--*** ";
        }
        else if (letra == alf[34]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\8_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "---** ";
        }
        else if (letra == alf[35]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\9_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "----* ";
        }
        else if (letra == alf[36]) {
            PlaySound(L"C:\\Users\\patri\\Downloads\\morse_code wav\\0_number_morse_code.ogg", NULL, SND_FILENAME | SND_SYNC);
            morse += "----- ";
        }
    }

    return morse;
}

int main() {//Menu principal, lo que ve el usuario
    int menuSalir, escoger;
    menuSalir = 0;

    while (menuSalir == 0) {
        system("cls");
        cout << "_____________________________________________________________" << endl;
        cout << "              BIENVENIDO A TRADUCTOR MORSE*" << endl;
        cout << "-------------------------------------------------------------" << endl;
        cout << "(1) Para traducir el morse" << endl;
        cout << "(2) Para convertir a morse" << endl;
        cout << "(3) Para salir" << endl;

        cin >> escoger;

        switch (escoger) {
        case 1:
            system("cls");
            ALFA();
            cout << "Ingrese 1 para salir, 0 para volver al Menu Principal: ";
            cin >> menuSalir;
            if (menuSalir == 1) {
                system("cls");
                menuSalir = 1;
                cout << "Gracias por utilizar Traductor Morse" << endl;
            }
            break;
        case 2:
        {
            system("cls");
            string palabraEntrada;
            cout << "Ingrese que desea traducir a Morse: ";
            cin.ignore();
            getline(cin, palabraEntrada);

            string morse = palabrasAcodigo(palabraEntrada);
            cout << "Lo traducido en Morse es: " << morse << endl;

            cout << "Ingrese 1 para salir, 0 para volver al Menu Principal: ";
            cin >> menuSalir;
            if (menuSalir == 1) {
                system("cls");
                menuSalir = 1;
                cout << "Gracias por utilizar Traductor Morse" << endl;
            }
        }
        break;
        case 3:
            system("cls");
            cout << "Gracias por utilizar Traductor Morse" << endl;
            menuSalir = 1;
            break;
        default:
            cout << "Error" << endl;
            menuSalir = 1;
            break;
        }
    }

    return 0;
}