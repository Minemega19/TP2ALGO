#include <iostream>
#include <stdio.h>

using namespace std;

// DESC
//IN
//OUT
//PREC
//POSTC

int pointeurAvecBug() {
// A CONTROLER AVEC FEUILLE
	int tab[5];
	int *p1, *p2;
	char str[20];
	char *c;

	tab[0] = 5;
	cout << " tab[2] vaut " << tab[2]; //tab[2] n'a pas �t� initialis� : il n'existe pas
	p1 = tab + 1;
	*p1 = 10;
	*p2 = 20; //P2 n'a pas �t� initialis�
	p2 = p1;
	cout << " p1 vaut " << *p1 << " p2 vaut " << *p2;
	tab = p1 + 1; //Tableau d'adresse fix
	c = tab + 3; //c est un type char et tab un type int
	cin>>str;
	c = str + 2;
	c = c + 1;
	cout << " caractere " << *(c + 1);
	cin>>c;
	cout << " chaine " << str;
	system("PAUSE");

	return 0;
}
int pointeurCorrige() {
	int tab[5];
	int *p1, *p2;
	char str[20];
	char *c;

	tab[0] = 5; //OK
	cout << " tab[0] vaut " << tab[0]; //OK
	p1 = tab + 1;
	*p1 = 10;
	 p2 = p1; //INIT SWIPE
	*p2 = 20;
	cout << " p1 vaut " << *p1 << " p2 vaut " << *p2;
	*tab = *p1 + 1; //OK
	c = str;
	cin >> str; //PAS BESOIN DE str[0] car il prend la m�moire 
	c = str + 2; //OK
	c = c + 1; //OK
	cout << " caractere " << *(c + 1);
	cin >> c;
	cout << " chaine " << str;
	return 0;
}
int main() {
	// REPRENDRE UN MENU
	pointeurCorrige();
	system("PAUSE");
	return 0;
}

/*int main()
{
	int i = 2;
	int j = 5;
	int *p1, *p2;
	p1 = &i;

	cout << " Contenu de p1 vaut: " << *p1<<endl;
	i++;
	cout << " Contenu de p1 vaut: " << *p1 << endl;
	p2 = p1;
	
	*p2 = *p1 + j;

	cout << " p1 vaut: " << *p1 << " p2 vaut: " << *p2 << " i vaut: " << i << " et j vaut " << j << endl;

	p1 = &j;
	*p1 = i + j;

	cout << " p1 vaut: " << *p1 << " p2 vaut: " << *p2 << " i vaut: " << i << " et j vaut " << j << endl;

	cin >> i;

	return 0;
	system("PAUSE");
}*/