#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[]) {
   char *filename;
   //checking arguments.
   if(argc >= 2){
        filename=argv[1];
} else{
       printf("No file selected. Select a file to cut its text in the command line.");
       exit(0);
   }

   //opening file as read-only to ensure we dont create a new file; only erase current ones.
   FILE *file= fopen(filename, "r");
   //checking if file exists.
    if (!file) {
        perror("fopen");
        exit(1);
    }

    //this code cannot create a new file due to the code above. Cuts all text from chosen file.
    file= fopen(filename, "w+");
    fclose(file);
    return  0;
}
