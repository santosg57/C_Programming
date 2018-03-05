#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( ) {

   struct Books Libros[2];
   int i;
 
   strcpy( Libros[0].title, "C Programming");
   strcpy( Libros[0].author, "Nuha Ali"); 
   strcpy( Libros[0].subject, "C Programming Tutorial");
   Libros[0].book_id = 6495407;

   strcpy( Libros[1].title, "Telecom Billing");
   strcpy( Libros[1].author, "Zara Ali");
   strcpy( Libros[1].subject, "Telecom Billing Tutorial");
   Libros[1].book_id = 6495700;
 
   for (i=0;i<2; i++){
      printf( "Book %d title : %s\n", i, Libros[i].title);
      printf( "Book %d author : %s\n", i, Libros[i].author);
      printf( "Book %d subject : %s\n", i, Libros[i].subject);
      printf( "Book %d book_id : %d\n", i, Libros[i].book_id);
   }

   return 0;
}

