#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstring>
#include <cstdio>
#include <ctime>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;
#include "includes/prototipos.h"
#include "includes/visuales.h"
#include "includes/menues.h"
#include "includes/usuarios.h"
#include "includes/entrenamiento.h"
#include "includes/configuracion.h"
#include "includes/modeloParcial.h"

/// ADRIEL RASJIDO
/// ALAN VACA


int main(){
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(26,10,46,21);
    SetConsoleTextAttribute(hConsole, 7);
    MenuPrincipal();

    return 0;
}
