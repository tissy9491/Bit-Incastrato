#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

printf("Un bit si è incastrato nel kernel! Bisogna ASSOLUTAMENTE rimuoverlo!\n Vuoi Rimuoverlo?\n |(1)| Sì     |(0)| No\n");

int choice;

scanf("%d", &choice);

if (choice==0) {

printf("Allora tieniti il bit incastrato.\n");
}
else {
srand(time(NULL));
int num, cycle;
cycle=0;
while (cycle<20){
	for (cycle=0; cycle<20; cycle--){
	num=rand()%256;
	printf("%u\n", num);
	printf("Sto bit è difficile da disincastrare!\n");
	cycle= cycle+1;
}
}
}
return 0;
}



