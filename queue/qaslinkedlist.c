#include <stdio.h>
#include <stdlib.h>

#define max 6

struct Node {
    int data_field;
    struct Node * next;
};  

struct Queue{
    struct Queue * front;
    struct Queue * rear;
};

void init() {
    q1->front = NULL;
    q1->rear  = NULL;
}

void creation(int d) {
    struct Node * n1;
    n1=(struct Node*)malloc (sizeof(struct Node));
    if (n1==NULL){
        printf("Full");
    }
    else {
        n1->data_field=d;
        n1->next=NULL;
    }
}

void insertion(struct Node* n1, int d) {
    struct Queue *q1 = (struct Queue*) malloc ( sizeof (struct Queue));
    if(q1->rear ==NULL){
        q1->front = q1->rear = n1;
    }
    else if (q1->rear!=NULL){
        q1->rear->next = n1;
        q1->rear = n1;
    }
}

