#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[20];
    int salary;
    struct Employee *next;
};

typedef struct Employee emp;
emp *temp, *head = NULL;
emp *new_node;

void Insertion() {
    new_node = (emp*) malloc(sizeof(emp));
    printf("Enter Name Of The Employee: ");
    scanf("%s", new_node->name);
    printf("Enter Salary Of The Employee: ");
    scanf("%d", &new_node->salary);
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        temp = head;
    } else {
        temp->next = new_node;
        temp = new_node;
    }
}

void Display() {
    if (head == NULL) {
        printf("List Is Empty\n");
    } else {
        printf("The List Is:\n");
        temp = head;
        while (temp != NULL) {
            printf("Name -> %s, Salary -> %d\n", temp->name, temp->salary);
            temp = temp->next;
        }
        printf("\n");
    }
}

void InsertBeg() {
    new_node = (emp*) malloc(sizeof(emp));
    printf("Enter Name Of The Employee: ");
    scanf("%s", new_node->name);
    printf("Enter Salary Of The Employee: ");
    scanf("%d", &new_node->salary);
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }
}

void InsertI(){
    int count=0, pos=0;
    printf("Enter The Position At Which You Would Like To Enter The Data : ");
    scanf("%d",&pos);
    if (pos < 0) {
        printf("Position Can't Be Negative,Retry...\n");
        return;
    }
    new_node = (emp*) malloc(sizeof(emp));
    printf("Enter Name Of The Employee: ");
    scanf("%s", new_node->name);
    printf("Enter Salary Of The Employee: ");
    scanf("%d", &new_node->salary);
    new_node->next = NULL;
    if (pos==0) {
        new_node->next=head;
        head=new_node;
        return;
    }
    temp=head;
    while (temp!=NULL && count < pos -1) {
    temp=temp->next;
    count ++;
    }
    if (temp==NULL){
        printf("Position Is Out Of Bound");
        free(new_node);
        return;
    }
        new_node->next=temp->next;
        temp->next=new_node;
}

void DeleteBeg() {
    if (head==NULL) {
        printf("List Is Already Empty\n");
        return;
    }
    temp=head->next;
    free(head);
    head=temp;
}

void DeleteEnd() {
    if (head==NULL){
        printf("List Is Already Empty\n");
        return;
    }
    if (head->next==NULL){
        free(head);
        head=NULL;
        return;
    }
    emp*prev=NULL;
    temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    free(temp);
    prev->next=NULL;
}

void DeleteI() {
    int pos=0,count=0;
    printf("Enter The Position Of The Node Which You Would Like To Have Deleted : ");
    scanf("%d",&pos);
    if (pos<0){
        printf("Position Can't Be Negative");
        return;
    }
    temp=head;
    if (pos==0){
        head=head->next;
        free(temp);
        return;
    }
    emp*prev;
    while(temp->next!=NULL && count < pos) {
        prev=temp;
        temp=temp->next;
        count ++;
    }
    if (pos>count){
        printf("Position Is Out Of Bound\n");
        return;
    }
    prev->next=temp->next;
    free(temp);
}

void ReverseLL() {
    emp*prev=NULL;
    temp=head;
    emp*next=NULL;
    while(temp!=NULL) {
        next = temp->next;
        temp->next=prev;
        prev = temp;
        temp = next;
    }
    head=prev;
}


int main() {
    int choice;
    while (1) {
        printf("1 - Insert A New Element At The Back\n"
               "2 - Display The List\n"
               "3 - Stop\n"
               "4 - Insert At Beginning\n"
               "5 - Insert At Element At The I'th Node\n"
               "6 - Delete The First Element\n"
               "7 - Delete The Last Element\n"
               "8 - Delete Of Node At An Specific Location\n"
               "9 - Reverse The List\n"
               "Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Insertion();
                break;
            case 2:
                Display();
                break;
            case 3:
                return 0;
            case 4:
                InsertBeg();
                break;
            case 5:
                InsertI(); 
                break;
            case 6:
                DeleteBeg();
                break;
            case 7:
                DeleteEnd();
                break;
            case 8:
                DeleteI();
                break;
            case 9:
                ReverseLL();
                break;
            default:
                printf("Invalid Choice, Try Again\n");
                break;
        }
    }
    return 0;
}
