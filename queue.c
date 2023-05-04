#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

NodeT *createNode(int givenKey) {
    NodeT *node = malloc(sizeof(NodeT));

    if (node == NULL) {
        printf("Couldn't allocate memory!");
        return NULL;
    }

    node->key = givenKey;
    node->next = NULL;
}

QUEUE createQueue() {
    QUEUE queue;

    queue.head = NULL;
    queue.tail = NULL;

    return queue;
}

void Enqueue(QUEUE *queue, int givenKey) {
    NodeT *node = createNode(givenKey);

    if (queue->head == NULL) {
        queue->head = node;
        queue->tail = node;
        return;
    }

    queue->tail->next = node;
    queue->tail = node;
}

void printQueue(QUEUE queue) {
    if (queue.head != NULL) {
        NodeT *current = queue.head;

        while (current != NULL) {
            printf("%d ", current->key);
            current = current->next;
        }
    }
}

void Dequeue(QUEUE *queue) {
    if (queue->head != NULL) {
        NodeT *current = queue->head;
        queue->head = queue->head->next;
        free(current);

        if (queue->head == NULL) {
            queue->tail = NULL;
            return;
        }
    }
}

void deleteQueue(QUEUE *queue) {
    NodeT *current;
    NodeT *previous;

    if (queue->head != NULL) {
        current = queue->head;
        previous = NULL;

        while (current != NULL) {
            previous = current;
            current = current->next;
            free(previous);
        }

        free(current);

        queue->head = NULL;
        queue->tail = NULL;

        printf("The queue is now empty!\n");
    }
}
