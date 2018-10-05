#include <iostream>
#include <stdio.h>
#include "fileAttente.h"
using namespace std;

FileAttente initFileAttente() {
	FileAttente file;
	file.tete = NULL;
	file.queue = NULL;
	return file;
}

void desinitFileAttente(FileAttente* file) {
	//ON CHECK LE SUIVANT S'IL EST PAS NULL ON LE CUT
	//IL FAUT DETRUIRE LE RESTE DE LA CHAINE
	if ((*file).tete != NULL) {
		delete (*file).tete;
	}
	if ((*file).queue != NULL) {
		delete (*file).queue;
	}
}
void afficheMenu() {
	int choix;
	int a;
	int res;

	do {
		res = 0;
		cout << " Veuillez choisir l'une des manieres de calcul proposees : " << endl;
		cout << " 1 - Ajouter une personne en queue " << endl;
		cout << " 2 - Retirer la personne en tete " << endl;
		cout << " 3 - Consulter la personne en tete de file " << endl;
		cout << " 4 - Calculer la longueur de la file d'attente " << endl;
		cout << " 5 - Quitter " << endl;

		cin >> choix;

		switch (choix) {
		case 1:
			cout << " Ajouter une personne en queue : ";
			cin >> a;
			while (a <= 0) {
				cout << " a doit etre un entier positif non nul ! " << endl;
				cout << " Veuillez saisir de nouveau la valeur de a : ";
				cin >> a;
			}
			break;

		case 2:
			cout << " Suppression de la personne en tete " << endl;
			break;
		case 3:
			cout << " Consultation de la personne en tete de file" << endl;
			break;
		case 4:
			cout << " Calcul de la longueur de la file d'attente " << endl;
			break;
		case 5:
			cout << " Fin du programme ... " << endl;
			break;

		default:
			cout << " La valeur saisie n'est pas bonne. Aucun calcul ne sera fait. " << endl;
		}
	} while (choix != 5);
}
int main() {
	initFile();
}