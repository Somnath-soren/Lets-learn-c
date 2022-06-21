#include<stdio.h>
#include<string.h>

  struct Books 
  {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
  };
void printBook(struct Books *Book);
int main()
{
  struct Books book1;
  struct Books book2;

  strcpy(book1.title,"C programming");
  strcpy(book1.author,"Rohit kumar");
  strcpy(book1.subject,"How to Learn c in hindi");
  book1.book_id = 457864;

  strcpy(book2.title,"C Python ");
  strcpy(book2.author,"Rohan Murmu");
  strcpy(book2.subject,"How to Learn python in hindi");
  book2.book_id = 975864;

  printBook(&book1);

  printBook(&book2);

  return 0;
}
void printBook(struct Books *Book)
{
  printf("Book tittle :%s\n",Book->title);
  printf("Book auther :%s\n",Book->author);
  printf("Book subject :%s\n",Book->subject);
  printf("Book id : %d\n",Book->book_id);
}
