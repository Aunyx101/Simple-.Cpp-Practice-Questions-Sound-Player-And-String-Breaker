#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int word_count(char ptr[])
{
	int count = 0, i;
    for (i = 0;ptr[i] != '\0';i++)
    {
        if (ptr[i] == ' ' && ptr[i+1] != ' ')
            count++;    
    }
    count++;
    return count;
}
 int main()
{
    char str[100];
    puts("Enter String For Sorting By Length: ");
    gets(str);
    int nums=word_count(str);
    char *ptrs_wrd[nums];
	char **ptr=(char**)malloc(nums*sizeof(char*));
    char *token=strtok(str," ");
    int x=0;
    ptrs_wrd[x]=token;
    x++;
    while(token){
    	token=strtok(NULL," ");
    	ptrs_wrd[x]=token;
    	x++;
	}
	int count;
	for (count=0;count<nums;count++){
  	    ptr[count]=(char*)malloc((strlen(ptrs_wrd[count])+1*sizeof(char)));
		strcpy(ptr[count],ptrs_wrd[count]);
	}
	int i,j;
	char temp[nums];
	for(i=0;i<nums;i++){
	for(j=i;j<nums;j++){
	if(strlen(ptr[i])<strlen(ptr[j])){
	strcpy(temp,ptr[i]);
	strcpy(ptr[i],ptr[j]);
	strcpy(ptr[j],temp);}}}
printf("\nSorted words by length are : \n");
for(i=0;i<nums;i++)
{
printf("%s \n",ptr[i]);
}
    return 0;
}
