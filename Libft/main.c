#include "libft.h"
#include <stdio.h>

void test_atoi ()
{
   int val;
   char str[20];
   
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

   ft_strcpy(str, "This is tutorialspoint.com");

   len = ft_strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);
}

void test_strrchr ()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
}

void test_strstr()
{
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
}

void test_strncpy()
{
   char src[40];
   char dest[12];
  
   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);
}

void test_strcpy()
{
   char src[40];
   char dest[100];
  
   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
}

void test_strncmp ()
{
   char str1[15];
   char str2[15];
   int ret;

   ft_strcpy(str1, "abcdef");
   ft_strcpy(str2, "ABCDEF");

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0)
   {
      printf("str1 is less than str2");
   }
   else if(ret > 0) 
   {
      printf("str2 is less than str1");
   }
   else 
   {
      printf("str1 is equal to str2");
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

   if(ret < 0)
   {
      printf("str1 is less than str2");
   }
   else if(ret > 0) 
   {
      printf("str2 is less than str1");
   }
   else 
   {
      printf("str1 is equal to str2");
   }
}

void test_strchr ()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
}

void test_strncat ()
{
   char src[50], dest[50];
   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");
   ft_strncat(dest, src, 15);
   printf("Final destination string : |%s|", dest);
}

void test_strcat ()
{
   char src[50], dest[50];
   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");
   ft_strcat(dest, src);
   printf("Final destination string : |%s|", dest);
}

void test_memset ()
{
   char str[50];
   ft_strcpy(str,"This is string.h library function");
   printf(str);
   ft_memset(str,'$',7);
   printf(str);
}

void test_memmove ()
{
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
}

void test_memcpy ()
{
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];

   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
}

void test_memchr ()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;
   ret = ft_memchr(str, ch, strlen(str));
   printf("String after |%c| is - |%s|\n", ch, ret);
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