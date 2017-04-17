#include<iostream>
using namespace std;
#define MAX_SIZE 100
typedef struct {
	int Head, Rear;
	int data[MAX_SIZE];
}Queue;
void initQueue(Queue &Q) {
	Q.Head = Q.Rear = 0;
}
bool isEmpty(Queue Q) {
	if (Q.Head == Q.Rear) {
		return true;
	}
	return false;
}
bool enterQueue(Queue &Q, int k) {
	if ((Q.Rear + 1) % MAX_SIZE == Q.Head) {
		return false;
	}
	Q.data[Q.Rear] = k;
	Q.Rear=(Q.Rear+1)%MAX_SIZE;
	return true;
}
bool outQueue(Queue &Q) {
	if ((Q.Rear-Q.Head+MAX_SIZE)%MAX_SIZE!=0) {
		Q.Head = (Q.Head+1)%MAX_SIZE;
		return true;
	}
	return false;
}
