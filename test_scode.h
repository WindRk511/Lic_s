/**
 * @struct struct qui associe le username et leur clé
 * @details dans cette struct on stock username et code correspondant
 */
 
typedef struct keyc {
	char key.usr[20];
	char key.cs[10];
} keyc;


void compt();
void getserial(FILE* pf);
void serial(char fic);
int vericode(FILE* pf);
