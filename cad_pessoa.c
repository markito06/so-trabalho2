#include <stdio.h>
#include <string.h>

struct funcionario{
	unsigned int id;
	char nome[256];
	char sexo;
	float salario;
}

int main (int argc, char **argv) {
	FILE *f;
	char string[256];
	char nomeArquivo[] = argv[1]; 

	if((f = fopen(nomeArquivo,	"a+")) == NULL) {
		printf("Erro ao abrir arquivo\n");
		return 1;
	}
	printf ("Digite um numero: ");
	scanf ("%d",&num);
	switch (num)
        {
        	case 1:
                	printf ("\n\nO numero e igual a 9.\n");
        	break;
        	case 2:
                	printf ("\n\nO numero e igual a 10.\n");
        	break;
        	case 3:
                	printf ("\n\nO numero e igual a 11.\n");
        	break;
        	default:
                	printf ("\n\nO numero nao e nem 9 nem 10 nem 11.\n");
        }

	do {
     	fgets(string, 256, stdin);
     	fputs(string, f);
	} while(string[0] != '\n');

	rewind(f);

	while (fgets(string, 256, f) != NULL)		
		fputs(string, stdout);

	fclose(f);
	return 0;
}
