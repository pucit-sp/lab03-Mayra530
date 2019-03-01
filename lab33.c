#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <libgen.h>

/*	
**	This function take file pointer as paramter to read content from and 
**	char pointer as an second argument which points to string to search in file
*/

    void mygrep(FILE *fp, char * str)

{

    FILE *fp1;

    fp1 = fopen("fp1","w");

    char s[10],c;

    int len = strlen(str);

    int i = 0;

    int d;

    int seek = fseek(fp, 0, 0);

    c = fgetc(fp);

    while (c != EOF)

    {

        if (c == ' ' || c == '\n')

        {

            s[i] = '\0';

            i = 0;

            if (strcmp(s, str) == 0)

            {

                while (c = fgetc(fp) != '\n')

                {

                    fseek(fp, -2L, 1);

                    d = ftell(fp);

                }

                while ((c = fgetc(fp)) != '\n')

                {

                    fputc(c, fp1);

                }

            }

        }

        else

        {

            s[i] = c;

            i++;

        }

        c = fgetc(fp);

    }
 
   

}

/*	
**	This function take file pointer as paramter to read content from and 
**	char pointer as an second argument which points to string to search in file
** 	and char pointer as an third argument to replace the string finded with it.
*/



/*void replaceAll(char *str, const char *oldWord, const char *newWord)
{
    char *pos, temp[BUFFER_SIZE];
    int index = 0;
    int owlen;

    owlen = strlen(oldWord);


    /*
     * Repeat till all occurrences are replaced. 
     */
  /*  while ((pos = strstr(str, oldWord)) != NULL)
    {
        // Bakup current line
        strcpy(temp, str);

        // Index of current found word
        index = pos - str;

        // Terminate str after word found index
        str[index] = '\0';

        // Concatenate str with new word 
        strcat(str, newWord);
        
        // Concatenate str with remaining words after 
        // oldword found index.
        strcat(str, temp + index + owlen);
    }
}*/
int  main(int argc,char *argv[])
{



   /*	creating variables	
*/      char *exe=basename(argv[0]);

	int behaviour;
	FILE *fp;
	char *filename=argv[1];
	char *find=argv[2];
	//char * replace;
       
	/*	check if mygrep is called or myreplace	
*/
	
	
		
		
	   fp=fopen(filename,"rt");

	
	
		mygrep(fp,find);		/*	caling function	
*/
	
	
	
	fclose(fp);		/*	closing file	
*/
	return 0;
}




