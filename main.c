#include <stdio.h>
#include <stdlib.h>

struct _List {
    int id;
    struct _List* next;
};

typedef struct _List List;

List* createList() {
    List* list = (List*) malloc(sizeof(List));
    list->id = 0;
    list->next = NULL;
    return list;
}

// 0 = not empty
// 1 = empty
int isEmpty(List* list) {
    if (list->next == NULL) {
        return 1;
    }

    return 0;
}

List* findWithId(List* list, const int id) {
    List* current = list;
    while (current != NULL) {
        if (current->id == id) {
            return current;
        }

        current = current->next;
    }

    return NULL;
}

List* findLastElement(List* list) {
    List* current = list;
    while (current->next != NULL) {
        current = current->next;
    }
    return current;
}

void addToBegin(List* list, const int id) {
    List* currentBegin = list->next;

    List* newElement = (List*) malloc(sizeof(List));
    newElement->id = id;
    newElement->next = currentBegin;

    list->next = newElement;
}

void addToBeginIfUnique(List* list, const int id) {
    List* found = findWithId(list, id);

    if (found != NULL) {
        return;
    }

    addToBegin(list, id);
}

void addToEnd(List* list, const int id) {
    List* end = findLastElement(list);

    List* newElement = (List*) malloc(sizeof(List));
    newElement->id = id;
    newElement->next = NULL;

    end->next = newElement;
}

void addToEndIfUnique(List* list, const int id) {
    List* found = findWithId(list, id);

    if (found != NULL) {
        return;
    }

    addToEnd(list, id);
}

void printElement(List* list) {
    printf("ID: %d\n", list->id);
}

void printList(List* list) {
    if (isEmpty(list)) {
        printf("List is empty.\n");
        return;
    }

    List* current = list->next;
    printf("List:\n");
    while (current != NULL) {
        printElement(current);
        current = current->next;
    }
}

List* findSmallestElement(List* list) {
    List* current = list->next;
    List* smallest = current;

    while (current != NULL) {
        if (current->id < smallest->id) {
            smallest = current;
        }
        current = current->next;
    }

    return smallest;
}

List* findLargestElement(List* list) {
    List* current = list->next;
    List* largest = current;

    while (current != NULL) {
        if (current->id > largest->id) {
            largest = current;
        }
        current = current->next;
    }

    return largest;
}

void deleteElement(List* list, List* element) {
    List* current = list;
    while (current != NULL) {
        if (current->next == element) {
            current->next = current->next->next;
            return;
        }
        current = current->next;
    }
}

void deleteFirstWithId(List* list, const int id) {
    List* current = list;
    while (current != NULL) {
        if (current->next->id == id) {
            List* toFree = current->next;
            current->next = toFree->next;
            free(toFree);
            return;
        }

        current = current->next;
    }
}

List* sortedAscList(List* list) {
    List* result = createList();
    List* current = result;

    while (!isEmpty(list)) {
        List* smallest = findSmallestElement(list);
        deleteElement(list, smallest);
        current->next = smallest;
        current = current->next;
    }

    return result;
}

List* sortedDescList(List* list) {
    List* result = createList();
    List* current = result;

    while (!isEmpty(list)) {
        List* smallest = findLargestElement(list);
        deleteElement(list, smallest);
        current->next = smallest;
        current = current->next;
    }

    return result;
}

List* findElementBefore(List* list, List* target) {
    List* current = list;

    while (current != NULL) {
        if (current->next == target) {
            return current;
        }

        current = current->next;
    }

    return NULL;
}

void swapIds(List* list, int firstId, int secondId) {
    List* first = findWithId(list, firstId);
    List* second = findWithId(list, secondId);

    List* preFirst = findElementBefore(list, first);
    List* preSecond = findElementBefore(list, second);

    preFirst->next = second;

    List* temp = second->next;
    second->next = first->next;

    preSecond->next = first;
    first->next = temp;
}

void pushStack(List* list, int id) {
    addToEnd(list, id);
}

List* popStack(List* list) {
    List* current = list->next;
    while (current->next != NULL) {
        current = current->next;
    }

    deleteElement(list, current);
    return current;
}

// 0 - not empty
// 1 - empty
int isStackEmpty(List* list) {
    return isEmpty(list);
}


int main(void) {
    List* list = createList();
    addToEnd(list, 1);
    addToEnd(list, 2);
    addToBegin(list, 3);
    printList(list);

    List* smallest = findSmallestElement(list);
    printf("Smallest:\n");
    printElement(smallest);

    // deleteFirstWithId(list, 1);
    // printList(list);

    List* ascending = sortedAscList(list);
    printList(ascending);
    printList(list);

    list = ascending;

    List* largest = findLargestElement(list);
    printf("Largest:\n");
    printElement(largest);

    List* descending = sortedDescList(list);
    printList(descending);
    printList(list);

    list = descending;

    addToBeginIfUnique(list, 1);
    addToEndIfUnique(list, 1);
    printList(list);

    List* result = findElementBefore(list, findSmallestElement(list));
    printf("The element before the smallest is:\n");
    printElement(result);

    swapIds(list, 3, 1);
    printList(list);
    swapIds(list, 3, 1);
    printList(list);

    return 0;
}
