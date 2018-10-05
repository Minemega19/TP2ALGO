#ifndef FILEATTENTE_H
#define FILEATTENTE_H

typedef struct maillon {
	int num;
	struct maillon* suivant;
} maillon;

typedef struct FileAttente {
	maillon* tete;
	maillon* queue;
} FileAttente;

/*
DESC
ENTREES
SORTIES
PRECONDITION
POSTCONDITION
*/

FileAttente initFileAttente();

/*
DESC
ENTREES
SORTIES
PRECONDITION
POSTCONDITION
*/

void desinitFileAttente(FileAttente* file);

/*
DESC
ENTREES
SORTIES
PRECONDITION
POSTCONDITION
*/

void ajouterEnQueue();

/*
DESC
ENTREES
SORTIES
PRECONDITION
POSTCONDITION
*/

void retirerEnTete();

/*
DESC
ENTREES
SORTIES
PRECONDITION
POSTCONDITION
*/

void longueurFile();

/*
DESC
ENTREES
SORTIES
PRECONDITION
POSTCONDITION
*/

void afficherTeteDeFile();

/*
DESC
ENTREES
SORTIES
PRECONDITION
POSTCONDITION
*/

void afficheMenu();

#endif