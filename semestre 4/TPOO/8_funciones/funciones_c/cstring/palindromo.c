#include <stdio.h>
#include<conio.h>
void quitar_acentos(char[]);
void quitar_minusculas(char[]);
void palindromo(void){
	int i=0;
	int cert=0;
	int j=0;
	int k=0;
	char cad[30];
	clrscr();
	puts("Introuce una frase y te dire si es un palindromo");
	fflush(stdin);
	gets(cad);
	strupr(cad);
	do{
		if (cad[i]==' '){
			k=i;
			do{
				cad[k]=cad[k+1];
				k++;
			}while(cad[k]!='\0');
		}
		i++;
	}while (cad[i]!='\0');
	k=0;
	j=0;
	i=i-1;
	quitar_acentos(cad);
	quitar_minusculas(cad);
	while(cad[i]==cad[j]){
		i--;
		j++;

		if(i==0)
			cert=1;
	}
	if (cert==1)
		puts("Si es un palindromo");
	else
		puts("No es un palindromo");
	getch();
/*------------------quitar_acentos------------------*/
void quitar_acentos(char cad[]){
	int i;
	for(i=0;cad[i]!='\0';i++){
	toupper(cad[i]);
	switch(cad[i]){
		case '�': cad[i]='A';
			break;
		case '�': cad[i]='E';
			break;
		case '�': cad[i]='I';
			break;
		case '�': cad[i]='O';
			break;
		case '�': cad[i]='U';
			break;
		case '�': cad[i]='A';
			break;
		case '�': cad[i]='E';
			break;
		case '�': cad[i]='I';
			break;
		case '�': cad[i]='U';
			break;
		case '�': cad[i]='U';
			break;
		}
	}

}
/*-------------------QUITAR MINUSCULAS CON ACENTO---------------*/
void quitar_minusculas(char cad[]){
	int i;
	for(i=0;cad[i]!='\0';i++){
	switch(cad[i]){
		case '�': cad[i]='A';
			break;
		case '�': cad[i]='E';
			break;
		case '�': cad[i]='I';
			break;
		case 'o': cad[i]='O';
			break;
		case '�': cad[i]='U';
			break;
		case '�': cad[i]='A';
			break;
		case '�': cad[i]='E';
			break;
		case '�': cad[i]='I';
			break;
		case '�': cad[i]='O';
			break;
		case '�': cad[i]='U';
			break;
		}
	}
}

