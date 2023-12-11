/*
  Nom du Projet: Porte programmable
  Auteur: Antonin THOLLET
  Date de Création: 09/12/2023
  Version: Preview

  Description:
  Ce code arduino (.ino) est conçu pour controler une porte avec différents composants tel qu'un RFID, FingerPrint, ou boutons poussoirs.

  Matériel requis:
  - Carte Arduino Mega 2560
  - Cables (M-M et M-F)
  - RFID
  - FingerPrint
  - Boutons poussoirs (x2)
  - LCD i2c 16x2

  Connexions:
  - [Schéma de connexion, si nécessaire]

*/





/* Code principal d'ouverture et fermeture de porte */


/* Importation des bibliothèques et fichiers externes */
#include "declarations.h"


void setup() 
{

/* Initialiser la communication série en 9600 bauds et afficher un petit message */
initSerie(9600);

/* Initialiser les différents périphériques connectés à la carte (moteur_sens1, led, écran, rfid...) */
initialiserComposants();


}

void loop() 
{



/* Recevoir le caractère codé qui correspond à l'action à executer */
switch(demande()) 
{

  /* Btn_plus : Ouvrir la porte */
  case 'a':
    ouvrirPorte();
  break;

  /* Btn_moins : Fermer la porte */
  case'b':
    fermerPorte();
  break;

  default:
    errorMessage('a');
  break;
}

}
