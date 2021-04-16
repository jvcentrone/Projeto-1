//João Vitor Teles Centrone 32033125 
//Gustavo Coleto 32076541

#include "Deque.h"
#include <iostream>
#pragma once

using namespace std;

Deque Create()
{
	Deque queue =
	{
		{ 0 }, // values
		0, // front
		0, // rear
		0 // quantity
	};
	return queue;
}


void InsertFront(Deque& deque, int elem)
{
	// verifica se est� cheio
	if (deque.quantity == Size(deque))
	{
		cout << "Error: full deck" << endl;
	}
	// se deque estiver vazio, inicialize front e rear como 0
	if (deque.front == -1)
	{
		deque.front = 0;
		deque.rear = 0;
	}
	// se front for a primeira posi��o do deque, front passa a ser a posi��o final
	else if (deque.front == 0)
	{
		deque.front = Size(deque) - 1;
	}
	// decrementa front
	else
	{
		deque.front--;
	}
	deque.values[deque.front] = elem;

	++deque.quantity;

	cout << elem << " added to the front\n";
}


void InsertBack(Deque& deque, int elem)
{
	// verifica se o deque est� cheio
	if (deque.quantity == Size(deque))
	{
		cout << "Error: full deck" << endl;
	}
	// se o deque estiver vazio, inicialize front e rear = 0
	else if (deque.front == -1)
	{
		deque.front = 0;
		deque.rear = 0;
	}
	// se rear for a ultima posi��o do deque, rear = 0
	else if (deque.rear = Size(deque) - 1)
	{
		deque.rear = 0;
	}
	// incrementa rear
	else
	{
		deque.rear++;
	}
	// coloca elem no deque
	deque.values[deque.rear] = elem;

	++deque.quantity;

	cout << elem << " added to the back\n";
}


int RemoveFront(Deque& deque)
{
	int element = deque.values[deque.front];

	// verifica se o deque est� vazio
	if (isEmpty(deque))
	{
		cout << "Error: empty deck" << endl;
	}
	// se deque cont�m um s� elemento
	else if (deque.front == deque.rear)
	{
		deque.front = -1;
		deque.rear = -1;
	}
	// se tiver mais de 1 elemento
	else 
		// volte para a posi��o inicial
		if (deque.front == Size(deque) - 1)
		{
			deque.front = 0;
		}
	    /*incrementa front para remover o valor 
		que estar� como front no deque */
		else
		{
			deque.front++;
		}
	--deque.quantity;
	return element;
}



int RemoveBack(Deque& deque)
{
	int element = deque.values[deque.rear];

	// verifica se est� cheio
	if (isEmpty(deque))
	{
		cout << "Error: empty deck" << endl;
	}
	// se deque conter um s� elemento
	if (deque.front == deque.rear)
	{
		deque.front = -1;
		deque.rear = -1;
	}
	// se rear for a primeira posi��o, v� para a posi��o final
	else if (deque.rear == 0)
	{
		deque.rear = TAM - 1;
	}
	// decrementa rear
	else
	{
		deque.rear--;
	}
	--deque.quantity;
	return element;
}


int Front(const Deque& deque)
{
	if (isEmpty(deque))
	{
		return true;
	}
	else
	{
		return deque.values[deque.front];
	}
}


int Back(const Deque& deque)
{
	if (isEmpty(deque))
	{
		cout << "Error: Empty deck" << endl;
	}
	else
	{
		return deque.values[deque.rear];
	}
}


int Size(const Deque& deque)
{
	return sizeof(deque.values) / sizeof(deque.values[0]);
}


int Count(const Deque& deque)
{
	return deque.quantity;
}


bool isEmpty(const Deque& deque)
{
	if (deque.quantity == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Clear(Deque& deque)
{
	while (!isEmpty(deque))
	{
		RemoveBack(deque);
	}
}
