#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "statistics.h"

void menu();

int main()
{
    bool f = 1;
    char ch;

    for(;f;)
	{
		do
		{
			menu();
			ch = getche();
		}while(ch<'1'&&ch>'6');

		switch(ch)
		{
			case '1'://newStatistician
				//newStatistician();
				break;
			case '2'://Destroy Statistician
				//destroyStatistician();
				break;
			case '3'://Add Data
				//add();
				break;
			case '4'://Delete Data
			    //remove();
				break;
			case '5'://Display Statistics
			    //displayData();
				break;
			case '6'://QUIT
				f = 0;
				printf("\n\nGoodbye!");
				break;
			default:
				break;
		}
	}
	return 0;
}

void menu()
{
	system("cls");
	printf("[1] New Statistician\n");
	printf("[2] Destroy Statisticia\n");
	printf("[3] Add Data\n");
	printf("[4] Delete Data\n");
	printf("[5] Display Statistics\n");
	printf("[6] Q U I T\n");
}
