#include <stdio.h>

int main()
{
   char str[] = "This is my NAME!";
   FILE *fp;
   int ch;

   /* First let's write some content in the file */
   fp = fopen( "file.txt" , "w" );
   fwrite(str , 1 , sizeof(str) , fp );
   /*
   The C library function size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream) writes
   data from the array pointed to, by ptr to the given stream (which can be a file).
   USING fwrite() FOR WRITING IN CONSOLE:
   fwrite(str , 1 , sizeof(str) , stdout );
   */
   fclose(fp);
   fp = fopen( "file.txt" , "r" );
   //WRITING TO CONSOLE:
   while(1)
   {
      ch = fgetc(fp); // c is a integer which will store a value of char.
      if( feof(fp) )
        //The C library function int feof(FILE *stream) tests the end-of-file indicator for the given stream.
        //SINTHAX: int feof(FILE *stream)
      {
         break ;
      }
      printf("%c", ch); // printing the value of the integer under char form.
   }
   rewind(fp); //move the steam pointer to the beginning
   /*
   The C library function void rewind(FILE *stream) sets the file position to the beginning of the file of the
   given stream.
   SINTHAX: void rewind(FILE *stream)
   stream − This is the pointer to a FILE object that identifies the stream
   */
   printf("\n");
   //WRINTING TO THE CONSOLE:
   while(1)
   {
      ch = fgetc(fp); // ch is an integer storing a value of type char, which is a number between -128 and 127
      if( feof(fp) )
      {
         break ;
      }
      printf("%c", ch); //writing the value of integer under char form

   }
   fclose(fp);
   printf("\n");
   scanf("%d", ch);
   return(0);
}
