#include "../libft.h"
#include <stdio.h>

int main(void)
{
	int result;
	printf("\nTEST ft_atoi()\n");
	//Positive Integer
	char str1[] = "12345";
	result = atoi(str1);
	printf("ER:String: %s, Integer: %d\n", str1, result);
	result = ft_atoi(str1);
	printf("AR:String: %s, Integer: %d\n", str1, result);
	//Negative Integer
	char str2[] = "-12345";
	result = atoi(str2);
	printf("ER:String: %s, Integer: %d\n", str2, result);
	result = ft_atoi(str2);
	printf("AR:String: %s, Integer: %d\n", str2, result);
	//Mixed Spaces and Non-Numeric Characters
	char str3[] = "  -123abc ";
	result = atoi(str3);
	printf("ER:String: %s, Integer: %d\n", str3, result);
	result = ft_atoi(str3);
	printf("AR:String: %s, Integer: %d\n", str3, result);
	//Empty String
	char str4[] = "";
	result = atoi(str4);
	printf("ER:String: %s, Integer: %d\n", str4, result);
	result = ft_atoi(str4);
	printf("AR:String: %s, Integer: %d\n", str4, result);
	//String with Only Spaces
	char str5[] = "   ";
	result = atoi(str5);
	printf("ER:String: %s, Integer: %d\n", str5, result);
	result = ft_atoi(str5);
	printf("AR:String: %s, Integer: %d\n", str5, result);
	//String with Only a Sign
	char str6[] = "-";
	result = atoi(str6);
	printf("ER:String: %s, Integer: %d\n", str6, result);
	result = ft_atoi(str6);
	printf("AR:String: %s, Integer: %d\n", str6, result);
	//String with a Sign and Non-Numeric Characters
	char str7[] = "-abc";
	result = atoi(str7);
	printf("ER:String: %s, Integer: %d\n", str7, result);
	result = ft_atoi(str7);
	printf("AR:String: %s, Integer: %d\n", str7, result);
	//Minimum Value
	char str_min[] = "-2147483648";
	result = atoi(str_min);
	printf("ER:String: %s, Integer: %d\n", str_min, result);
	result = ft_atoi(str_min);
	printf("AR:String: %s, Integer: %d\n", str_min, result);
	//Maximum Value
	char str_max[] = "2147483647";
	result = atoi(str_max);
	printf("ER:String: %s, Integer: %d\n", str_max, result);
	result = ft_atoi(str_max);
	printf("AR:String: %s, Integer: %d\n", str_max, result);
	//Minimum Value Overflow
	char str_min1[] = "-2147483649";
	result = atoi(str_min1);
	printf("ER:String: %s, Integer: %d\n", str_min1, result);
	result = ft_atoi(str_min1);
	printf("AR:String: %s, Integer: %d\n", str_min1, result);
}