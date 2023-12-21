//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de cr�ation 	: xx.xx.2016
// Date de modification : 21.12.2023
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Version 				: 0.3
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- d�claration des librairies --// 
#include <stdio.h>	// pour usage printf


int main(void)
{
	// D�claration cas A
	short A1 = 400;
	short A2 = 500;
	long ResA1, ResA2 = 0;
	// D�claration cas B
	unsigned short ValB = 0x1234;
	char HighValB, LowValB= 0;
	// D�claration cas C
	unsigned short C1 = 0x5555;
	unsigned short C2 = 0x0F0F;
	short ResC = 0;
	// D�claration cas D
	short D1 = 1325;
	short D2 = 7;
	short ResD1, ResD2 = 0;
	// Traitement cas A
	printf ("Traitement cas A \n");
	ResA1 = A1 * A2;
	printf ("ResA1 = A1 * A2 soit  %d * %d = %d \n",A1,A2, ResA1);
	ResA2 = A1 * A2;
	printf ("ResA2 = A1 * A2 soit  %d * %d = %d \n", A1,A2, ResA2);
	
	// Traitement cas B
	printf ("Traitement cas B \n");
	HighValB = ValB >>8;
	LowValB = ValB & 0x00FF;
	printf ("ValB  %x HighValB = %2x LowValB = %x\n",ValB, HighValB, LowValB);
	
	// Traitement cas C
	printf ("Traitement cas C \n");
	ResC = C1 | C2;
	printf ("ResC = C1 %x  OU C2 %x = %x \n", C1, C2, ResC);
	ResC = C1 & C2;
	printf ("ResC = C1 %x  ET C2 %x = %x \n",C1, C2, ResC);

	// Traitement cas D

	printf ("Traitement cas D \n");
	ResD1 = D1 / D2;
	ResD2 = D1 - ResD1 * D2;
	printf ("Division de D1 %4d par D2 %4d = %4d Reste = %4d \n",D1, D2,ResD1, ResD2);

  return(0);
}
