#include <stdio.h>
#include <string.h>

int main()
{
   char buff[1024]; //this buffer can hold 1024 characters
   memset( buff, '\0', sizeof( buff ));
   fprintf(stdout, "Going to set full buffering on\n");
   setvbuf(stdout, buff, _IOFBF, 1024); //creating a buffer into buff[] array;
   /*
   The C library function int setvbuf(FILE *stream, char *buffer, int mode, size_t size) defines
   how a stream should be buffered.
   SINTHAX: int setvbuf(FILE *stream, char *buffer, int mode, size_t size)
    stream − This is the pointer to a FILE object that identifies an open stream.
    buffer − This is the user allocated buffer. If set to NULL, the function automatically allocates a
                buffer of the specified size.
    mode − This specifies a mode for file buffering :
            _IOFBF 	Full buffering − On output, data is written once the buffer is full.
            On Input the buffer is filled when an input operation is requested and the buffer is empty.
            _IOLBF 	Line buffering − On output, data is written when a newline character is inserted into
            the stream or when the buffer is full, what so ever happens first. On Input, the buffer is filled till the
            next newline character when an input operation is requested and buffer is empty.
            _IONBF 	No buffering − No buffer is used. Each I/O operation is written as soon as possible.
            The buffer and size parameters are ignored.
   */
   fprintf(stdout, "This is tutorialspoint.com\n");
   fprintf(stdout, "This output will go into buff\n");
   fflush(stdout); // this carries the message to the screen when we use a buffer.
   /*
   If stream points to an output stream or an update stream in which the most recent operation was not input,
   the fflush function causes any unwritten data for that stream to be delivered to the host environment to be
   written to the file; otherwise, the behavior is undefined.
   USAGE:
   For output streams (AS IN OUR CASE), fflush() forces a write of all user-space buffered data for the given output
   or update stream.
   For input streams, fflush() discards any buffered data that has been fetched from the underlying file, but has
   not been consumed by the application.
   */

   fprintf(stdout, "and this will appear when program\n");
   fprintf(stdout, "will come after sleeping 5 seconds\n");
   //fflush(stdout); //if you uncomment this line you will be able to see the last 2 messages which were putted into
   //the buffer, but which were not yet printed because the buffer wasn't flushed.
   scanf("%d");
   return(0);
}
