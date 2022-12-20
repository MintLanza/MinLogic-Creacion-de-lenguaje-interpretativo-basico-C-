#include "lib.h"
#include <vector>
using namespace std;
#define w10(holap) while(true){holap n += 1;} // corre por los caracter funcion mut importante para la redaccion, esto simplifica wl while y eleccione numerica no elimine

/*
    Porfavor no elimine este texto, solo añada lo que va escribir despues de esto
    recuerda que adueñarse del codigo es malo, disfruta. 

   Prueba básica de creación de lenguaje de programación interpretativo en C++

    lenguajes de programación a diferencia de este cargar línea por línea y guardar en vértices cada función,
    el archivo pero no para complicarme,
     Lo uso en una cadena stg de stg.h que me permite obtener los caracteres de una localidad
        para errores de impresión
    /Advertencia, no elimine este comentario!!!!/
        ..
   ::7777/    .   \\
    7*777777\     77777s\          creado por @MintLanza
       77*777777/ /7777_777/s/      librario(stg v2)
        7*7777777777s/''  '           github: https://github.com/MintLanza
        /7777777s  ______               creado por: MintLanza
       /7777s       s77iP           programacion en : c++
       \77777777///77ii/            
         \777777777                 


    // añada comentario: 

        --comentario
*/

const char* credit = R"(
    Prueba básica de creación de lenguaje de programación interpretativo en C++

lenguajes de programación a diferencia de este cargar línea por línea y guardar en vértices cada función,
    el archivo pero no para complicarme,
     Lo uso en una cadena stg de stg.h que me permite obtener los caracteres de una localidad
        para errores de impresión

        ..
   ::7777/    .   \\
    7*777777\     77777s\          creado por @MintLanza
       77*777777/ /7777_777/s/      librario(stg v2)
        7*7777777777s/''  '           github: https://github.com/MintLanza
        /7777777s  ______               creado por: MintLanza
       /7777s       s77iP           programacion en lenguage: c++ >:/
       \77777777///77ii/            
         \777777777                 
)";

// estas funciones  basicamente es para analizar nombre de las funciones y valores, llamadas y funciones del systema
// verifica caracteres comunes
bool isFont(char character){
    try{
    if((character >= 65 && character <= 90) || (character >= 97 && character <= 122)){
        return true;
    }
    }catch(const std::exception& e){
        return false;
    }
    
    return false;
}
bool FontIsNumber(char character){
    try{
    if(character == 48 || 48 < character && character < 58 || character == 57){
        return true;
    }
    }catch(const std::exception& e){
        return false;
    }
    return false;
}
bool FontINum(char character){
    try{
    if(isFont(character) || FontIsNumber(character)){
        return true;
    }
    }catch(const std::exception& e){
        return false;
    }
    return false;
}

// lee el texto, encargado de almacenar  los diferentes tipos de texto segun sus functiones y tipo de caractereres
class Mint{
    private:
    public:
    const VOT opf;
std::vector<VOT> amlcc;
     class TOKEN{
        private:
        public:
        char AllOperarLex[18] = {
            '+', // suma de datos 
            '-', // detro de VL o Pr resta de datos
            '*', // multiplicacion
            '/', // division
            '(', // ()
            ')', // ()
            '\"', // "texto"
            '\'', // 'texto'
            ',', // salto de nueva creacion ,
            ':', // valor : dato
            '=',
            '!',
            '%',
            '^'
        };
        char OperatorlexSum[10] = {
            '+', // suma de datos 
            '-', // detro de VL resta de datos
            '*', // multiplicacion
            '/', // division
            '%',
            '^',
            '!'
        };
        char OperatorlexISFun[2] = {'(', '['};
        char OperatorlexISFunNeg[2] = {')', ']'};
        char OperatorlexIS[2] = {':', '='};
        char OpSelectClass[2] = {'.', '>'};
        char skipForLine = '\n';
        char EndCallFunction = ';';
        char Salto = ' ';
        char DecimalNum = '.';
        char Red[2] = {'\'', '"'};
        char Skip = '\\';
        bool VrfCartI(char funn[], char caracter){
            long n = 0;
            w10(
                if(funn[n] == 0){
                    return false;;
                }
                if(funn[n] == caracter){
                    break;
                }
            )
            return true;
        }
     }TOKEN;
    void printSpaceFun(long locationError){
        for (size_t i = 0; i < locationError; i++){
            console.print(" ");
        }
        
    }
    void conduction(long line, long n, stg e, stg msg){ // aqui se imprime los errores
        console.print(console.Magenta);
        console.print("$ [l:");
        console.print(line);
        console.print(", n:");
        console.print(n);
        console.print("]\n   Code:  "); 
        console.print(e);
        console.print("\n");
        printSpaceFun(9+e.length());
        console.print(console.Yellow);
        console.print("|*Error\n");
        console.print(console.White);
        console.print(msg);
        console.print("\n\n");
        exit(-1);
    }
    __attribute__((optimize("O0"), noinline));
    const char* getTop(stg e, long &n, long &linea){
        long tmp = n-1;
        long tmpI = 0;
        w10(
            if(e[n] == '\0' || e[n] == 0){
                n -= 1;
                tmpI = n;
                break;
            }else if(e[n] == '\n'){
                n -= 1;
                tmpI = n;
                break;
            }else if(e[n] == ' '){
                n -= 1;
                tmpI = n;
                break;   
            }else if(TOKEN.VrfCartI(TOKEN.OpSelectClass, e[n])){   
            }else if(TOKEN.VrfCartI(TOKEN.AllOperarLex, e[n]) || e[n] == TOKEN.EndCallFunction){
                 n -= 1;
                 tmpI = n;
                 break;
            }else if(!FontINum(e[n])){
                conduction(linea, n, e.getLoc(tmp,n), "Este caracter no es una funcion para la creacion de valores, porfavor solo caracteres comunet a-z 0-9");
            }
        )
        return e.getLoc(tmp+1, tmpI);
    }
    __attribute__((optimize("O0"), noinline));
    const char* getTopSer(stg e, long &n, long &linea){
        bool prm = 0;
        long tmp = n;
        if(e[n] == TOKEN.Red[0]){
            prm = 0;
        }else{
            prm = 1;
        }
        n += 1;
        w10(
            if(e[n] == '\0' || e[n] == 0){
                conduction(linea, n, e.getLoc(tmp,n), " La finalidad de este campo no tiene finalidad añada un \"/' porfavor, para permitir la buena redaccion del campo");
            }else if(e[n] == TOKEN.Red[0] && prm == 0 || e[n] == TOKEN.Red[1] && prm == 1){
                break;
            }else if(e[n] == '\\'){
                n+= 1;
            }else if(e[n] == '\n'){
                linea += 1;
            }
        )
        return e.getLoc(tmp, n);
    }
 __attribute__((optimize("O0"), noinline));
    const char* getTopNum(stg e, long &n, long &linea){
        long tmp = n;
        long tmpI = 0;
        w10(
            if(e[n] == '\0' || e[n] == 0){
                n -= 1;
                tmpI = n;
                break;
            }else if(e[n] == '\n'){
                n -= 1;
                tmpI = n;
                break;
            }else if(e[n] == ' '){
                n -= 1;
                tmpI = n;
                break;   
            }else if(e[n] == TOKEN.DecimalNum){

            }else if(TOKEN.VrfCartI(TOKEN.AllOperarLex, e[n]) || e[n] == TOKEN.EndCallFunction){
                 n -= 1;
                 tmpI = n;
                 break;
            }else if(!FontIsNumber(e[n])){
                conduction(linea, n, e.getLoc(tmp,n), "Este numero no es una funcion para la creacion de valores numericos, porfavor solo caracteres comunet 0-9");
            }
        )
        return e.getLoc(tmp, n);
    }

    __attribute__((optimize("O0"), noinline));
    void autoOrderIO(stg e){ // redactor separa las funciones e operadores del texto para guardardo en el vector facilita la reddacion para conversion en logica        
        long n = 0;
        long linea = n;
        long locN = 0;
        long id = 0; // numero de almecenamiento predeterminado segun el texto
        bool prm = 0;
        amlcc.push_back(opf);
        w10(
            if(e[n] == '\0' || e[n] == 0 || e[n] == 1){
                break;
            }else if(e[n] == '\n'){
                linea += 1;
                locN = n;
                if(prm == 1){
                    amlcc.push_back(opf);
                    id += 1;
                    amlcc[id].setLine(linea);
                }
                prm = 0;
            }else if(e[n] == ' '){
            }else if(TOKEN.VrfCartI(TOKEN.Red, e[n])){
                prm = 1;
                amlcc[id].add(getTopSer(e,n, linea));
            }else if(TOKEN.VrfCartI(TOKEN.AllOperarLex, e[n])){
                prm = 1;
                amlcc[id].add(e.getLoc(n,n));
            }else if(isFont(e[n])){
                prm = 1;
                amlcc[id].add(getTop(e,n, linea));
            }else if(FontIsNumber(e[n])){
                prm = 1;
                amlcc[id].add(getTopNum(e,n,linea));
            }else{
                conduction(linea, n, e.getLoc(locN, n), "este caracter no esta permitido");
            }
        )
    }

    void condition(long linea, stg texto,stg msg){
        console.print(console.Cyan);
        console.print(" => Error de pronostico: ");
        console.print(" [l:");
        console.print(linea);
        console.print("]\n");
        console.print("    >> ");
        console.print(console.Yellow);
        console.print(texto);
        console.print("\n");
        console.print(console.White);
        console.print(msg);
        console.print("\n\n");
        exit(-1); // podria simplificarlo pero los parametros de stg le faltan funciones, + tiene errores causado por c++
    }

    class FUNC{
        public:
        const char* sysVal[4] = {"val", "value", "var", "stg"};

        bool IS(vector<VOT> io, long ida, long l, const char* sys[]){
            long n = 0;
            w10(
                if(sys[n] == "\0" || sys[n] == 0){
                    return false;
                }
                if(io[ida][l].IS(sys[n])){
                    return true;
                }
            )
            return false;
        }
    }FUNC;
    
    bool FUCKNum(long n1, long n2){
        if(n1 == n2){
            return true;
        }
        if(n1 < n2){
            return true;
        }
        return false;
    }
      void Lanza(stg date){
        autoOrderIO(date);
         for (size_t ida = 0; ida < amlcc.size()-1; ida++){
            long loc = amlcc[ida].size(); // consigue la localidad de la lina que esta leyendo
            if(FUNC.IS(amlcc,ida,0,FUNC.sysVal)){ // creacion de funcion del sistema, verifica el primer parametro de la linea
                if(FUCKNum(loc, 1)){ // ver si el valor coincide con los nombre puestos en FUNC
                    condition(amlcc[ida].getline(), amlcc[ida][0], " esta funcion no tiene parametros"); // error, se solicita por lo menos 2 argumentos
                }else{
                    if(FUCKNum(loc,2)){ // ve si despues de los 2 parametros hay mas o no
                        cout << " unico:" << amlcc[ida][2].get();
                    }else{ // puedes crear alguna funcion para almacenar los valores que te dan cada parametros por ejemplo si tienes un objedo dentro de este parametro añadelo a una lista para que despues de otra llamada de eta funciones se puede añadir el valor dado tal como: int x = 9; int y = x + 1;
                        cout << " no unico:" << amlcc[ida][2].get();
                    }
                }
            } // añada otras funciones
        }
    }
}; 
