# ACTIVIDAD 5

# a) ¿Cuántos procesos únicos son creados?

El número de procesos únicos es igual al número de identificadores de procesos únicos (getpid()), que son creados por fork(). En este caso, hay cuatro llamadas a fork(), por lo que hay 2^4 = 16 procesos únicos.

# b) ¿Cuántos hilos únicos son creados?

El número de hilos únicos es igual al número de llamadas a pthread_create. En este caso, hay una llamada a pthread_create, por lo que hay un hilo único.
