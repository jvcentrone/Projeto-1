//João Vitor Teles Centrone 32033125 
//Gustavo Coleto 32076541

#pragma once
#define TAM 10

struct Deque
{
	int values[TAM];
	int front;
	int rear;
	int quantity;
};


void InsertFront(Deque& deque, int elem);
void InsertBack(Deque& deque, int elem);
int RemoveFront(Deque& deque);
int RemoveBack(Deque& deque);
int Front(const Deque& deque);
int Back(const Deque& deque);
Deque Create();
int Size(const Deque& deque);
int Count(const Deque& deque);
bool isEmpty(const Deque& deque);
void Clear(Deque& deque);


