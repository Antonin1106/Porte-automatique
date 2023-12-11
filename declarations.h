/*
  Nom du Projet: Porte programmable
  Nom et utilitée du fichier : declarations.h : constitue le répèrtoire des différentes déclarations du programme
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


#ifndef DECLARATIONS_H
#define DECLARATIONS_H

/*******************************************/
/*******************************************/
/*************** CONSTANTES ****************/
/*******************************************/
/*******************************************/



/****************** PINS *******************/


const int moteur_sens1 = 9;
const int moteur_sens2 = 10;
const int btn_plus = 8;
const int btn_moins = 7;
const int capteurIR1 = 6;
const int capteurIR2 = 5;


/*************** PARAMETRES ****************/




/*******************************************/
/*******************************************/
/*************** VARIABLES *****************/
/*******************************************/
/*******************************************/






/*******************************************/
/*******************************************/
/*************** FONCTIONS *****************/
/*******************************************/
/*******************************************/

/* Fonction qui ouvre la porte */
void ouvrirPorte();


/* Fonction qui ferme la porte */
void fermerPorte();


/* Fonction qui initialise les composants nécessaires aux actions mécaniques (moteur_sens1s) */
void initialiserComposants();


/* Initialiser la communication série en 9600 bauds et afficher un petit message */
void initSerie(int bauds);


/* Fonction qui attend une entree de l'utilisateur et retourne un code correspondant à une action à effectuer*/
/* a = ouvrir | b = fermer |
*/
char demande();


/* Fonction pour afficher un message d'erreur en fonction d'une table prédéfinis */
void errorMessage(char erreur);


/* Fonction qui retourne l'état bolléen d'une pin renseigné en paramètre */
bool bouton(int btn);


#endif
