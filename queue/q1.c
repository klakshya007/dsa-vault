#include <stdio.h>
#include <stdlib.h>

#define max 6

struct Queue {
    int a[max];
    int front;
    int rear;
};

struct Queue *q;

void Innit (){
    q->front=-1;
    q->rear=-1;
}

void Insertion(){
    if (q->rear==max-1){
        printf("Queue Is Full\n");
        return;
    }
    if (q->front==-1){
        q->front=0;
    }
        int d;
        q->rear++;
        printf("Enter The Element : ");
        scanf("%d",&d);
        q->a[q->rear]=d;
    }

void Deletion () {
    if (q->front>q->rear){
        Innit();
        printf("Queue Is Empty\n");
        return;
    }
    else if (q->front==q->rear) {
        printf("Queue Is Empty\n");
        Innit();
        return;
    }
    else {
        printf("Deleted element: %d\n", q->a[q->front]);
        q->front ++;
    }
}

void Display() {
    printf("The Queue Is : ");
    for (int i=q->front;i<=q->rear;i++){
        printf("%d ",q->a[i]);
    }
    printf("\n");
}

int main() {
    q = (struct Queue*)malloc(sizeof(struct Queue));
    int choice;
    Innit();
    while (1){
        printf("1-Insertion\n2-Deletion\n3-Display\n4-Stop\nEnter Choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            Insertion();
            break;
            case 2:
            Deletion();
            break;
            case 3:
            Display();
            break;
            case 4:
            break;
            return 0;
            default:
            printf("Enter A Valid Choice");
        }
    }

}



