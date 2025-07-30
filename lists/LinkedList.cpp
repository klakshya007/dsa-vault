#include <iostream> 
using namespace std;

struct node {
    int data;
    struct node * next;
};

struct node *temp=nullptr;
struct node *head=nullptr;

void Insertion () {
    struct node *new_node = (struct node *)malloc (sizeof(node));
    cout << "Enter Data Field : ";
    cin >> new_node->data;
    new_node ->next = nullptr;
    if (head==nullptr){
        head = new_node;
        temp = head;
    }
    else {
        temp->next=new_node;
        temp=new_node;
    }
}

void Display() {
    temp = head;
    if (temp == nullptr) cout << "The List Is Empty";
    cout << "The Linked List Is : ";
    while (temp!=nullptr){
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}

void InsertBeg() {
    struct node *new_node = (struct node *)malloc (sizeof(node));
    cout << "Enter Data Field : ";
    cin >> new_node ->data;
    new_node -> next = head;
    head = new_node;
}

void InsertEnd() {
    temp = head;
    struct node *new_node = (struct node *)malloc (sizeof(node));
    while (temp->next!=nullptr) {
        temp=temp->next;
    }
    cout << "Enter Data Field : ";
    cin >> new_node ->data;
    new_node->next=nullptr;
    temp-> next = new_node;
}

void InsertI() {
    int n;
    cout << "Enter The Node At Which You Would Like To Enter The Element : ";
    cin >> n ;
    struct node *new_node = (struct node *)malloc (sizeof(node));
    cout << "Enter Data Field : ";
    cin >> new_node ->data;
    temp = head;
    for (int i=0 ;i< n-1 && temp->next!=nullptr;i++) {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void DeletionEnd() {
    if (head == nullptr) {
        cout << "Empty List";
        return;
    }
    if (head->next == nullptr) {
        head = nullptr;
        free(head);
        return;
    }
    temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = nullptr;
}

void DeletionStart() {
    if (head == nullptr) {
        cout << "Empty List";
    }
    if (head->next == nullptr) {
        free(head);
        head = nullptr;
    }
    temp=head;
    head=head->next;
    free(temp);
}

// void DeletionI() {
//     temp =head;
//     int count,n = 0;
//     cout <<"Enter The Node To Be Deleted : ";
//     cin >>n;
//     while (temp->next->next!=nullptr && count < n-1) {
//         free(temp->next)
//     }
// }

int main () {
    int choice;
    while (1) {
    cout << "Choice 1 - Insert \nChoice 2 - Display"
    "\nChoice 3 - Stop\nChoice 4 - Insert An Element At The Beginning"
    "\nChoice 5 - Insert An Element At The End\nChoice 6 - Insert An Element At A Particular Node"
    "\nChoice 7 - Deletion At First\nChoice 8 - Deletion At End \nEnter Choice : ";
    cin >> choice;
    switch (choice) {
        case 1 : 
        Insertion();
        break;
        case 2 :
        Display();
        break;
        case 3:
        cout << "Stopped The Process";
        break;
        case 4 : 
        InsertBeg();
        break;
        case 5 :
        InsertEnd();
        break;
        case 6 :
        InsertI();
        break;
        case 7:
        DeletionStart();
        break;
        case 8:
        DeletionEnd();
        break;
        default :
        cout << "Invalid Choice" ;
        break;
    }
    }
}
