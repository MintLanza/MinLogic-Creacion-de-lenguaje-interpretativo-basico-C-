# MinLanza Creacion de lenguaje de programacion interpretativo Basico

Esto es en un programa que le permite crear su propio lenguaje interpretativo con simplicidad,
MODIFICAR A ELECCIÓN, NO POSEER EL CÓDIGO.

Este prgorama fue probado en Windows y Linux:
  > linux
  ```
  La funcionalidad es correcta, aunque en algunos casos de ordenadores en más de ocasión 
    Esto envía errores fantasmas, errores que no deberían ser, aunque muchos de estos ya han sido parcheados.
    Es muy poco probable que te toque... (Cusante: memoria, la gestión de memoria a veces falla y ocupa la localidad n +1 (fantasma))
        Los mensajes de error en la próxima actualización se manejarán mejor.
   ```
   
   > Windows
   ```
   En este sistema hay una falta de mejoras en los vectores, en algunos compiladores como G++ trabajas bien en Sí,
   Si quieres usarlo aquí empieza a parchearlos y no olvides enviarlo para su revisión, este código es para la comunidad
   ```
   
   se que este programa no es como los grandes de la programacion que teiene una redaccion mejor del programa
   pero algo es algo y para llegar a la meta ayudanos :)
  
  
 
  la lectura de todo radica en:
  ``` 
   void Lanza(stg date){
        autoOrderIO(date);
         for (size_t ida = 0; ida < amlcc.size()-1; ida++){
            long loc = amlcc[ida].size(); // condige la localidad de la lina que esta leyendo
            if(FUNC.IS(amlcc,ida,0,FUNC.sysVal)){ // creacion de funcion del sistema, verifica el primer parametro de la linea
                if(FUCKNum(loc, 1)){ // ver si el valor coincide con los nombre puestos en FUN 
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
``````
    
    
     Si tienes alguna pregunta sobre el codigo no dudes en comentar o comunicarme 
       > Proxima actualizacion incluira: 
       .* logica dentro de llamadas a funciones:
         ``` 
          val res : "hola " + 10 * 11; res +: 12;
         resultado:
          hola 122
         ``` 
         .* logica dentro de funciones:
       ``` 
          def res(val a1 +: 1){
            res a1;
          } 
          a1(2)
          
          resultados:
           3
         ```
         
         
