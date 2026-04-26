#include "list.h"
int main() {
struct Node* list = NULL;
addNodeAtBeginning(&list, 10);
addNode(&list, 20);
addNodeAtBeginning(&list, 5);
displayList(list);
return 0;
}
