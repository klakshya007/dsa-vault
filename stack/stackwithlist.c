#include <stdio.h>
#include <stdlib.h>

struct stack {
    int data;
    struct stack *next;
}*top=NULL;

void Push() {
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    printf("Enter The Value Of The Data Field : ");
    scanf("%d",&s->data);
    if (top==NULL){
        s->next=NULL;
        top=s;
    }
    else {
    s->next=top;
    top=s;
}
}
void Pop() {
    struct stack *temp=top;
    free(temp);
    top=top->next;
}

int main() {
    int choice;
    while(1) {
        printf("Choice1 - Insertion\nChoice 2 - Deletion\nEnter Choice : ");
        scanf("%d",&choice);
        switch (choice){
            case 1 :
            Push();
            break;
            case 2 :
            Pop();
            break;
        }
    }
}