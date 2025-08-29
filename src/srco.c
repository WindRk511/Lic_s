/** 
	@file srco.c
	@author Windrick
	@daty 2025
	@brief cet programme est verfie les licenses
*/
	
#include<stdio.h>
#include<stdlib.h>
#include"srco.h"

/**
	\fn compte  le nombre d'ouverture de fichier
	\param char*
	\return void
*/

void compt(char arg[]) {
	char ref[] = ".excompt";
	int c; 
	int test;
	FILE* p;
	FILE *pf = fopen(ref,"r");
		if ( pf == NULL ) {
			pf = fopen(ref,"w");
			fprintf(pf,"%s","0");
			fclose(pf);
			fopen(ref,"r");
		}
		
	fscanf(pf,"%d",&c);
	fclose(pf);
	c = c + 1;

	pf = fopen(ref,"w");
	fprintf(pf,"%d",c);

	if(c > 3) {
		printf("L'essai est epuiser\n Vous ne pouvez plus executer ce programme\n");
		p = fopen(arg,"w");
		fprintf(p,"%s","");
		fclose(p);
		exit(1);
	}

	test = serial();
	if(test != 1) {
		printf("Echec, code incorrect\n");
		exit (1);
	}
}

void testfile(FILE *p) 
{
	if(p == NULL) {
		printf("erreur de l'ouverture de fichier\n");
		exit (1);
	}
}

int serial() {
	char k[] = "./key__pas";
	char text[20];
	cds id;
	FILE* pf = fopen(k,"r");
	int test;

	if (pf == NULL) {
		pf = fopen(k,"w");

	}


	fprintf(pf,"%s",id.u);
	fprintf(pf,"%s",id.c);
	test = listcode(id);
	fclose(pf);
	if (test == 1) {
		return 1;
	}


	pf = fopen(k,"a");
	testfile(pf);
	printf("Entre username : ");
	scanf("%s",id.u);
	fprintf(pf,"%s",id.u);
	printf("Entre le code serial : ");
	scanf("%s",id.c);
	fprintf(pf,"%s",id.c);
	fclose(pf);

	pf = fopen(k,"r");
	testfile(pf);
	printf("Entre username : ");
	test = 0;
        test = listcode(id);
	if(test != 1) {
		return (-1);	
	}
	return 1;
}
	      
