#include <stdio.h>
#include <stdlib.h>

void Entrance();
int main() {
	float a, b, c, d, e, f, g, h, i, j, total, difference, division, multiplication, modulus;
	char option;
	int nums, cont;
	Entrance();
	
	for(;;) {
		system("cls");
		printf(">>>>>> WELCOME TO MY CALCULATOR <<<<<<<<<<<<<<<<<<<<<<<<<\n");
		printf(">>>---------------------------------------------------<<<\n");
		printf(">>> Please select your operator on the following menu <<<\n");
		printf(">>>---------------------------------------------------<<<\n");
		printf(">>> a) - Adding                                       <<<\n");
		printf(">>> b) - Subtracting                                  <<<\n");
		printf(">>> c) - Division                                     <<<\n");
		printf(">>> d) - Multiplication                               <<<\n");
		printf(">>> e) - Modulus                                      <<<\n");
		printf(">>> f) - Exiting                                      <<<\n>>> Choice : ");
		scanf("%s", &option);
		printf(">>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		
		if(option == 'a' || option == 'A')
		{
			printf(">>>>>>>>> LETS ADD NUMBERS TOGETHER <<<<<<<<<<<<<<<<<<<<<\n");
			printf(">>>---------------------------------------------------<<<\n");
			printf(">>> How many numbers would you like to add together?  <<<\n");
			printf(">>> (Options are 2 to 10)                             <<<\n>>> Choice : ");
			scanf("%d", &nums);
			printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
			if(nums == 2)
			{
				system("cls");
				printf(">>>>>>>> LETS ADD 2 NUMBERS TOGETHER <<<<<<<<<<<<<<<<<<<<\n");
				printf(">>>---------------------------------------------------<<<\n");
				printf(">>> Enter first number:                               <<<\n>>> Number : ");
				scanf("%f", &a);
				printf(">>> Enter last number:                                <<<\n>>> Number : ");
				scanf("%f", &b);
				total = a + b;
				printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<\n");
				printf(">>> Answer is %.2f <<<\n", total);
				printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<\n");
				printf(">>> Press 1 and ENTER to continue                     <<<\n>>> ");
				scanf("%d", &cont);
				printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<\n");
				continue;
				
			}
			if(nums == 3)
			{
				system("cls");
				printf(">>>>>>>>>>>> LETS ADD 3 NUMBERS TOGETHER <<<<<<<<<<<<<\n");
				printf(">>> Enter first number:                            <<<\n>>> ");
				scanf("%f", &a);
				printf(">>> Enter second number:                           <<<\n>>> ");
				scanf("%f", &b);
				printf(">>> Enter last number:                             <<<\n");
				printf(">>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<\n>>> ");
				scanf("%f", &c);
				total = a + b + c;
				printf(">>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<\n");
				printf(">>> Answer is %.2f                <<<\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				printf(">>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<\n>>> ");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 4)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>> LETS ADD 4 NUMBERS TOGETHER <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter last number: ");
				scanf("%f", &d);
				total = a + b + c + d;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 5)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS ADD 5 NUMBERS TOGETHER <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter last number: ");
				scanf("%f", &e);
				system("cls");
				total = a + b + c + d + e;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 6)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS ADD 6 NUMBERS TOGETHER <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter last number: ");
				scanf("%f", &f);
				system("cls");
				total = a + b + c + d + e + f;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 7)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS ADD 7 NUMBERS TOGETHER <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter last number: ");
				scanf("%f", &g);
				system("cls");
				total = a + b + c + d + e + f + g;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 8)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS ADD 8 NUMBERS TOGETHER <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter last number: ");
				scanf("%f", &h);
				system("cls");
				total = a + b + c + d + e + f + g + h;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 9)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS ADD 9 NUMBERS TOGETHER <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter eigth number: ");
				scanf("%f", &h);
				printf(">>> Enter last number: ");
				scanf("%f", &i);
				system("cls");
				total = a + b + c + d + e + f + g + h + i;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 10)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS ADD 10 NUMBERS TOGETHER <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter eigth number: ");
				scanf("%f", &h);
				printf(">>> Enter ninth number: ");
				scanf("%f", &i);
				printf(">>> Enter last number: ");
				scanf("%f", &j);
				system("cls");
				total = a + b + c + d + e + f + g + h + i + j;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			else
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
				printf(">>> ***INVALID OPTION...LET'S TRY AGAIN!!!***         <<<\n");
				printf(">>> Press 1 and ENTER to try gain                     <<<\n>>> ");
				scanf("%d", &cont);
				continue;
			}
		}
		if(option == 'b' || option == 'B')
		{
			printf(">>>>>>>>> LETS SUBTRACT NUMBERS <<<<<<<<<<<<\n");
			printf(">>> How many numbers would you like to subtract? <<<\n");
			printf(">>> (Options are 2 to 10)\n");
			scanf("%d", &nums);
			if(nums == 2)
			{
				system("cls");
				printf(">>>>>>>> LETS SUBTRACT 2 NUMBERS <<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter last number: ");
				scanf("%f", &b);
				system("cls");
				total = a - b;
				printf(">>> Answer is %.2f\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 3)
			{
				system("cls");
				printf(">>>>>>>>>>>> LETS SUBTRACT 3 NUMBERS <<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter last number: ");
				scanf("%f", &c);
				system("cls");
				total = a - b - c;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 4)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>> LETS SUBTRACT 4 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter last number: ");
				scanf("%f", &d);
				system("cls");
				total = a - b - c - d;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 5)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS SUBTRACT 5 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter last number: ");
				scanf("%f", &e);
				system("cls");
				total = a - b - c - d - e;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 6)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS SUBTRACT 6 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter last number: ");
				scanf("%f", &f);
				system("cls");
				total = a - b - c - d - e - f;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 7)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS SUBTRACT 7 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter last number: ");
				scanf("%f", &g);
				system("cls");
				total = a - b - c - d - e - f - g;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 8)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS SUBTRACT 8 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter last number: ");
				scanf("%f", &h);
				system("cls");
				total = a - b - c - d - e - f - g - h;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 9)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS SUBTRACT 9 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter eigth number: ");
				scanf("%f", &h);
				printf(">>> Enter last number: ");
				scanf("%f", &i);
				system("cls");
				total = a - b - c - d - e - f - g - h - i;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 10)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LETS SUBTRACT 10 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter eigth number: ");
				scanf("%f", &h);
				printf(">>> Enter ninth number: ");
				scanf("%f", &i);
				printf(">>> Enter last number: ");
				scanf("%f", &j);
				system("cls");
				total = a - b - c - d - e - f - g - h - i - j;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			else
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
				printf(">>> ***INVALID OPTION...LET'S TRY AGAIN!!!***         <<<\n");
				printf(">>> Press 1 and ENTER to try gain                     <<<\n>>> ");
				scanf("%d", &cont);
				continue;
			}	
		}
		if(option == 'c' || option == 'C')
		{
			printf(">>>>>>>>> LET'S DIVIDE SOME NUMBERS <<<<<<<<<<<<\n");
			printf(">>> How many numbers would you like to divide? <<<\n");
			printf(">>> (Options are 2 to 10)\n");
			scanf("%d", &nums);
			if(nums == 2)
			{
				system("cls");
				printf(">>>>>>>> LET'S DIVIDE 2 NUMBERS <<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter last number: ");
				scanf("%f", &b);
				system("cls");
				total = a / b;
				printf(">>> Answer is %.2f\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 3)
			{
				system("cls");
				printf(">>>>>>>>>>>> LET'S DIVIDE 3 NUMBERS <<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter last number: ");
				scanf("%f", &c);
				system("cls");
				total = a / b / c;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 4)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>> LET'S DIVIDE 4 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter last number: ");
				scanf("%f", &d);
				system("cls");
				total = a / b / c / d;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 5)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S DIVIDE 5 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter last number: ");
				scanf("%f", &e);
				system("cls");
				total = a / b / c / d / e;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 6)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>> LET'S DIVIDE 6 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter last number: ");
				scanf("%f", &f);
				system("cls");
				total = a / b / c / d / e / f;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 7)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S DIVIDE 7 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter last number: ");
				scanf("%f", &g);
				system("cls");
				total = a / b / c / d / e / f / g;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 8)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S DIVIDE 8 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter last number: ");
				scanf("%f", &h);
				system("cls");
				total = a / b / c / d / e / f / g / h;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 9)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S DIVIDE 9 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter eigth number: ");
				scanf("%f", &h);
				printf(">>> Enter last number: ");
				scanf("%f", &i);
				system("cls");
				total = a / b / c / d / e / f / g / h / i;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 10)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S DIVIDE 10 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter eigth number: ");
				scanf("%f", &h);
				printf(">>> Enter ninth number: ");
				scanf("%f", &i);
				printf(">>> Enter last number: ");
				scanf("%f", &j);
				system("cls");
				total = a / b / c / d / e / f / g / h / i / j;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			else
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
				printf(">>> ***INVALID OPTION...LET'S TRY AGAIN!!!***         <<<\n");
				printf(">>> Press 1 and ENTER to try gain                     <<<\n>>> ");
				scanf("%d", &cont);
				continue;
			}	
		}
		if(option == 'd' || option == 'D')
		{
			printf(">>>>>>>>> LET'S MUTLPLY SOME NUMBERS <<<<<<<<<<<<\n");
			printf(">>> How many numbers would you like to divide? <<<\n");
			printf(">>> (Options are 2 to 10)\n");
			scanf("%d", &nums);
			if(nums == 2)
			{
				system("cls");
				printf(">>>>>>>> LET'S MULTIPLY 2 NUMBERS <<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter last number: ");
				scanf("%f", &b);
				system("cls");
				total = a * b;
				printf(">>> Answer is %.2f\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 3)
			{
				system("cls");
				printf(">>>>>>>>>>>> LET'S MULTIPLY 3 NUMBERS <<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter last number: ");
				scanf("%f", &c);
				system("cls");
				total = a * b * c;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 4)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>> LET'S MULTIPLY 4 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter last number: ");
				scanf("%f", &d);
				system("cls");
				total = a * b * c * d;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 5)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S MULTIPLY 5 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter last number: ");
				scanf("%f", &e);
				system("cls");
				total = a * b * c * d * e;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 6)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>> LET'S MULTIPLY 6 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter last number: ");
				scanf("%f", &f);
				system("cls");
				total = a * b * c * d * e * f;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 7)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S MULTIPLY 7 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter last number: ");
				scanf("%f", &g);
				system("cls");
				total = a * b * c * d * e * f * g;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 8)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S MULTIPLY 8 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter last number: ");
				scanf("%f", &h);
				system("cls");
				total = a * b * c * d * e * f * g * h;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 9)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S MULTIPLY 9 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter eigth number: ");
				scanf("%f", &h);
				printf(">>> Enter last number: ");
				scanf("%f", &i);
				system("cls");
				total = a * b * c * d * e * f * g * h * i;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			if(nums == 10)
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>LET'S MULTIPLY 10 NUMBERS <<<<<<<<<<<<<<<<<\n\n");
				printf(">>> Enter first number: ");
				scanf("%f", &a);
				printf(">>> Enter second number: ");
				scanf("%f", &b);
				printf(">>> Enter third number: ");
				scanf("%f", &c);
				printf(">>> Enter fourth number: ");
				scanf("%f", &d);
				printf(">>> Enter fifth number: ");
				scanf("%f", &e);
				printf(">>> Enter sixth number: ");
				scanf("%f", &f);
				printf(">>> Enter seventh number: ");
				scanf("%f", &g);
				printf(">>> Enter eigth number: ");
				scanf("%f", &h);
				printf(">>> Enter ninth number: ");
				scanf("%f", &i);
				printf(">>> Enter last number: ");
				scanf("%f", &j);
				system("cls");
				total = a * b * c * d * e * f * g * h * i * j;
				printf(">>> Answer is %.2f <<<\n\n", total);
				printf(">>> Press 1 and ENTER to continue <<<\n");
				scanf("%d", &cont);
				continue;
			}
			else
			{
				system("cls");
				printf(">>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
				printf(">>> ***INVALID OPTION...LET'S TRY AGAIN!!!***         <<<\n");
				printf(">>> Press 1 and ENTER to try gain                     <<<\n>>> ");
				scanf("%d", &cont);
				continue;
			}	
		}
		if(option == 'f' || option == 'F')
		{
			system("cls");
			printf(">>>>>>>>>>>>>>>>>>>>>> EXITING <<<<<<<<<<<<<<<<<<<<<<<<<<\n");
			printf(">>>---------------------------------------------------<<<\n");
			printf(">>> Thank you for trying my calculator...             <<<\n");
			printf(">>> Till next time                                    <<<\n");
			printf(">>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
			exit(0);
		}
		else
		{
			system("cls");
			printf(">>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
			printf(">>> ***INVALID OPTION...LET'S TRY AGAIN!!!***         <<<\n");
			printf(">>> Press 1 and ENTER to try gain                     <<<\n>>> ");
			scanf("%d", &cont);
			continue;
		}
	}
		
	
}

void Entrance() {
	
	int cont;
	printf("01010101111000110001100101010011011101101011010001010100110001010100110100101011110000110110010101011101011110101111100110101\n");
	printf("10101011011001101010101101001101011100010110101010110100101100110101110011010101011100011011010111110000011011010110101010111\n");
	printf("10101011101101111001101101001101110101010110011010100110101110101011010001101011010111010110101101110101110100101101001011000\n");
	printf("101001                                                                                                                  10010\n");
	printf("011011    1101   0101  1010    0110      0101       0111    0001  00011101000  11010011010  0011    0101                00101\n");
	printf("111000    1001   1110  1101    1000    00011001     1100    0110  01101101101  01101010101  10110   1101                11001\n");
	printf("010100    1010  0101   1001    1011   0110  0101    1010    0110       1010    1010         101110  1010                01010\n");
	printf("100010    100101011    101010010101  101010101010   1010    1101      0110     011111001    1011101 1010                11010\n");
	printf("010101    010101010    101010101010  100110101010   0110    1010     1001      101111010    1010 1001101                11010\n");
	printf("010100    0101  1101   0101    1011  1010    1101   10100  10101    0101       1011         0101  010110                10101\n");
	printf("101010    0101   1010  1010    0101  0111    0101    1101010101   10101011010  01011010101  1100   10101                10101\n");
	printf("101101    1001   0110  0111    1010  1010    1010     10101011    10101010011  11000011101  0001    0110                11010\n");
	printf("110101                                                                                                                  11101\n");
	printf("01110101010011001010010100101001010101001010110000011011100101111110101011011101010011101001110110111101011011100111110010111\n");
	printf("11011111111010110101101010100110110010101010101010101010101010000101011011011010101111001010010101111001001010101010101110110\n");
	printf("00000101110101010101101010111101010101010111010101101010101101100101100100000111100000000011111100111110110101010101001100101\n");
	printf("******                                                                                                                  *****\n");
	printf("******                         ********************  ********************     **************     *******    *******     *****\n");
	printf("******                         ********************  ********************    ****************    *******    *******     *****\n");
	printf("******                                *******        *******                *******    *******   *******    *******     *****\n");
	printf("******                                *******        **************        *******      *******  ******************     *****\n");
	printf("******                                *******        **************        *******               ******************     *****\n");
	printf("******                                *******        *******                *******     *******  *******    *******     *****\n");
	printf("******                                *******        ********************    *****************   *******    *******     *****\n");
	printf("******                                *******        ********************     **************     *******    *******     *****\n");
	printf("010110                                                                                                                  10101\n");
	printf("01010010010100101010110000011010001111101101000010100010111111110010110001010010101010101010110100110011010110100101100110100\n");
	printf("10010101010111001100010000101111011010110110111110110110010011000111000001111110010101110110010011001010101011000000001110111\n");
	printf("011001                                                                                                                  01101\n");
	printf("101011             10                   01                                                                              00101\n");
	printf("100100              11       11        10   010001110  10          10010     10011    11       00  10101010             01010\n");
	printf("010101               01     01 01     00    01         01         10   01   00   11   1010   1101  01                   10101\n");
	printf("010111                00   10   10   11     101010     11        01        10     01  10 01 10 00  10101                01010\n");
	printf("111001                 11 01     01 10      01         00         01   11   01   10   01  11   11  01                   10101\n");
	printf("001101                  10        01        011001101  01100101    10011     01101    10       01  01010101             00101\n");
	printf("011010                                                                                                                  10101\n");
	printf("01010101010101011010101101010101010101010111010101101010101011010101010110100101010101010010101010101100101011011101010101101\n");
	printf("01111101101011010010101010100010101101000101010101010101110101100010101101010100100100101100110101010010101010010100010101100\n");
	printf("010101                                                                                                                  01010\n");
	printf("110101     Press 1 and ENTER to continue :                                                                              00101\n010101     ");
	scanf("%d", &cont);
	printf("010110                                                                                                                  00111\n");
	printf("01101101010101010101011100011010110010101010101010101010101010101010101010101110101010101010101010101010101010101010101010101\n");
	printf("01010101010101010101101010101101010101011011001000010011001011010101010101010101001011010111100001010101010101010101100100101\n");
	printf("01010101010101010101101010101101010101011011001000010011001011010101010101010101001011010111100001010101010101010101100100101\n");
	
	return;
}


