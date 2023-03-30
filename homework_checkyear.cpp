#include <stdio.h>

main() {
	int date;
	printf("Day of birth: ");
	scanf("%i", &date);
	int month;
	printf("month: ");
	scanf("%i", &month);
	int year;
	printf("year: ");
	scanf("%i", &year);
	
	if((year<=2023)&&(year>=1900)&&(month<=12)&&(month>=1)&&(date>=1)&&(date<=31)) {
	
		//Leap or not
		if(year%4 == 0) {
			printf(" leap year ");
		} else {
			printf(" no leap year ");
		}
	//beast symbo;
		switch(year%12) {
			case 0: {
				printf(" monkey ");
				break;
			}
			case 1: {
				printf("rooster");
				break;
			}
			case 2: {
				printf(" dog ");
				break;
			}
			case 3: {
				printf(" pig ");
				break;
			}
			case 4: {
				printf(" rat ");		
				break;
			}
			case 5: {
				printf(" bull ");	
				break;
			}
			case 6: {
				printf(" tiger ");	
				break;
			}
			case 7: {
				printf(" habbit ");	
				break;
			}
			case 8: {
				printf(" dragon ");	
				break;
			}
			case 9: {
				printf(" snake ");	
				break;
			}
			case 10: {
				printf(" horse ");	
				break;
			}
			case 11: {
				printf(" sheep ");	
				break;
			}
		}
		//zodiac symbol
		if((month == 12)&&(date>=22)||(month == 1)&&(date<=19)) {
			printf(" Kozerog ");
		};
		if((month == 1)&&(date>=20)||(month == 2)&&(date<=19)) {
			printf(" Vodolei ");
		};
		if((month == 2)&&(date>=20)||(month == 3)&&(date<=21)) {
			printf(" Ribi ");
		};
		if((month == 3)&&(date>=22)||(month == 4)&&(date<=21)) {
			printf(" Oven ");
		};
		if((month == 4)&&(date>=22)||(month == 5)&&(date<=21)) {
			printf(" Telec ");
		};
		if((month == 5)&&(date>=22)||(month == 6)&&(date<=21)) {
			printf(" twins ");
		};
		if((month == 6)&&(date>=22)||(month == 7)&&(date<=21)) {
			printf(" rak ");
		};
		if((month == 7)&&(date>=22)||(month == 8)&&(date<=21)) {
			printf(" Lev ");
		};
		if((month == 8)&&(date>=22)||(month == 9)&&(date<=21)) {
			printf(" Deva ");
		};
		if((month == 9)&&(date>=22)||(month == 10)&&(date<=21)) {
			printf(" Veci ");
		};
		if((month == 10)&&(date>=22)||(month == 11)&&(date<=20)) {
			printf(" Skorpion ");
		};
		if((month == 11)&&(date>=21)||(month == 12)&&(date<=21)) {
			printf(" Archer ");
		};
	}	else {
		printf("wrong type of data");
	}	
}


