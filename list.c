#include "list.h"
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;
return newNode;
}
void addNode(struct Node** head, int data) {
struct Node* newNode = createNode(data);
if (*head == NULL) {
*head = newNode;
return;
}
struct Node* temp = *head;
while (temp->next != NULL) temp = temp->next;
temp->next = newNode;
}
void addNodeAtBeginning(struct Node** head, int data) {
struct Node* newNode = createNode(data);
newNode->next = *head;
*head = newNode;
}
void addNodeAfter(struct Node* prevNode, int data) {
if (prevNode == NULL) return;
struct Node* newNode = createNode(data);
newNode->next = prevNode->next;
prevNode->next = newNode;
}
void displayList(struct Node* head) {
struct Node* temp = head;
while (temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
int search(struct Node* head, int key) {
struct Node* temp = head;
while (temp != NULL) {
if (temp->data == key) return 1;
temp = temp->next;
}
return 0;
}
