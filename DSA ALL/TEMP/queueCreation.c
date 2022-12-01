#include <stdio.h>
#include <stdlib.h>
#define size 50

struct Queue
{
    int rear, front;
    int *arr;
    unsigned capacity;
};

struct Queue *create(int cap)
{
    struct Queue *temp = (struct Queue *)malloc(sizeof(struct Queue));
    temp->capacity = cap;
    temp->front = temp->rear = -1;
    temp->arr = (int *)malloc(sizeof(int) * cap);

    return temp;
}

void enqueue(struct Queue **queue, int data)
{
    if ((*queue)->rear == (*queue)->capacity - 1)
    {
        // STACK IS FULL
        return;
    }
    else
    {
        (*queue)->rear++;
        (*queue)->arr[(*queue)->rear] = data;
    }
}

int dequeue(struct Queue **queue)
{
    int x = -1;

    if ((*queue)->front == (*queue)->rear)
    {
        // QUEUE IS EMPTY
    }
    else
    {
        (*queue)->front++;
        x = (*queue)->arr[(*queue)->front];
    }
    return x;
}

void display(struct Queue *queue)
{
    for (int i = queue->front+1; i <= queue->rear; i++)
    {
        printf("%d ", queue->arr[i]);
    }
}
int main()
{
    struct Queue *queue;
    queue = create(10);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    display(queue);

    // printf("%d ", dequeue(&queue));
    return 0;
}