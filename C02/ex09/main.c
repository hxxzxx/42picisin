#include <stdio.h>
char *ft_strcapitalize(char *str);

int main(void)
{
	char string[] = "sAlut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *pointer;

	pointer = ft_strcapitalize(string);
	printf("%s",pointer);
	return(0);
}
