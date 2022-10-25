//6.10

//#include <stdio.h>
//int main()
//{
//	
//	int gross;
//
//	printf("give the amount of gross sales: \n");
//	scanf_s("%d", &gross);
//
//	int income = 200 + gross * 0.09;
//	int a[9] = {};
//
//	if (income >= 0 && income < 299)
//	{
//		a[0] = a[0] + 1;
//	}
//
//	else if (income >= 300 && income < 399)
//	{
//		a[1] = a[1] + 1;
//	}
//
//	else if (income >= 400 && income < 499)
//	{
//		a[2] = a[2] + 1;
//	}
//
//	else if (income >= 500 && income < 599)
//	{
//		a[3] = a[3] + 1;
//	}
//
//	else if (income >= 600 && income < 699)
//	{
//		a[4] = a[4] + 1;
//	}
//
//	else if (income >= 700 && income < 799)
//	{
//		a[5] = a[5] + 1;
//	}
//
//	else if (income >= 800 && income < 899)
//	{
//		a[6] = a[6] + 1;
//	}
//
//	else if (income >= 900 && income < 999)
//	{
//		a[7] = a[7] + 1;
//	}
//
//	else if (income >= 1000)
//	{
//		a[8] = a[8] + 1;
//	}
//
//	printf("\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);
//}







//6.11

//#include <stdio.h>
//
//int main()
//#define SIZE 4
//{
//	int a[SIZE] = {5, 8, 1, 2};
//
//	if (SIZE > 0)
//	{
//		int smallest = a[0];
//
//		for (size_t i = 0; i <= SIZE ; i++)
//		{
//			if (smallest > a[i])
//			{
//				smallest = a[i];
//			}
//		}
//		printf("smallest is %d", smallest);
//	}
//}






//10.6, 10.10, 10.12, 10.13

//#include <stdio.h>
//struct customer
//{
//	char lastName[30];
//	char firstName[15];
//	unsigned int customerNumber;
//
//	struct
//	{
//		char phoneNumber[11];
//		char adress[50];
//		char city[15];
//		char state[3];
//		char zipCode[6];
//	} personal;
//} customerRecord, *customerPtr;
//customerPtr = &customerRecord;
//
//int main(void)
//{
//	customer p = { "Wennametjaindehsumma", "Koentje" };
//	printf("%s\t%s", p.lastName, p.firstName);
//}


//10.10

#include <stdio.h>
void displayBits(unsigned int value);

int main(void)
{
	unsigned int number1 = 920;

	puts("\nThe result of right shifting");
	displayBits(number1);
	puts("4 bit positions using the right shift operator >> is");
	displayBits(number1 >> 4);
}

void displayBits(unsigned int value)
{
	unsigned int displayMask = 1 << 31;

	printf("%7u = ", value);

	for (unsigned int c = 1; c <= 32; ++c)
	{
		putchar(value & displayMask ? '1' : '0');
		value <<= 1;

		if (c % 8 == 0)
		{
			putchar(' ');
		}
	}

}