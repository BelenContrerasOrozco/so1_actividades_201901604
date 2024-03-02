# ACTIVIDAD 4

# Chat Básico con Named Pipes en Bash

Este es un simple chat de dos participantes utilizando Named Pipes y bash en Linux.

## Instrucciones

1. Ejecutar `mkfifo participant1_to_participant2` y `mkfifo participant2_to_participant1` en dos terminales distintas para crear los canales.

2. Ejecutar el script `participant1.sh` en una terminal y `participant2.sh` en otra terminal.

3. Los participantes pueden escribir mensajes y se enviarán a través de los canales a los otros participantes.

**Importante:** Tener permisos de escritura y lectura en el directorio donde estan los scripts y que los scripts tengan permisos de ejecución.
