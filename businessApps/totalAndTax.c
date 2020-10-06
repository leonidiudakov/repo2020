#include<stdio.h>
#include<stdlib.h>

float total = 0;
float aftertax = 0;
float tax = 0;

int count = 0;
char temp[3] = "";


int main() {
	puts("Enter price of items, X to end.");
	while(1) {
		scanf("Item Price: $%s", temp);
		count++;
		if (temp == "X") {
			break;
		}
		printf("%s\n", temp);
		total = total + atoi(temp);
	}	
	scanf("Enter tax percent:  %3s", temp);
	
	tax = total * (atoi(temp) / 100);
 	aftertax = total + tax;
	printf("Items: %i\n Total: $%f\n Tax: $%f\n After tax: $%f\n", count, total, tax, aftertax);
}