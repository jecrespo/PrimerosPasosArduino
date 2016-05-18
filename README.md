# PrimerosPasosArduino

Ejemplo paso a paso para los que empiezan con Arduino

|Paso/Commit|Tarea|Errores Detectados|
|---|---|---|
|1|Leer el pin digital 7 y es 0 enciendo el led intergado en el pin 13, sino lo apago|Se ve parpadear o reducir la luminosidad del led cuando el pin está al aire no conectado a GND o 5V|
|2|Poner el pin 7 en modo INPUT_PULLUP|Ahora si no hay nada conectado está apagado y poner el pin 7 a masa se enciende el led|
|3|Simulando la lectura de un relé, sacar por puerto serie **ALARMA** cuando ponga GND el pin 7|Manda alarma continuamente no al detectar un cambio en el estado|
|4|Añadir una variable con el estado de alarma y compararlo el estado anterior para madar **ALARMA** o **RECUPERACION ALARMA**|Se observan rebotes|
|5|Añadir un delay de 100ms al final del loop|**¡¡FUNCIONA!!**|

###Conclusión
Cuando quiero detectar cambios de estado debo guardar en una variable el estado y comparar con el estado actual y cuando hay un cambio ejecuto la acción correspondiente.

No es necesario hacer digitalWrite en cada loop, es mejor hacerlo cuando se detecte el cambio de estado que lo dispara

###Pasos dados y cambios en el código
https://github.com/jecrespo/PrimerosPasosArduino/commits/master
