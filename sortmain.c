/* Program Name: sortlines.c
 * Purpose: sort lines of text
 * Date: 2/26/21
 */

#include "sortlines.h"

#define MIN_SIZE 2048

/* sort with bubble sort */
/*
void *sort_buffer  ( char *sortbuff, char *outbuff ) {

	char bufferA[11]; bufferA [10] = '\0'; 
	char bufferB[11]; bufferB [10] = '\0'; 
	
	int reader; 
	
	 read outbuffer until EOF 	
 	for (reader = 0; reader < MIN_SIZE; reader++) {
			
			// check for newline 
			  // store in bufferA
			  // proceed until next newline 
				// store to bufferB

			// compare the first character of bufferA and bufferB 
				//if they're equal, store bufferA or bufferB to sortbuffer
				//if bufferA is less than bufferB, store bufferA to sortbuffer
				//if bufferA is greater than bufferB, store bufferB to sortbuffer
				  
	}
}
*/

int main(int argc, char *argv[])
{
	FILE *fin, *fout;
	char fout_name[11]; fout_name[10] = '\0'; 
	int size, index, count;
	char ch;
  char lstr[11]; 
	char outbuff[MIN_SIZE];
	char sortbuff[MIN_SIZE]; 
	char *sort_cmd = "sort";

	lstr[10] = '\0'; /*  null terminate string */
	
	index = 0; 

  if (argc != 4)
	{
			printf("Usage error: Format choice '1', '2', or '3' in_file, out_file\n");
			exit(1);
	}

	if (atoi(argv[1]) == 2)
	{	
		
			fin = fopen(argv[2], "r");
			if ( fin  == NULL)
			{
				fprintf(stderr, "Can't read %s.\n", argv[2]);
				exit(1);
			}

			fout = fopen(argv[3], "w");
			if (fout == NULL)
			{
				fprintf(stderr, "can't create file.\n", argv[3]);
				exit(1);
			}

			size = get_file_size(fin);
				
			printf("reading file: \n"); 

			while ( (ch = getc(fin)) != EOF) {
				
						/* read character until new line!*/
						lstr[index] = ch; 

						/* precondition: new line */
						if (ch == '\n') {
						   
								/* write the first 10 chars to fout */ 
								int i;
								for (i = 0; i < 11; i++) {
										putc( lstr[i], fout ); 
								}
							
								/* reclear the string buffer */
								int j;
								for (j = 0; j < sizeof(lstr); j++){
										lstr[j] = ' '; 
								}

								/* reset index */
								fputc('\n', fout); 
								index = 0; 
								continue; 
						}//if \n

						/* increment */
						index++; 

      }//while()


		/* sort the outfile */ 	
		
		/*
		int length = strlen(sort_cmd) + sizeof(fout_name) + 1; 
		char sys_cmd [length +1]; //+1 for null terminator;
		sys_cmd [length] = '\0'; 

		strcpy(&fout_name, argv[3]); 		
		printf("fout: %s\n", fout_name); 
	
		strcpy(&sys_cmd, sort_cmd);
		strcat(&sys_cmd, " ");
		strcat(&sys_cmd, &fout_name);
	
		printf("system command: %s\n", &sys_cmd); 
		
		system(&sys_cmd); 

		printf("copied.\n");

		*/
	fclose(fin);
	fclose(fout);
	return 0;

  }//if (atoi(argv[1]) 
}//int main()
		

 				






