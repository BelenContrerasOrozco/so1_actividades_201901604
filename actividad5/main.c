#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *thread_function(void *arg) {
    // Hilo simple que no hace nada
    return NULL;
}

int main() {
    pid_t pid;
    pthread_t thread_id;

    pid = fork(); // Crear el primer proceso

    if (pid == 0) {  // Estamos en el proceso hijo
        fork(); // Crear otro proceso desde el hijo

        pthread_create(&thread_id, NULL, thread_function, NULL); // Crear un hilo desde el hijo
        pthread_join(thread_id, NULL); // Esperar a que el hilo termine

    } else if (pid > 0) { // Estamos en el proceso padre
        fork(); // Crear otro proceso desde el padre
    } else {
        fprintf(stderr, "Error al crear el proceso hijo\n");
        return EXIT_FAILURE;
    }

    fork(); // Crear otro proceso desde el padre

    // Para responder las preguntas:
    // a) Contamos los procesos únicos creados (incluyendo el proceso inicial)
    // b) Contamos los hilos únicos creados (uno por cada llamada a pthread_create)
    printf("Número de procesos únicos: %d\n", getpid());
    printf("Número de hilos únicos: %lu\n", thread_id);

    return EXIT_SUCCESS;
}
