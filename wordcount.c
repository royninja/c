/**
	Program to count total number of lines, words and characters in a file. The program accepts -l -c -w as the parameter**/
#include<stdio.h>
#include<stdlib.h>
void help()
{
	printf("\nUsage: wordcount.exe -<option name> filename");
	printf("\n");
	printf("\n-l\t For Line Count");
	printf("\n-c\t For Character Count");
	printf("\n-w\t For Word count");
}
int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int choice;
	int line,word,character;
	line=0;
	word = 0;
	character=0;
	if(argc == 1)
	{
		help();
		exit(1);
	}
	
	fp = fopen(argv[2],"r");
	if(fp == NULL)
		printf("File Doesnot exist");
	
	choice = (int)argv[1][0]+argv[1][1];
	
	switch(choice)
	{
		case 153:
			printf("\nCounting the number of lines");
			while((fscanf(fp,"%c",&ch))!=EOF)
			{
				if(ch == '.' || ch == '?' || ch == '!')
				{
					line++;
				}
			}
			printf("\nLine:  %d",line);
			break;
		case 144:
			printf("\nCounting the number of character");
			while((fscanf(fp,"%c",&ch))!=EOF)
			{
				if(ch)
				{
					character++;
				}
			}
			printf("\ncharacter: %d",character);
			break;
		case 164:
			printf("\nCounting the number of word");
			while((fscanf(fp,"%c",&ch))!=EOF)
			{
				if(ch == ' ')
				{
					++word;
				}
			}
			printf("\nword: %d",word+1);
			break;
		case 149:
			help();
			break;
		default: printf("Enter -h to show the help menu");
	}
	return 0;
}
