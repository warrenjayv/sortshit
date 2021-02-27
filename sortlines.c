#include "sortlines.h"




/* get file size */
int get_file_size(FILE* fp) {
    /*seek end of file*/
    if (fseek(fp, 0, SEEK_END) == 0) {

     int size = ftell(fp);
      fseek(fp, 0, SEEK_SET); /* restore pointer to original position */
      return size; /* return position */
   }
}

