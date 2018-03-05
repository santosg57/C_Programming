#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

/* function declaration */
void printBook( struct Books book );
void printBookApun( struct Books *book );

int main( ) {

   struct Books Libros[2];        /* Declare Book1 of type Book */
   int i;

   strcpy( Libros[0].title, "C Programming");
   strcpy( Libros[0].author, "Nuha Ali"); 
   strcpy( Libros[0].subject, "C Programming Tutorial");
   Libros[0].book_id = 6495407;

   strcpy( Libros[1].title, "Telecom Billing");
   strcpy( Libros[1].author, "Zara Ali");
   strcpy( Libros[1].subject, "Telecom Billing Tutorial");
   Libros[1].book_id = 6495700;
 
   for (i=0; i<2; i++){
      printBook( Libros[i] );
   }

   printf("\n\n");

   for (i=0; i<2; i++){
      printBookApun( &Libros[i] );
   }

   return 0;
}

void printBook( struct Books book ) {

   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}

void printBookApun( struct Books *book ) {

   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
}



