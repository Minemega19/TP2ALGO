#include <iostream>
using namespace std;

int main()
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
}