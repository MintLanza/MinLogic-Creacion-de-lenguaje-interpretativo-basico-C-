#include "stg.h"
#include <iostream>
#include <vector>
using namespace std;
class console{ // clase par impresion de colores y texto segun su consola
private:
public:
    const char* Black = "\e[30m";
    const char* Red ="\e[31m";
    const char* Green2 ="\e[32m";
    const char* Yellow ="\e[33m";
    const char* Blue ="\e[34m";
    const char* Magenta ="\e[35m";
    const char* Cyan ="\e[36m";
    const char* White ="\e[37m";

// colores para el fondo de la consola
    const char* BG_Black ="\e[40m";
    const char* BG_Green ="\e[42m";
    const char* BG_Yellow ="\e[43m";
    const char* BG_Blue ="\e[44m";
    const char* BG_Magenta ="\e[45m";
    const char* BG_Cyan ="\e[46m";
    const char* BG_White ="\e[47m";

// formatos de letra
    const char* F_italics ="\e[3m";
    const char* F_transparent ="\e[8m";
    const char* F_Normal ="\e[0m";
    const char* F_Bold ="\e[1m";
    const char* F_Strikethrough ="\e[9m";
    const char* F_BlinkingText ="\e[5m";
    const char* sysOS = "linux"; 
    // imprimir texto
    void print(stg text){
        cout << text.get();
    }
    void print(long num){
        cout << num;
    }
}console;

// manejo de valors, su uso es para que no cree punteros que editen al programa asi, 
// esto evita errores pero igual mente el usuario porda hacer 
// lo que quiera con los punteros pero en otra funcion 
// VOT solo es un punteroBasico para la redaccion del programa del texto a que vamos analizar aqui se almacena
class VOT{
    private:
    long line = 0;
    std::vector<stg> xe;
    public:
        stg operator[](long id){
            return xe[id].get();
        }
        void add(stg date){
            xe.push_back(date);
        }
        void set(long id, const char* date){
            xe[id] = date;
        }
        void setLine(long linea){
            line = linea;
        }
        long size(){
            return xe.size();
        }
        long getline(){
            return line;
        }
        void clear(){xe.clear();};
        void clearID(long Id){ xe[Id] = "";}
};

const VOT opf;
std::vector<VOT> amlcc;
// aqui se almacenara todos los datos


// destilacion de VOT, mejor manejo de punteros, Tokens y todo, su functioon solo es guardar
