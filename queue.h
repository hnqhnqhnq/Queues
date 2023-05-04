#pragma once

typedef struct NodeT {
    int key;
    struct NodeT *next;
} NodeT;

typedef struct queue {
    int size;
    struct NodeT *head;
    struct NodeT *tail;
} QUEUE;

NodeT *createNode(int givenKey);

void Enqueue(QUEUE *queue, int givenKey);

QUEUE createQueue();

void printQueue(QUEUE queue);

void Dequeue(QUEUE *queue);

void deleteQueue(QUEUE *queue);