#include <stdio.h>
#include <stdlib.h>

struct cll {
    int data;
    struct cll * next;
};

struct cll * new_node;
struct cll *start =NULL, *last=NULL;

void InsertAtBeg () {
    new_node = (struct cll*) malloc (sizeof(struct cll));
    printf("Enter The Data Field : ");
    scanf("%d", &new_node->data);
    if (start==NULL) {
        start = new_node;
        last= new_node;
        last->next= new_node;
        return;
    }
    new_node->next = start;
    last->next=new_node;
    start=new_node;
}

void InsertAtEnd(){
    new_node = (struct cll*) malloc (sizeof(struct cll));
    printf("Enter The Data Field : ");
    scanf("%d", &new_node->data);
    if (last==NULL) {
        start = new_node;
        last= new_node;
        last->next= new_node;
        return;
    }
    new_node->next = start;
    last->next=new_node;
    last=new_node;
}

void Display () {
    printf("The List Is : ");
    if (start==NULL){
        printf("Empty\n");
    }
    else if (start==start->next){
        printf("%d ",start->data);
    }
    else {
    struct cll *temp=start;
    while (temp!=last){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
    printf("\n");
}

void DeletionAtBeg() {
    struct cll*temp=start;
    if(start==NULL){
        printf("The List Is Already Empty\n");
        return;
    }
    else if (start->next==start){
        start=NULL;
        last=NULL;
        free(temp);
        return;
    }
    last->next=start->next;
    start=start->next;
    free(temp);
}
void DeletionAtEnd() {
    struct cll*temp=start;
    if(start==NULL){
        printf("The List Is Already Empty\n");
        return;
    }
    else if (start->next==start){
        free(start);
        start=NULL;
        last=NULL;
        return;
    }
    while(temp->next!=last){
        temp=temp->next;
    }
    free(last);
    temp->next=start;
    last=temp;
}


int main() {
    int a;
    while(1){
        printf("1-Insert At Beginning\n2-Display\n3-Stop\n4-Insert At End\n5-Deletion At Beginning\n6-Deletion At End\nEnter Your Choice : ");
        scanf("%d",&a);
        switch (a){
            case 1:
            InsertAtBeg();
            break;
            case 2:
            Display();
            break;
            case 3:
            break;
            return 0;
            case 4:
            InsertAtEnd();
            break;
            case 5:
            DeletionAtBeg();
            break;
            case 6:
            DeletionAtEnd();
            break;
            default:
            printf("Enter A Valid Choice...");
            break;
        }
    }
    return 0;
}