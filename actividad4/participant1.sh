#!/bin/bash

while true; do
    # Leer mensaje del participante 2
    read -r message < participant2_to_participant1
    echo "Participante 2: $message"

    # Enviar mensaje al participante 2
    echo "Participante 1: "
    read -r my_message
    echo "$my_message" > participant1_to_participant2
done
