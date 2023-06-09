#include <stdio.h>
#include <string.h>

struct book
{
    char title[50];
    char author[50];
    int year;
    float price;
};

int main()
{
    // Create and initialize a book structure
    struct book my_book = {"The Catcher in the Rye", "J.D. Salinger", 1951, 500};

    // Access and print the book details
    printf("Title: %s\n", my_book.title);
    printf("Author: %s\n", my_book.author);
    printf("Year: %d\n", my_book.year);
    printf("Price: %.2f\n", my_book.price);

    return 0;
}
