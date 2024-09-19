# Juego de Picas y Fijas
<h2>Descripción</h2>
<p>
  Diseño de juego “Picas & Fijas” en un microcontrolador PIC16F877 o PIC16F887 con una pantalla LCD de doble línea y un teclado matricial, el código es desarrollado en el lenguaje C++.
</p>
<h2>Características</h2>
<p>Debe mostrarse una animación cíclica como mensaje de bienvenida.</p>
<p>Debe presionarse cualquier tecla para salir del mensaje de bienvenida. Se
debe solicitar al jugador el número de dígitos (n) del n´umero a adivinar
(entre 2 y 6).</p>
<p>Debe generarse un número aleatorio con el número de dígitos (n) especificado.
Crear una función que reciba como parámetro el número de dígitos
(n) y retorne el número aleatorio, ya sea como un entero o como un vector
de enteros (un dígito en cada elemento del vector).</p>
<p>El número generado NO puede tener dígitos repetidos.</p>
<p>Preguntar al jugador el número de n dígitos imprimiendo uno a uno y
finalizando con ‘#’.</p>
<p>Validar el dato ingresado (verificar que son n d´ıgitos y que no hayan d´ıgitos
repetidos). Si el dato es correcto, mostrar frente al n´umero ingresado,
cuantas picas y cuantas fijas tiene. Si el dato no es v´alido, mostrar durante
4 segundos un mensaje de error y volver a la pantalla anterior.</p>
<p>Llevar cuenta y mostrar el número de intentos.</p>
<p>Almacenar el resultado de hasta 20 intentos anteriores (número y cantidad
de picas y fijas) y mostrar intentos anteriores en forma descendente cuando
se presione ‘*’. Si se excede de 20 intentos se sobre-escriben los primeros.</p>
<p>Si adivina el número mostrar un mensaje de felicitación durante 8 segundos
y luego regresar al mensaje de bienvenida.</p>

<h2>Explicación del Juego</h2>
<p>
  Picas y Fijas es un juego que consiste en adivinar un número de n dígitos. El
número no puede tener dígitos repetidos. Los dígitos válidos son del 0 al 9. Para
cada intento se debe mostrar cuantas picas y cuantas fijas tiene. Una pica es
un dígito que está dentro del número a adivinar pero en una posición diferente.
Una fija es un dígito que está dentro del número a adivinar en la misma posición.
</p>
