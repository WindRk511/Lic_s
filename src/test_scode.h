/**
 * @struct struct qui associe le username et leur clé
 * @details dans cette struct on stock username et code correspondant
 */
 
typedef struct keyc {
	char key.usr[20];
	char key.cs[10];
} keyc;

/**
 * @fn fonction qui compte le nombre d'overture du fichier
 * @param vide
 * @return vide
*/
void compt();

/**
 * @fn fonction qui collecte le code serial
 * @brief ecrire le code entré par l'utilisateur dans un fichier d'enregistrement
 * @return void
 */
void getserial(FILE* pf);

/**
 * @fn fonction qui gere le verification du code
 * @brief cette fonction qui passer le code si le code serial est correct, elle arret le code si incorrect
 * @param char le nom du fichier contenant le fontion qui l'appel
 * @return void
 */
void serial(char fic);

 /**
  * @fn vericode qui verifier le code serial correct ou non 
  * @return 11 si correct
  */
int vericode(FILE* pf);

