# DATOS ALUMNO

+ Nombre de la materia: Sistemas Operativos

+ Nombre de la actividad: Proyecto llamadas a sistema

+ Competencia a la que impacta: Diseño de programas de software.

+ Nombre del alumno: Luis Ricardo Espinoza

+ Grupo: Grupo 1

+ Fecha: 31 - 03 - 2019

# Objetivo

Comprender el funcionamiento de las llamadas a sistema y cómo se implementan en xv6

# Conceptos aplicados
+ Apliqué el concepto de cómo crear una nueva llamada de sistemas desde 0

+ También pude entender mejor como funcionan los apuntadores porque por ejemplo: el método para calcular el tiempo cmostime no regresa nada. Tu le das un apuntador a y la función primero crea un nuevo apuntador al objeto. A ese objeto le pone el tiempo. Finalmente iguala el apuntador que le diste a el nuevo objeto que la función hizo.

+ Apliqué los conceptos de llamadas a sistema.

# ¿Que aprendí durante el desarrollo del proyecto?

## Parte 1
+ Aprendí como crear un arreglo de strings en C.

+ Aprendí que por alguna razón en syscal.c no se puede hacer un printf normal. Cuando se intenta incluir los archivos en donde se declara la función de printf hay conflictos de el exit(). Mi teoría es que en esa librearía también se declara la función exit() y ambas hacen cosas diferentes.

## Parte 2

+ En la segunda parte aprendí cómo crear una llamada a sistema desde cero. Aprendí que todas las llamadas a sistema tienen que terminar en exit().

+ Aprendí como inicializar un apuntador en C.

# ¿Cómo se relacionan estos nuevos conceptos con los vistos anteriormente? 
+ Este tema de llamadas a sistema se relaciona con el kernel. El kernel es el que tiene que hacer toda la chamba. El usuario le pide al kernel y le da el comando de date y el kernel lo tiene que hacer.

# URL del commit parte 1
+ https://github.com/Ricardope3/so-gp1/commit/18a16af711bd827fa220c95f1270cbe1f602ffe1
# URL del commit parte 2
+ https://github.com/Ricardope3/so-gp1/commit/3127277ab28469ebd5667f331fa90b7877475c42

