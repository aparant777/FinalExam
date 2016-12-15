#include<stdio.h>	
#include<cstdlib>
#include<stdint.h>

void LeftShift(unsigned int number, int shiftingValue);
void RightShift(unsigned int number, int shiftingValue);
void FlipBit(unsigned int number);
bool AND(uint8_t flags, uint8_t bit);
int main() {

	printf("Initial Commit\n");
	
	unsigned int number = 2;
	//LeftShift(number, 1);
	FlipBit(number);

	uint8_t option1 = 0x01;	//0000 0001 in hex
	uint8_t option2 = 0x02;	//0000 0010 in hex
	uint8_t option3 = 0x04;	//0000 0100 in hex
	uint8_t option4 = 0x08;	//0000 1000 in hex
	uint8_t option5 = 0x10;	//0001 0000 in hex
	uint8_t option6 = 0x20;	//0010 0000 in hex
	uint8_t option7 = 0x40;	//0100 0000 in hex
	uint8_t option8 = 0x80;	//1000 0000 in hex

	uint8_t flags = 0;	//holds the combination of all the 8 options
	
	int ans = AND(flags, option1);
	printf("ans is %d.\n", ans);

	system("pause");
	return 0;
}

void LeftShift(unsigned int number, int shiftingValue) {
	printf("number %d after left shifting %d is %d. \n", number, shiftingValue, number << shiftingValue);
}

void RightShift(unsigned int number, int shiftingValue) {
	printf("number %d after right shifting %d is %d. \n", number, shiftingValue, number << shiftingValue);
}

void FlipBit(unsigned int number) {
	printf("number %d after fliping is %d. \n", number, ~number);
}

/*to query the state*/
bool AND(uint8_t flags, uint8_t bit) {
	if (flags & bit == 0) {
		printf("0.\n");
		return true;
	} else {
		printf("1.\n");
		return false;
	}
	//false = 0, true = 1 (implicit bool to int conversion)
}