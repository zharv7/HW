


#include <stdio.h>

int main(void)
{
	unsigned int month;
	unsigned int season;
	scanf("%d", &month);
	if (month <=12)
	{
		if (month == 1 || month==2 || month== 12) season =1;
		else if (month == 3 || month==4 || month== 5) season =2;
		else if (month == 6 || month==7 || month== 8) season =3;
		else if (month == 9 || month==10 || month== 11) season =4;
		
		switch (season)
		{
			case 1:
			printf("winter");
			break;
			case 2:
			printf("spring");
			break;
			case 3:
			printf("summer");
			break;
			case 4:
			printf("autumn");
			break;
			
			
		}
		
		
		}
	else printf("error");
	

	return 0;
}

