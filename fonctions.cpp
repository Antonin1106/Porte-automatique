#include <Arduino.h>
#include "declarations.h"


/* Fonction qui ouvre la porte */
void ouvrirPorte()
{

  /* Tant que la valeur digital du capteurIR1 est basse */
  while(!bouton(capteurIR1)) 
  {
    /* On allume les moteurs dans le sens d'ouverture */
    digitalWrite(moteur_sens2, LOW);
    digitalWrite(moteur_sens1, HIGH);
  }

  /* Une fois que le capteur detecte la porte on coupe les moteurs */
  digitalWrite(moteur_sens1, LOW);
  
}



/* Fonction qui ferme la porte */
void fermerPorte()
{
  /* Tant que la valeur digital du capteurIR2 est basse */
  while(!bouton(capteurIR1)) 
  {
    /* On allume les moteurs dans le sens d'ouverture */
    digitalWrite(moteur_sens1, LOW);
    digitalWrite(moteur_sens2, HIGH);
  }

  /* Une fois que le capteur detecte la porte on coupe les moteurs */
  digitalWrite(moteur_sens2, LOW);
}


/* Fonction qui initialise les composants nécessaires aux actions mécaniques (moteur) */
void initialiserComposants() 
{
  pinMode(moteur_sens1, OUTPUT);
  pinMode(moteur_sens2, OUTPUT);
  pinMode(btn_plus, INPUT_PULLUP);
  pinMode(btn_moins, INPUT_PULLUP);
  pinMode(capteurIR1, INPUT_PULLUP);
  pinMode(capteurIR2, INPUT_PULLUP);
}

/* Fonction qui retourne l'état bolléen d'une pin renseigné en paramètre */
bool bouton(int btn)
{

    /* On s'assure que l'entrée est bien déclarée en temps que tel */
    pinMode(btn, INPUT_PULLUP);
  
    /* On retourne la valeur digital lue sur la pin */
    return digitalRead(btn);
  
}

/* Fonction qui attend une entree de l'utilisateur et retourne un code correspondant à une action à effectuer*/
/*
 * a = ouvrir
 * b = fermer
 * 
 */
 
char demande() 
{
  // RFID
  // Empreinte
  // Boutons
  // Sans fil (Radio, WIFI, Bluetooth...)

  /* On tournera dans cette boucle tant qu'aucune entrée valide n'aura été détéctée */
  while(1)
  {

    /* Si le bouton "plus" est pressé, on ouvre la porte */
    if(bouton(btn_plus))
    {
      /* Retourner un 'a' : ouvrir la porte */
      return 'a';
    } 
    /* Sinon si le bouton "moins" est pressé, on ferme la porte */
    else if (bouton(btn_moins))
    {
      /* Retourner un 'b' : fermer la porte */
      return 'b';
    }

    
  }
}
