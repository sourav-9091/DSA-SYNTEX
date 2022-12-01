#include<stdio.h>
#define max 6

typedef struct{
    int data[max];
    int front,rear;
}queues;

int insert(queues* q, int v){
    if(q->rear == max-1){
        printf("Not possible!!\n");
        return 1;
    }
    else if(q->front == -1){
        q->front = q->rear = 0;
        q->data[q->rear] = v;
    }
    else{
        q->rear++;
        q->data[q->rear] = v;
    }
    return 0;
}

int delete(queues* q,int* k){
    if(q->rear == -1){
        printf("Not possible!!");
        return 1;
    }
    else if(q->front == q->rear){
        *k = q->data[q->front];
        q->rear = q->front = -1;
    }
    else{
        *k = q->data[q->front];
        for(int i = 0;i<q->rear;i++){
            q->data[i] = q->data[i+1];
        }
        q->rear--;
    }
    return 0;
}
void display(queues q){
    for(int i=0;i<=q.rear;i++){
        printf("%d\t",q.data[i]);
    }
    printf("\n");
}

void main(){
    queues q;
    int t;
    q.front = q.rear = -1;
    insert(&q,15);
    display(q);
    insert(&q,19);
    display(q);
    insert(&q,25);
    display(q);
    insert(&q,27);
    display(q);
    insert(&q,69);
    display(q);
    insert(&q,6969);
    display(q);
    insert(&q,9696);
    display(q);
    delete(&q,&t);
    display(q);
        delete(&q,&t);
    display(q);
        delete(&q,&t);
    display(q);
        delete(&q,&t);
    display(q);
        delete(&q,&t);
    display(q);
        delete(&q,&t);
    display(q);
        delete(&q,&t);



}