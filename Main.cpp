//João Vitor Teles Centrone 32033125 
//Gustavo Coleto 32076541

#include <iostream>
#include "Deque.h"

using namespace std;

int main()
{
	Deque deck = Create();
	int option, elem;
	
	do
	{
		cout << " 1. InsertFront\n 2. InsertBack\n 3. RemoveFront\n 4. RemoveBack\n 5. Front\n 6. Back\n 7. Size\n 8. Count\n 9. IsEmpty\n 10. Clear\n 11.Sair\n";
		cout << "Digite uma das operacoes acima: ";
		cin >> option;
		switch (option)
		{
			
		case 1:
			cout << "Digite o elemento a ser adicionado ";
			cin >> elem;
			InsertFront(deck, elem);
			break;
		case 2:
			cout << "Digite o elemento a ser adicionado ";
			cin >> elem;
			InsertBack(deck, elem);
			break;
		case 3:
			cout << "Removed front element: " << RemoveFront(deck) << endl;
			break;
		case 4:
			cout << "Removed back element: " << RemoveBack(deck) << endl;
			break;
		case 5:
			cout << "Front element: " << Front(deck) << endl;
			break;
		case 6:
			cout << "Back element: " << Back(deck) << endl;
			break;
		case 7:
			cout << "Size: " << Size(deck) << endl;
			break;
		case 8:
			cout << "Count: " << Count(deck) << endl;
			break;
		case 9:
			cout << isEmpty(deck) << endl;
			break;
		case 10:
			Clear(deck);
			break;
		case 11:
			cout << "Programa encerrado";
			break;

		default:
			break;
		}
	} while (option != 11);

}