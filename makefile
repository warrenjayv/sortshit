
install : sortlines.c sortmain.c
	gcc -g sortlines.c sortmain.c -o sort 2> gcc_out.txt


