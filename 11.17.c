#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main(void)
//{
//    int currentYear = 2025;
//    int birthYear = 2002;
//    int age;
//    age = currentYear - birthYear;
//    printf("I am %d years old in %d.\n", age, currentYear);
//    return 0;
//}

//int main(void)
//{
//    double pi = 3.14159;
//    double price = 19.99;
//
//    // 2. 打印 double 变量，必须用 %lf
//    printf("The value of Pi is: %lf\n", pi);
//    printf("The price is: %lf\n", price);
//
//    // 3. double 类型的运算
//    double num1 = 5.0; // 写成 5.0 (小数) 是个好习惯
//    double num2 = 2.0;
//    double result = num1 / num2; // 5.0 / 2.0 = 2.5
//
//    printf("5.0 / 2.0 = %lf\n", result);
//    return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int score1 = 90; int score2 = 85; int score3 = 92;
//	int sum = score1 + score2 + score3;
//	double average = sum / 3.0;
//
//	printf("The average score is %lf,\nThe sum score is %d", average, sum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char initial = 'K';
//	char rank = 'A';
//	double score = 95.5;
//	printf("Player %c: Rank %c, Score %lf\n", initial, rank, score);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    int currentYear;
//    int birthYear;
//    printf("Pls enter currentYear:\n");
//    scanf("%d", &currentYear);
//    printf("Pls enter birthYear:\n");
//    scanf("%d", &birthYear);
//    int age = currentYear - birthYear;
//    printf("You are %d years old.\n", age);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int score;
//	printf("Pls enter a Score :");
//	scanf("%d", &score);
//	if (score >= 60)
//	{
//		printf("Congratulations!\nYou passed!");
//	}
//	else
//	{
//		printf("Unfortunately!\nYou failed!");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int orderAmount;
//	int isPremium;
//	printf("Pls enter your orderAmount: ");
//	scanf("%d", &orderAmount);
//	printf("Are you a Premium? 1 Yes, 0 No. Please enter 0 or 1: ");
//	scanf("%d", &isPremium);
//	if (orderAmount >= 100||isPremium ==1)
//	{
//		printf("Shipping: Free");
//	}
//	else
//	{
//		printf("Shipping: 10");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int counter = 10;
//	while (counter > 0)
//	{
//		printf("%d\n", counter);
//		counter--;
//	}
//	printf("Liftoff!");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	for (int counter = 10; counter > 0; counter--)
//	{
//		printf("%d\n", counter);
//	}
//	printf("Liftoff!");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int scores[3];
//	int sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		printf("Enter score %d\n",i);
//		scanf("%d", &scores[i]);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		sum = sum + scores[i];
//	}
//	double average;
//	average = sum / 3.0;
//	printf("The average score is %lf,\nThe sum score is %d", average, sum);
//	return 0;
//}

//#include<stdio.h>
//
//int find_max(int num1,int num2)
//{
//	if (num1 > num2)
//	{
//		return num1;
//	}
//	else
//	{
//		return num2;
//	}
//}
//int main()
//{
//	int max_value = find_max(50, 50);
//	printf("%d", max_value);
//	return 0;
//}

#include<stdio.h>
int find_max_in_array(int arr[], int size)
{
	int max_val = arr[0];
	for (int i = 1;	i <	size; i++)
	{
		if (max_val < arr[i])
		{
			max_val = arr[i];
		}
	}
	return max_val;
}
int main()
{
	int size = 3;
	int scores[3];
	int highest_score = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("Enter score %d\n", i);
		scanf("%d", &scores[i]);
	}
	highest_score = find_max_in_array(scores, 3);
	printf("Highest score is %d\n", highest_score);
	return 0;
}