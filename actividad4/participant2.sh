#!/bin/bash

while true; do
    # Enviar mensaje al participante 1
    echo "Participante 2: "
    read -r my_message
    echo "$my_message" > participant2_to_participant1

    # Leer mensaje del participante 1
    read -r message < participant1_to_participant2
    echo "Participante 1: $message"
done
