#include<stdio.h>
#include<conio.h>

int main()
{
	FILE* archivo;
	char r;
	
	// Crear y escribir archivo
	archivo = fopen("datos.txt", "w");
	if (archivo == NULL) 
	{ 
		puts("Error al abrir el archivo"); 
		return -1;
	}
	putc('S', archivo);
	fclose(archivo);
	
	// Abrir y leer archivo
	archivo = fopen("datos.txt", "r");
	r = getc(archivo);
	fclose(archivo);
	
	printf("Leido: %c", r);
}