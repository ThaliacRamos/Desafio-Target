#include <stdio.h>
#include <string.h>

int main ()
{
	char s[51], sAux[51];
	
	printf("Entrada: ");
	scanf("%[^\n]s", &s);
	
	int i, j, n;
	
	n= strlen (s);
	
	j= n-1;
	
	for(i=0; i<n; i++)
	{
		sAux[i] = s[j];
		j = j-1;
	}
	
	sAux[i] = '\0';
	
	printf("Resultado: %s\n", sAux);
	
	return(0);
}