#include <iostream>
#include <stdio.h>

// DESC
//IN
//OUT
//PREC
//POSTC

int pointeurAvecBug() {
	int tab[5];
	int *p1, *p2;
	char str[20];
	char *c;

	tab[0] = 5;
	cout << " tab[2] vaut " << tab[2]; //tab[2] n'a pas �t� initialis� : il n'existe pas
	tab = p1 + 1;
	*p1 = 10;
	*p2 = 20; //P2 n'a pas �t� initialis�
	p2 = p1;
	cout << " p1 vaut " << *p1 << " p2 vaut " << *p2;
	tab = p1 + 1; //Tableau d'adresse fix
	c = tab + 3; //c est un type char et tab un type int
	gets(str);
	c = str + 2;
	c = c + 1;
	cout << " caract�re " << *(c + 1);
	gets(c);
	cout << " chaine " << str;
	return 0;
}
int main() {
	// REPRENDRE UN MENU
	pointeurAvecBug();
}