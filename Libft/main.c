#include "libft.h"
#include <stdio.h>

#define GREEN "\x1B[32m"
#define NORMAL "\x1B[0m"

void test_atoi ()
{
   int val;
   char str[20];
   
   printf("%sTest de la fonction ATOI%s\n", GREEN, NORMAL);

   ft_strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("str = %s, int = %d\n", str, val);

   ft_strcpy(str, "abcdef");
   val = ft_atoi(str);
   printf("str = %s, int = %d\n", str, val);

   ft_strcpy(str, "-1597532");
   val = ft_atoi(str);
   printf("str = %s, int = %d\n", str, val);

   ft_strcpy(str, "-2147483649");
   val = ft_atoi(str);
   printf("str = %s, int = %d\n", str, val);

   ft_strcpy(str, "2147483648");
   val = ft_atoi(str);
   printf("str = %s, int = %d\n", str, val);
}

void test_strlen ()
{
   char str[50];
   int len;

   ft_strcpy(str, "abcdef");

   len = ft_strlen(str);
   printf("%sTest de la fonction STRLEN%s\n", GREEN, NORMAL);
   printf("Longueur de '%s' est %d\n", str, len);
}

void test_strrchr ()
{
   const char str[] = "http://www.42.fr";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);
   printf("%sTest de la fonction strrchr pour str = '%s' %s\n", GREEN, str, NORMAL);
   printf("Chaine de caractere apres '%c' est '%s'\n", ch, ret);
}

void test_strstr()
{
   const char haystack[20] = "Ecole42";
   const char needle[10] = "42";
   char *ret;

   ret = ft_strstr(haystack, needle);
   printf("%sTest de la fonction STRSTR pour str = '%s' %s\n", GREEN, haystack, NORMAL);
   printf("Le sous-mot est '%s'\n", ret);
}

void test_strncpy()
{
   char src[40];
   char dest[12];
  
   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "ecole42 a ete copie");
   ft_strncpy(dest, src, 10);
   printf("Test de la fonction STRNCPY pour src = '%s' et n = 10\n", src);
   printf("La chaine copie dans dest est '%s'\n", dest);
}

void test_strcpy()
{
   char src[40];
   char dest[100];
  
   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strcpy(dest, src);
   printf("Test de la fonction STRCPY pour src = '%s'\n", src);
   printf("La chaine copie dans dest est '%s'\n", dest);
}

void test_strncmp ()
{
   char str1[15];
   char str2[15];
   int ret;

   ft_strcpy(str1, "abcdef");
   ft_strcpy(str2, "ABCDEF");

   printf("Test de la fonction strncmp pour str1 = '%s' et str2 = '%s' et n = 4\n", str1, str2);
   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0)
   {
      printf("str1 est plus petit que str2\n");
   }
   else if(ret > 0) 
   {
      printf("str2 est plus petit que str1\n");
   }
   else 
   {
      printf("str1 est egale a str2\n");
   }
}

void test_strcmp ()
{
   char str1[15];
   char str2[15];
   int ret;

   ft_strcpy(str1, "abcdef");
   ft_strcpy(str2, "ABCDEF");

   ret = ft_strcmp(str1, str2);
   printf("Test fonction strcmp pour str1 = '%s' et str2 = '%s'\n", str1, str2);
   if(ret < 0)
   {
      printf("str1 est plus petit que str2\n");
   }
   else if(ret > 0) 
   {
      printf("str2 est plus petit que str1\n");
   }
   else 
   {
      printf("str1 est egale a str2\n");
   }
}

void test_strchr ()
{
   const char str[] = "abc.def";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);
   printf("Test de la fonction STRCHR pour str = '%s' et c = '%c'\n", str, ch);
   printf("La chaine de caractere apres '%c' est '%s'\n", ch, ret);
}

void test_strncat ()
{
   char src[50], dest[50];
   ft_strcpy(src,  "Ceci est la Source");
   ft_strcpy(dest, "Ceci est la Destination");
   printf("Test de la fonction STRNCAT pour src = '%s' et dest = '%s' et n =15\n", src, dest);
   ft_strncat(dest, src, 15);
   printf("Destination vaut '%s'\n", dest);
}

void test_strcat ()
{
   char src[50], dest[50];
   ft_strcpy(src,  "Ceci est la Source");
   ft_strcpy(dest, "Ceci est la Destination");
   printf("Test de la fonction STRCAT pour src = '%s' et dest = '%s'\n", src, dest);
   ft_strcat(dest, src);
   printf("Destination vaut %s\n", dest);
}

void test_memset ()
{
   char str[50];
   ft_strcpy(str,"Ceci est une fonction de la libft : memset");
   ft_putstr(str);
   ft_putchar('\n');
   ft_memset(str,'$',7);
   ft_putstr(str);
   ft_putchar('\n');
}

void test_memmove ()
{
   char dest[] = "old";
   const char src[]  = "new";

   printf("Avant memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("Apres memmove dest = %s, src = %s\n", dest, src);
}

void test_memcpy ()
{
   const char src[50] = "http://www.42.fr";
   char dest[50];

   printf("Avant memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, ft_strlen(src)+1);
   printf("Apres memcpy dest = %s\n", dest);
}

void test_memchr ()
{
   const char str[] = "http://www.42.fr";
   const char ch = '.';
   char *ret;
   ret = ft_memchr(str, ch, ft_strlen(str));
   printf("Chaine apres '%c'est '%s'\n", ch, ret);
}

int main(void)
{
	test_atoi();
	ft_putchar('\n');

	test_strlen();
	ft_putchar('\n');

	test_strrchr();
	ft_putchar('\n');

	test_strstr();
	ft_putchar('\n');

	test_strncpy();
	ft_putchar('\n');

	test_strcpy();
	ft_putchar('\n');

	test_strncmp();
	ft_putchar('\n');

	test_strcmp();
	ft_putchar('\n');

	test_strchr();
	ft_putchar('\n');

	test_strncat();
	ft_putchar('\n');

	test_strcat();
	ft_putchar('\n');

	test_memset();
	ft_putchar('\n');

	test_memmove();
	ft_putchar('\n');

	test_memcpy();
	ft_putchar('\n');

	test_memchr();
	ft_putchar('\n');

	return 0;
}
