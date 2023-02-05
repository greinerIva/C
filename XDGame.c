#include <stdio.h>

int main()
{
	int b = 0;
	printf("Do you want play a game?\n");
	printf("\nY - yes N - no\n");
	int 
	awnser = getchar();
	int a = 0;
	switch (awnser)
	{
	case 89:
	case 121:
		printf("\nBut game doesn't want");
	case 78:
	case 110:
		printf("\nBut game wants");
		a = 1;
	}
	if (a == 1)
	{
		printf("\n2+2=\n");
		while (a = 1)
		{	
			awnser = getchar();
			if (awnser == 52)
			{
				printf("\nCorrect");
				a = 0;
				break;
			}
			 else if(awnser == 53)
			{

				printf("\nGenious");
				a = 0;
				break;
			}
			
		}
	}
}
