#include <stdio.h>
#include <malloc.h>

struct book {
    char *name;
    double price;
    int pages;
    char *language;
    double weight;
    int year;

    struct book *next;
};

struct book *create_book(char *name, double price, int pages, char *language, double weight, int year) {
    struct book *b = malloc(sizeof(struct book));
    b->next = NULL;
    b->year = year;
    b->weight = weight;
    b->language = language;
    b->pages = pages;
    b->price = price;
    b->name = name;
    return b;
}

int main() {
    struct book *head, *current;

    current = create_book("Harry Potter and the Sorcerer's Stone", 39.99, 256, "en", 3.407, 1997);
    head = current;

    current->next = create_book("Harry Potter and the Chamber of Secrets", 39.99, 272, "en", 3.555, 1998);
    current = current->next;

    current->next = create_book("Harry Potter and the Prisoner of Azkaban", 39.99, 336, "en", 4.46, 1999);
    current = current->next;

    current->next = create_book("Harry Potter and the Goblet of Fire", 47.99, 464, "en", 4.69, 2000);
    current = current->next;

    current->next = create_book("Harry Potter and the Order of the Phoenix", 54.99, 576, "en", 5.715, 2003);
    current = current->next;

    current->next = create_book("Harry Potter and the Half-Blood Prince", 12.99, 672, "en", 1.022, 2005);
    current = current->next;

    current->next = create_book("Harry Potter and the Deathly Hallows", 14.99, 784, "en", 1.077, 2007);

    current = head;
    for (int i = 1; current != NULL; i++) {
        printf("%d: %s - %.2f$, %d pages, language: %s, %.3f lbs, published in %d\n", i, current->name, current->price, current->pages,
               current->language, current->weight, current->year);

        current = current->next;
    }
}
