/**
 * @file test_scode.c
 * @author Windrick
 * @brief cette programme vise a verifier le serial code
 * @date 28/08/2024
*/ 

#include<stdio.h>
#include<stdlib.h>
#include"/usr/include/srco.h"

/**
 * @fn fonction qui compte le nombre d'overture du fichier
 * @param vide
 * @return vide
*/

void compt()
{
	FILE* pf = fopen("/.compt.txt","w+");
	int fd;
	int c;

	if (feof(pf) != 0) {
		fprintf(pf,"%d","0");
		fd = fileno(pf);
		lseek(fd, 0L, SEEK_SET);
	}
	else {
		fd = fileno(pf);
	}

	fscanf(pf,"%d",&c);
	lseek(fd, 0L, SEEK_SET);

	if (c > 5) {
		printf("Le programme est unitisable à cause de trop de tentative de mauvais clé de sereal\n");
		destruct() 		// destruction de fichier contenant le code sereal;
		exit (1);
	}
	
	c = c + 1;
	fprintf(pf,"%d",c);
	fclose(pf);	
}

/**
 * @fn fonction qui collecte le code serial
 * @brief ecrire le code entré par l'utilisateur dans un fichier d'enregistrement
 * @return void
 */
void getserial(FILE* pf)
{
	int fd = fileno(pf);
	char text[20];
	lseek(fd, 0L, SEEK_SET);
	
	printf("Entre le nom d'utilisateur : ");
	fprintf(pf,"%s",stdin);
	printf("Entre le clé à 9 caractere : ");
	fprintf(pf,"%s",stdin);
		
}

/**
 * @fn fonction qui gere le verification du code
 * @brief cette fonction qui passer le code si le code serial est correct, elle arret le code si incorrect
 * @param char le nom du fichier contenant le fontion qui l'appel
 * @return void
 */

void seriali(char fic[]) 
{
	keyc id;	//structure de code serial et l'utilisateur correspondant
	char fic[] = "/.Lic"
	FILE* pf = (fic,"w+");
	int fd = fileno(pf);
	if (feof(pf) != 0) 
	{
		getserial(pf);	//obtenir le code serial
		lseek(fd, 0L, SEEK_SET);
	}
	else {
		if (vericode(pf) == 11) {
			return;
		}
	}

	compt();
	
	getserial(pf);	//obtenir le code serial
	lseek(fd, 0L, SEEK_SET);

	if (vericode(pf) != 11) {
		printf("Le code ou username est incorrect\n");
		fclose(pf);
		remove(fic);
	}
}

	
