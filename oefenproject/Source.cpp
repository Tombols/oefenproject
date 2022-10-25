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
//		
//		int smallest = a[0];
//		for (size_t i = 0; i < SIZE ; i++)
//		{
//			if (a[i] < smallest)
//			{
//				smallest = a[i];
//			}
//		}
//		printf("smallest is %d", smallest);
//}


//#include <stdio.h>
//
//int main()
//{
//	int a[4] = {5, 2, 9, 6};
//
//	int smallest = a[0];
//	for (int i = 0; i < 4; i++)
//	{
//		if (a[i] < smallest)
//		{
//			smallest = a[i];
//		}
//	}
//	printf("%d is smallest", smallest);
//}




//6.14

//#include <stdio.h>
//#include <cstdlib>
//#include <ctime>
//
//int main()
//{
//	int rollone = 0;
//	int rolltwo = 0;
//	int sum = 0;
//	
//	int hist[13] = {};
//
//	for (int count = 0; count < 36000; ++count)
//	{
//		rollone = (rand() % 6) + 1;
//		rolltwo = (rand() % 6) + 1;
//		sum = rollone + rolltwo;
//		hist[sum]++;
//	}
//
//	for (int i = 2; i <= 12; ++i)
//	{
//		printf("%d", hist[i]);
//	}
//}

