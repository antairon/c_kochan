/* The function is declared as struct entry *findEntry because a pointer is returned. * is added when a pointer is returned. */
#include <stdio.h>

struct entry {
	int value;
	struct entry *next;
};

int main(void) {
	struct entry n1, n2, n3;
	struct entry *findEntry(struct entry *listPtr, int match);
	struct entry *listPtr, *listStart = &n1;

	int search;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = (struct entry *) 0;

	printf("Enter value to locate: ");
	scanf("%i", &search);

	listPtr = findEntry(listStart, search);

	if (listPtr != (struct entry *) 0)
		printf("Found %i\n", listPtr->value);
	else
		printf("Not found.\n");	

	return 0;
}

struct entry *findEntry(struct entry *listPtr, int match) {
	while (listPtr != (struct entry *) 0)
		if (listPtr -> value == match)
			return listPtr;
		else
			listPtr = listPtr -> next;

	return (struct entry *) 0;
}