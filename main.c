#include<stdlib.h>
#include<stdio.h>

int compara(char character,char chave[],char inc[]);  
int equipara(char chave[],char inc[]);
int printforca(int erro);
int acertou(char inc[]);  
    
int compara(char character,char chave[],char inc[])
{
int i,result=0;

for(i=0;chave[i]!='\0';i++)
	if(chave[i]==character)
	{
		result=1;
		inc[i]=character;
	}
return result;
}
int equipara(char chave[],char inc[])
{
int i;
for (i=0;chave[i]!='\0';i++)
	if(chave[i]==' ')
		inc[i]=' ';
	else
		inc[i]='*';
inc[i]='\0';
return 0;
}
int printforca(int erro)
{
	if (erro==0)
		printf(" _____\n//    \n||\n||\n||\n-----------\nfaltam %d tentativas\n",6-erro);
	else
		if (erro==1)
			printf(" _____\n//    0\n||\n||\n||\n-----------\nfaltam %d tentativas\n",6-erro);
		else
			if (erro==2)
				printf(" _____\n//    0\n||   /\n||\n||\n-----------\nfaltam %d tentativas\n",6-erro);
			else
				if (erro==3)
					printf(" _____\n//    0\n||   /|\n||\n||\n-----------\nfaltam %d tentativas\n",6-erro);
				else
					if (erro==4)
						printf(" _____\n//    0\n||   /|\\\n||\n||\n-----------\nfaltam %d tentativas\n",6-erro);
					else
						if (erro==5)
							printf(" _____\n//    0\n||   /|\\\n||    /\n||\n-----------\nfaltam %d tentativas\n",6-erro);
						else
							printf(" _____\n//    0\n||   /|\\\n||    /\\\n||\n-----------\nfaltam %d tentativas\n",6-erro);
return 0;
}
int acertou(char inc[])
{
int i;
for (i=0;inc[i]!='\0';i++)
	if(inc[i]=='*')
		return 1;
return 0;
}
int main ()
{
char character,inc[50],chave[50]="bola de neve";
int erro=0;
equipara(chave,inc);
while(erro<6 && acertou(inc))
{
	system("clear");
	printforca(erro);
	printf("\n[%s]\n\n",inc);
	scanf(" %c",&character);
	if(!compara(character,chave,inc))/*errou*/
		erro++;
}
system("clear");
printforca(erro);
printf("\n[%s]\n\n",inc);
return 0;
}
