#include <stdio.h>
#include <stdlib.h>


int main(void) {
	// Display 1 : Main Menu
	printf("---JASON BOURNE OS--\n");
	printf("Welcome to the Rogue Operative Life Planner!\nYour goal >> Improve discipline & situational awareness to become a human powerhouse like Jason Bourne!\n\n");
	printf("------------\n1) Daily Logs\n2) Skills Checklist\n3) Daily Quote\n4)Exit\n\nCHOOSE YOUR NEXT MOVE (1-4) : ");
	
	// Asking User Input for Routing
	int menu_option;
	scanf("%d", &menu_option);
	
	// Checking User Input & Routing Appropriately
	if (menu_option == 1) {
		printf("Welcome to Daily Logs!");
	} else if (menu_option == 2) {
		printf("Welcome to Skills Checklist!");
	} else if (menu_option == 3) {
		printf("Here's your Daily Quote");
	} else if (menu_option == 4) {
		printf("Good luck for your mission, operative.");
	} else {
		printf("Invalid input! Try again.");
	}

	return 0;
}
