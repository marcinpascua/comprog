#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void menu_display();
float getInput();
float calcAreaCirc(float radius);
float calcAreaRect(float length, float width);
float calcAreaTri(float base, float height);
void printResult(float area);
void arraySum(int Size, int array1[Size][Size], int array2[Size][Size]);
void arrayProduct(int Size, int array1[Size][Size], int array2[Size][Size]);

int main() 
{
    int menu_choice, choice;
	
    do{
		menu_display();	   
       
        printf("Please choose a number from the menu (1-12): ");
        scanf("%d", &menu_choice);

        switch(menu_choice)
		{
			case 1: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #1----------------------------------\n");
				printf("-----------------------------First letter of family name and year of birth-------------------------\n\n");
				char first_name = 'P';
				int year = 2004;
				printf("Hello! My family name is Pascua. The first letter of my family name is %c and I was born on the year %d.", first_name, year);
                break;
			}
			
			case 2: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #2----------------------------------\n");
				printf("-----------------------------------------Average of 5 scores---------------------------------------\n\n");
				int sumScore, score1, score2, score3, score4, score5;
				float averageScore;
				printf("Enter 5 scores: \n");
				scanf("%d %d %d %d %d", &score1, &score2, &score3, &score4, &score5);
				sumScore = score1+score2+score3+score4+score5;
				averageScore = (float)sumScore/5;
				printf("The average is %.2lf", averageScore);
                break;
			}
			
            case 3: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #3----------------------------------\n");
				printf("----------------------------------------Perimeter of Rectangle-------------------------------------\n\n");
				int lengthRect, widthRect, perimeter;
				printf("Enter length: ");
				scanf("%d", &lengthRect);
				printf("Enter width: ");
				scanf("%d", &widthRect);
				perimeter = (lengthRect + widthRect)*2;
				printf("The perimeter of a rectangle is %d", perimeter);
                break;
			}
			
            case 4: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #4----------------------------------\n");
				printf("--------------------------------------Find the discounted price------------------------------------\n\n");
				int quantity;
				float price, total_price, discount_price, discounted_price;
				printf("Enter quantity: ");
				scanf("%d", &quantity);
				printf("Enter Price: ");
				scanf("%f", &price);
				total_price = quantity * price;

				if (total_price < 1000)
				{
					printf("The total cost is %.2f", total_price);
				}
	
				else if (total_price <=3000)
				{
					discount_price = total_price * 0.05;
					discounted_price = total_price - discount_price;
					printf("The discount price is %.2f", discount_price);
					printf("\nThe discounted price is %.2f", discounted_price);
				}

				else
				{
					discount_price = total_price * 0.1;
					discounted_price = total_price - discount_price;
					printf("Quantity: %d\n", quantity);
					printf("The discount price is %.2f", discount_price);
					printf("\nThe discounted price is %.2f", discounted_price);
				}
				break;
			}
			
            case 5: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #5----------------------------------\n");
				printf("---------------------------------Determine if a number is even or odd------------------------------\n\n");
				int number;
				printf("Enter number:");
				scanf("%d", &number);

				switch(number % 2)
				{
					case 0:
						printf("The number is even");
						break;
						
					case 1:
						printf("The number is odd");
						break;
						
					default:
						printf("Invalid");
						break;
				}
	           	break;
			}
			
			case 6: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #6----------------------------------\n");
				printf("----------------------------------Print asterisks in rows and columns------------------------------\n\n");
				int row, column;

				for(row=1; row<=4; row++)
				{
					for(column=1; column<=13; column++)
					{
						printf("* ");
					}	 	 
					printf("\n");
				}
				break;	
			}  
			
			case 7: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #7----------------------------------\n");
				printf("-----------------------------------Print numbers in rows and columns-------------------------------\n\n");
				int row, column;

				for(row=1; row<=5; row++)
				{
					for(column=1; column<=row; column++)
					{
						printf("%d ", row);	 
					}
					printf("\n");
				}
				break;
			}	 
			
			case 8: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #8----------------------------------\n");
				printf("--------------------Find the area of circle, rectangle, and triangle using functions---------------\n\n");
    			int areaChoice;
    			float areaCirc, areaRect, areaTri, radius, length, width, base, height;
    			printf("Enter your choice of area (1. CIRCLE\t 2. RECTANGLE\t 3. TRIANGLE): ");
    			areaChoice = getInput();

    				switch (areaChoice)
					{
				        case 1:
				            printf("Your choice is AREA OF CIRCLE\n");
				            printf("\nEnter radius: ");
				            radius = getInput();
				            areaCirc = calcAreaCirc(radius);
				            printResult(areaCirc);
				            break;


				        case 2:
				            printf("Your choice is AREA OF RECTANGLE\n");
				            printf("\nEnter length: ");
				            length = getInput();
				            printf("Enter width: ");
				            width = getInput();
				            areaRect = calcAreaRect(length, width);
				            printResult(areaRect);
				            break;


				        case 3:
				            printf("Your choice is AREA OF TRIANGLE\n");
				            printf("\nEnter base: ");
				            base = getInput();
				            printf("Enter height: ");
				            height = getInput();
				            areaTri = calcAreaTri(base, height);
				            printResult(areaTri);
				            break;
		
						default:
							printf("YOU ENTERED AN INVALID CHOICE!");
							break;
    				}
				break;
			}
			
			case 9: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #9----------------------------------\n");
				printf("------------------------Find the difference between two numbers using pointers---------------------\n\n");
				int num1, num2, subtraction;
				int *pointer1, *pointer2, *pointer3;
			
			    pointer1 = &num1;
			    pointer2 = &num2;
			    pointer3 = &subtraction;
			
			    printf("Enter Minuend: ");
			    scanf("%d", pointer1);
			    printf("Enter Subtrahend: ");
			    scanf("%d", pointer2);
			
				*pointer3 = *pointer1 - *pointer2;
			
			    printf("Difference: %d", *pointer3);    	   	   	   	   	   	   
				break;
			}

			case 10: 
			{
				printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #10----------------------------------\n");
				printf("-----------------Find the sum and average of both even and odd numbers using 1d array---------------\n\n");
				int size, i, evenSum = 0, oddSum = 0, countEven = 0, countOdd=0;
			    float evenAverage = 0, oddAverage = 0;
			    printf("Enter maximum number: ");
			    scanf("%d", &size);
			    int generateNum[size];
			
			    for (i=0; i < size; i++)
				{
					generateNum[i] = i+1;
			        if (generateNum[i] % 2 == 0)
					{
			            printf("%d\n", generateNum[i]);
			            evenSum += generateNum[i];
			            countEven++;
			        }
				
					else
					{
			            printf("%d\n", generateNum[i]);
			            oddSum += generateNum[i];
			            countOdd++;
			        }
				}
			    evenAverage = (float)evenSum / countEven;
			    oddAverage = (float)oddSum / countOdd;

			    printf("\nSum of even numbers: %d\n", evenSum);
			    printf("Average of even numbers: %.2f\n\n", evenAverage);
			    printf("Sum of odd numbers: %d\n", oddSum);
			    printf("Average of odd numbers: %.2f\n", oddAverage);
				break;
			}
			
			case 11: 
			{
                printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #11----------------------------------\n");
				printf("--------------Find the largest, smallest, sum, average, and sorting of the array elements-----------\n\n");
				int I, J, sum = 0, list[10], largest, smallest, array[10], ascending[10], descending[10];
				float average;
				printf("Enter 10 numbers:\n");
			
				for(I = 0; I < 10 ; I++)
				{
					scanf("%d", &array[I]);
				}
				largest = array[0];
				smallest = array[0];
			
				for(I = 0; I < 10 ; I++)
				{
					if(array[I]> largest)
					{
						largest = array[I];
					}
				
					if(array[I] < smallest)
					{
						smallest = array[I];
					}
					sum += array[I];
				}
				average = (float)sum/10;
			
				for(I = 0; I < 10 ; I++)
				{
					ascending[I] = array[I];
					descending[I] = array[I];
				}
			
				for(I = 0; I < 10 ; I++)
				{
					for(J = I+1; J<10; J++)
					{
						if(ascending[I]>ascending[J])
						{
							int temp = ascending[I];
							ascending[I]=ascending[J];
							ascending[J] = temp;
						}
					}
				}
			
				for(I = 0; I < 10 ; I++)
				{
					for(J = I+1; J<10; J++)
					{
						if(descending[I]<descending[J]);
						{	 
							int temp = descending[I];
							descending[I]=descending[J];
							descending[J] = temp;
						}
					}
				}
				printf("\n1) Largest value in the array: %d", largest);
			    printf("\n2) Smallest value in the array: %d", smallest);
			    printf("\n3) Sum of all the array elements: %d", sum);
			    printf("\n4) Average of the elements: %.2f", average);
			    printf("\n5) Array in ascending order: ");
			
				for(I = 0; I < 10; I++)
				{
					printf("%d ", ascending[I]);
				}
				printf("\n6. Array in descending order: ");
			
				for(I = 0; I< 10 ; I++)
				{
					printf("%d ", descending[I]);
				}
			
                break;
			}

            case 12: 
			{
                printf("\n----------------------------------YOU CHOSE MENU CHOICE NUMBER #12----------------------------------\n");
				printf("----------------------------Calculate the sum and product of two 2d arrays--------------------------\n\n");
                int Size;
                printf("Input size: ");
                scanf("%d", &Size);
           
                int array1[Size][Size];
                int array2[Size][Size];

                printf("\nArray 1:\n");
                for (int i = 0; i < Size; i++) 
				{
                    for (int j = 0; j < Size; j++) 
					{
                        scanf("%d", &array1[i][j]);
                    }
                }

                printf("\nArray 2:\n");
                for (int i = 0; i < Size; i++) 
				{
                    for (int j = 0; j < Size; j++) 
					{
                        scanf("%d", &array2[i][j]);
                    }
                }
                arraySum(Size, array1, array2);
                arrayProduct(Size, array1, array2);
                break;
			}

            default:
			{
                printf("YOU ENTERED AN INVALID CHOICE! CHOOSE NUMBERS FROM 1-12 ONLY. THANK YOU!\n");
                break;
			}
        }
        printf("\n\nDo you want to continue? (Enter 1 if YES, Enter 0 if NO): ");
        scanf("%d", &choice);
		
		printf("\n");

        if (choice != 1) 
		{
            break;
        }

    } while (true);

    return 0;
}
		
void menu_display()
{
	printf("================================================MENU===============================================\n");
	printf("\nCHOICES:\n\n");
	printf("1. First letter of family name and year of birth\n");	 	 	 	 	 	 	 	 	 	 	 
	printf("2. Average of 5 scores\n");
	printf("3. Perimeter of Rectangle\n");
	printf("4. Find the discounted price\n");
	printf("5. Determine if a number is even or odd\n");
	printf("6. Print asterisks in rows and columns\n");
	printf("7. Print numbers in rows and columns\n");
	printf("8. Find the area of circle, rectangle, and triangle using functions\n");
	printf("9. Find the difference between two numbers using pointers\n");
	printf("10. Find the sum and average of both even and odd numbers using 1d array\n");
	printf("11. Find the largest, smallest, sum, average, and sorting of the array elements\n");
	printf("12. Calculate the sum and product of two 2d arrays\n\n");
}

//FROM CASE 7
void counter()
{
	int numRow, numColumn;

	for(numRow=1; numRow<=5; numRow++)
	{
		for(numColumn=1; numColumn<=5; numColumn++)
		{
			printf("%d\n", numColumn);
		}
	}
}

//FROM CASE 8
float getInput()
{
    float num;
	scanf("%f", &num);
	return num;
}

float calcAreaCirc(float radius)
{
	return radius * radius * 3.14;
}
				
float calcAreaRect(float length, float width)
{
	return length * width;
}
				
float calcAreaTri(float base, float height)
{
	return base * height * 0.5;
}
				
void printResult(float area)
{
	printf("Area: %.2f\n", area);
}

//FROM CASE 12
void arraySum(int Size, int array1[Size][Size], int array2[Size][Size])
{
	int sumArray[Size][Size];
				
	for (int row = 0; row < Size; row++)
	{
		for (int col = 0; col < Size; col++)
		{
			sumArray[row][col] = array1[row][col] + array2[row][col];
		}
	}

	printf("\nSum:\n");
	for (int row = 0; row < Size; row++)
	{
		for (int col = 0; col < Size; col++)
		{
			printf("%4d ", sumArray[row][col]);
		}
		printf("\n");
	}
}
				
void arrayProduct(int Size, int array1[Size][Size], int array2[Size][Size])
{
	int productArray[Size][Size];	 

	for (int row = 0; row < Size; row++)
	{
		for (int col = 0; col < Size; col++)
		{
			productArray[row][col] = array1[row][col] * array2[row][col];
		}
	}
	
	printf("\nProduct:\n");
	for (int row = 0; row < Size; row++)
	{
		for (int col = 0; col < Size; col++)
		{
			printf("%4d ", productArray[row][col]);
		}
		printf("\n");
	}
}

