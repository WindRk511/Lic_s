#include<stdio.h>
#include<string.h>
#include"test_scode.h"

keyc* list() 
{
	int nk=2; 	// nombre clé disponible
	keyc* lis = malloc(nk*sizeof(keyc));	//tableau contient de cle
	
	strcpy(lis[0].u,"Noel");
	strcpy(lis[0].c,"KODYTENAI");

	strcpy(lis[0].u,"Teo");
	strcpy(lis[0].c,"KODYTENAI");
	return lis;

}

/** 
 * @fn vericode cette fonction analyse le code serial ajouter par utilisateur
 * @return int 11 si valide 
 */
int vericode(keyc id)
{
	keyc *ll = list();
	keyc* a;
	int rs=0;

	while ( ll + i != NULL) {
		a = ll + i;
		if( strcmp(a->u,id.u) == 0) {
			rs = 10;
			if(strcmp(ll->u,id.c) == 0) {
				free(ll);
				return rs = 11;	
			}
		}
		i = i + 1;
	}
	free(ll);
	return rs;
}

