#include <stdio.h>
#include "queue.h"

int main() {
    QUEUE queue;

    queue = createQueue();

    Enqueue(&queue, 1);
    Enqueue(&queue, 2);
    Enqueue(&queue, 3);
    Enqueue(&queue, 4);
    Enqueue(&queue, 5);

    printQueue(queue);
    printf("\n");

    Dequeue(&queue);

    printQueue(queue);
    printf("\n");

    Dequeue(&queue);

    printQueue(queue);
    printf("\n");

    Dequeue(&queue);

    printQueue(queue);
    printf("\n");

    Dequeue(&queue);

    printQueue(queue);
    printf("\n");

    Dequeue(&queue);

    printQueue(queue);
    printf("\n");

    Enqueue(&queue, 1);
    Enqueue(&queue, 2);
    Enqueue(&queue, 3);
    Enqueue(&queue, 4);
    Enqueue(&queue, 5);

    printQueue(queue);
    printf("\n");

    deleteQueue(&queue);
    printQueue(queue);
    return 0;
}
