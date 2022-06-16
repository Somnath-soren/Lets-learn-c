#include<stdio.h>
#include<string.h>

struct Books
{
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

void printStruct(struct Books book);

int main()
{
  struct Books Book1;
  struct Books Book2;

  strcpy(Book1.author,"Neha hansda");
  strcpy(Book1.title,"C programming");
  strcpy(Book1.subject," C programming tutorials");
  Book1.book_id = 957846;

  /*Book2 specification */
  strcpy(Book2.title,"Telecom Billing");
  strcpy(Book2.author,"Hari prasad");
  strcpy(Book2.subject,"Telecom Billing Tutorials");
  Book2.book_id = 9874562;

  /*print Book1 info */
  printStruct(Book1);

  /* print Book2 info */
  printStruct(Book2);
  return 0;
}
void printStruct(struct Books book)
{
  printf("book.title : %s\n",book.title);
  printf("book author : %s\n",book.author);
  printf("book subject : %s\n",book.subject);
  printf("book id : %d\n\n",book.book_id);
}
