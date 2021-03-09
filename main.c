//Imports. stdio - default. stdlib - system(to run commands). string - to cat strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
      if (strlen(argv[1]) > 99)
      {
        printf("File path (Wayyy) too long. Execution faild\n");
        return (1);
      } 
      //assuming it is not too big it will continue to work as normal.
      else
      {
        // combining the word py3(to run the command) and our arg(the file path(hopefully?) in order to get the full name)
        char py[99] = "python3 ";
        strcat(py, argv[1]);
        system(py);
      }
    }

}
