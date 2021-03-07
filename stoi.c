#include <stdlib.h>
#include <string.h>
/*Calistu 2019
* stoi.c - numeric string to int
* this function changes
* numeric strings in unsigned int
* string max size: 2147483648 -> (long long variable size)
* returns int num or -1 for error
*/

//returns
int func(int vet)
{
	int cont;
	unsigned long long result=1;
	for(cont=1;cont<vet;cont++)
		result = result * 10;
	return result;
}

int stoi(char *str_numb)
{
	unsigned long long result=0;
	int ascii,numb=0,vet,len,err=0;

	if((strlen(str_numb)>8)||str_numb==NULL)
		return -1;

	len = strlen(str_numb);

	/* multiply the number to the exponence of your position */
	for(vet=1;vet<=len;vet++)
	{
		err=1;
		for(ascii=48;ascii<=57;ascii++)
		{
			if(str_numb[len-vet]==ascii)
			{
				result = result + (func(vet)*numb);
				numb=0;
				err=0;
				break;
			}
			numb++;

		}

		if(err==1)
			return -1;
	}
	return result;
}
