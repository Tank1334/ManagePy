#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // for *NIX systems only, remove if on windows 
//Looking for args
int main(int argc, char *argv[])
{
    //checking that there are args
    if (argc < 2)
    {
      printf("Invalid arguments, please try again.\n");
      return(1);
    }   
    else    
    {
      // Checking if the filename is too long(limited so that it's not overflowed)
      /*if (strlen(argv[1]) > 99)
      {
        printf("File path (Wayyy) too long. Execution faild\n");
        return (1);
      } */ 
//assuming it is not too big it will continue to work as normal.
        // combining the word py3(to run the command) and our arg(the file path(hopefully?) in order to get the full name)
        char* py = "python3 "; // make char pointer so there can be no overflow 
        strcat((py - 1), argv[1]); // remove the null terminator
        execlp(py, py, NULL); // prefer exec() vs system() as exec closes the previous function while system() uses the fork() function to create a new child process // execlp() is part of unistd.h, so again if using windows prefer system()
    }
  return 0; // be consistent
}
