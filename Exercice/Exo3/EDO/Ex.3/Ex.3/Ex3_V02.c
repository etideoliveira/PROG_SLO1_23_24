//-----------------------------------------------------------------------------------//
// Nom du projet 		: Ex.3
// Nom du fichier 		: Ex.3
// Date de création 	: 30.11.2023
// Date de modification : -
//
// Auteur 				: Etienne De Oliveira
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 
#include "Ex.3.h"

// Déclaration globales des constantes
// -----------------------------------

int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	double surface, rayon;
	int lettre;
	short tension = VMAX;
	unsigned long bigVal = 0xBC614E;
	// Affectations
	// ------------
	e_TypeFigure MonEtat = 2;
	tension = VMAX - 500;
	// Affichages pour controle
	printf ("Tension = %d \n",tension );
 	printf ("BigVal = %u \n", bigVal);
	printf ("Lettre  = %c \n",'B');
	printf ("Figure = %d \n", MonEtat);
	printf ("Rayon = %8.3f Surface = %8.3f \n", 8.5,226.980);

  return(0);
}
