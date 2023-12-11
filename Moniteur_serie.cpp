#include <Arduino.h>
#include "declarations.h"

/* Initialiser la communication série en 9600 bauds et afficher un petit message */
void initSerie(int bauds)
{
  Serial.begin(bauds);
  Serial.println("\nSystème de verrouillage automatique de porte.\n");
}

/* Fonction pour afficher un message d'erreur en fonction d'une table prédéfinis */
void errorMessage(char erreur)
{
  Serial.println("\n Erreur :\n");

  switch (erreur)
  {
  case 'a':
    Serial.println("Erreur dans le switch-case de la loop. (Numéro non référencé)");
    break;

  case 'b':

    break;

  default:
    Serial.println("Erreur non spécifiée");
    break;
  }
}

