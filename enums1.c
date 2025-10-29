#include <stdio.h>

enum Weekday { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main(void) {
	int day;
	printf("Enter a number (1 for Monday, 7 for Sunday): ");
	scanf("%d", &day);

	switch (day) {
		case MONDAY:         printf("Monday\n"); break;
		case TUESDAY:         printf("Tuesday\n"); break;
		case WEDNESDAY:         printf("Wednesday\n"); break;
		case THURSDAY:         printf("Thursday\n"); break;
		case FRIDAY:         printf("Friday\n"); break;
		case SATURDAY:         printf("Saturday\n"); break;
		case SUNDAY:         printf("Sunday\n"); break;
		default:         printf("Invalid day number.\n");
	}

	return 0;
}
