#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<semestre2.h>

void marco(int fini,int ffin,int cini,int cfin);
void valida_letra(int posx,int posy);
float valida_numero_decimal(int posx,int posy);
char auxi[50];    

int main(void)
{
	char nomb[30]; 		
	float tri1=0;      	
	float tri2=0;     	
	float tri3=0;   
	float prom=0;   	
	system("cls");		
	system("color 05"); 
	marco(1,29,1,117); 
	marco(2,4,21,98);
	gotoxy(50,3);printf("EJERCICIO 1");
    marco(5,10,2,116);
    gotoxy(4,6);printf("Desarrollado por: RAMIREZ MELANIE");
	gotoxy(4,7);printf("Elabore un programa que se ingrese el nombre y las calificaciones del primer, segundo, tercer trimestre de un");
	gotoxy(4,8);printf("un estudiante, calcule y visualice el nombre y  su promedio");
	marco(11,24,2,116);
	marco(25,28,2,116);
	gotoxy(45,12);printf("INGRESO DE DATOS - CALIFICACIONES");
	gotoxy(10,14);printf("Nombres del estudiante.......:");
	do
	{
		valida_letra(14,40);
		strcpy(nomb,auxi);
		if(strlen(nomb)==0)
		{
            gotoxy(5,26);printf("El nombre es obligatorio");
            gotoxy(5,27);printf("Presione cualquier tecla para continuar");
            getch();
            gotoxy(5,26);printf("                                                           ");
            gotoxy(5,27);printf("                                                           ");
		}
	}while(strlen(nomb)==0);
	gotoxy(10,15);printf("Nota primer trimestre........:");
	do
	{
		tri1=valida_numero_decimal(15,40);
		if(tri1>10)
		{
            gotoxy(5,26);printf("Solo valores entre 0 y 10");
            gotoxy(5,27);printf("Presione cualquier tecla para continuar");
            getch();
            gotoxy(5,26);printf("                                                           ");
            gotoxy(5,27);printf("                                                           ");
		}
	}while(tri1>10);
	gotoxy(10,16);printf("Nota segundo trimestre.......:");
	do
	{
		tri2=valida_numero_decimal(16,40);
		if(tri2>10)
		{
            gotoxy(5,26);printf("Solo valores entre 0 y 10");
            gotoxy(5,27);printf("Presione cualquier tecla para continuar");
            getch();
            gotoxy(5,26);printf("                                                           ");
            gotoxy(5,27);printf("                                                           ");
		}
	}while(tri2>10);
	gotoxy(10,17);printf("Nota tercer trimestre........:");
	do
	{
		tri3=valida_numero_decimal(17,40);
		if(tri3>10)
		{
            gotoxy(5,26);printf("Solo valores entre 0 y 10");
            gotoxy(5,27);printf("Presione cualquier tecla para continuar");
            getch();
            gotoxy(5,26);printf("                                                           ");
            gotoxy(5,27);printf("                                                           ");
		}
	}while(tri3>10);
	prom=(tri1+tri2+tri3)/3;
	gotoxy(50,19);printf("PRESENTACION DE DATOS");
	gotoxy(10,21);printf("Nombres del estudiante.......:%s",nomb);
	gotoxy(10,22);printf("Promedio.....................:%.2f",prom);
	gotoxy(5,26);printf("Fin del programa");
    gotoxy(5,27);printf("Presione cualquier tecla para continuar");
    getch();
    gotoxy(5,26);printf("                                                           ");
    gotoxy(5,27);printf("                                                           ");
}
//DESARROLLO DE LAS FUNCIONES
float valida_numero_decimal(int posx,int posy)
{
	char car;
	int posi=0;
	int indi=0;
	float nume=0;
	for(indi=0;indi<50;indi++)
    	auxi[indi]='\0';
    gotoxy(posy+posi,posx);printf("                                               ");
	do
	{
		gotoxy(posy+posi,posx);car=toupper(getch());
		gotoxy(posy+posi,posx);printf("%c",car);
		gotoxy(posy+1+posi,posx);printf(" ");
		if((car>=48 and car <= 57)|| car==13 || car=='.' || car==8)
		{
			auxi[posi]=car;
			if(car==8)
			{
				posi--;
				auxi[posi]='\0';
				gotoxy(posy+posi,posx);printf(" ");
			}
			else
			{
				auxi[posi+1]='\0';
		    	posi++;
			}
		}
		else
		{
            gotoxy(posy+posi,posx);printf(" ");
		}
	}while(car!=13);
	nume=atof(auxi);
	gotoxy(posy,posx);printf("%.2f",nume);
	return(nume);
}
void valida_letra(int posx,int posy)
{
	char car;
	int posi=0;
	int indi=0;
	for(indi=0;indi<50;indi++)
    	auxi[indi]='\0';
	do
	{
		gotoxy(posy+posi,posx);car=toupper(getch());
		gotoxy(posy+posi,posx);printf("%c",car);
		gotoxy(posy+1+posi,posx);printf(" ");
		if((car>=65 and car <= 90)|| car==13 || car==' ' || car==8)
		{
			auxi[posi]=car;
			if(car==8 or car==13)
			{
				if(car==8)
					posi--;
				auxi[posi]='\0';
				gotoxy(posy+posi,posx);printf(" ");
			}
			else
			{
				auxi[posi+1]='\0';
		    	posi++;
			}
		}
		else
		{
            gotoxy(posy+posi,posx);printf(" ");
		}
	}while(car!=13);
}
void marco(int fini,int ffin,int cini,int cfin)
{
	int arde=201;
	int ariz=187;
	int abde=200;
	int abiz=188;
	int hori=205;
	int vert=186;
	int fila=fini;
	int colu=cini;
	for(fila=fini;fila<ffin;fila++)
	{
        gotoxy(cini,fila);printf("%c",vert);
		gotoxy(cfin,fila);printf("%c",vert);
	}
	for(colu=cini;colu<cfin;colu++)
	{
        gotoxy(colu,fini);printf("%c",hori);
        gotoxy(colu,ffin);printf("%c",hori);
	}
	gotoxy(cini,fini);printf("%c",arde);
	gotoxy(cfin,fini);printf("%c",ariz);
	gotoxy(cini,ffin);printf("%c",abde);
	gotoxy(cfin,ffin);printf("%c",abiz);
}
