#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void tens(char ten){
	if (ten=='0'){
	printf(" ten");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/10.wav", NULL, SND_FILENAME);}
	if (ten=='1'){
	printf(" eleven");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/11.wav", NULL, SND_FILENAME);}
	if (ten=='2'){
	printf(" twelve");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/12.wav", NULL, SND_FILENAME);}
	if (ten=='3'){
	printf(" thirteen");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/13.wav", NULL, SND_FILENAME);}
	if (ten=='4'){
	printf(" fourteen");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/14.wav", NULL, SND_FILENAME);}
	if (ten=='5'){
	printf(" fifteen");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/15.wav", NULL, SND_FILENAME);}
	if (ten=='6'){
	printf(" sixteen");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/16.wav", NULL, SND_FILENAME);}
	if (ten=='7'){
	printf(" seventeen");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/17.wav", NULL, SND_FILENAME);}
	if (ten=='8'){
	printf(" eighteen");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/18.wav", NULL, SND_FILENAME);}
	if (ten=='9'){
	printf(" nineteen");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/19.wav", NULL, SND_FILENAME);}
	exit(1);
}       
void ones(char one){	
	if (one=='0'){
	printf("zero");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/0.wav", NULL, SND_FILENAME);}
	if (one=='1'){
	printf(" one");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/1.wav", NULL, SND_FILENAME);}
	if (one=='2'){
	printf(" two");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/2.wav", NULL, SND_FILENAME);}	
	if (one=='3'){
	printf(" three");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/3.wav", NULL, SND_FILENAME);}	
	if (one=='4'){
	printf(" four");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/4.wav", NULL, SND_FILENAME);}	
	if (one=='5'){
	printf(" five");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/5.wav", NULL, SND_FILENAME);}	
	if (one=='6'){
	printf(" six");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/6.wav", NULL, SND_FILENAME);}	
	if (one=='7'){
	printf(" seven");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/7.wav", NULL, SND_FILENAME);}	
	if (one=='8'){
	printf(" eight");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/8.wav", NULL, SND_FILENAME);}
	if (one=='9'){
	printf(" nine");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/9.wav", NULL, SND_FILENAME);}
}
void twos(char two, char one){
	if (two=='1'){
	tens(one);}
	if (two=='2'){
	printf(" twenty");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/20.wav", NULL, SND_FILENAME);}	
	if (two=='3'){
	printf(" thirty");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/30.wav", NULL, SND_FILENAME);}	
	if (two=='4'){
	printf(" forty");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/40.wav", NULL, SND_FILENAME);}	
	if (two=='5'){
	printf(" fifty");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/50.wav", NULL, SND_FILENAME);}	
	if (two=='6'){
	printf(" sixty");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/60.wav", NULL, SND_FILENAME);}	
	if (two=='7'){
	printf(" seventy");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/70.wav", NULL, SND_FILENAME);}	
	if (two=='8'){
	printf(" eighty");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/80.wav", NULL, SND_FILENAME);}
	if (two=='9'){
	printf(" ninety");
	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/90.wav", NULL, SND_FILENAME);}
	if (one!='0'){
	ones(one);}
}
void threes(char three,char two,char one){
	if (three=='1'){
	printf("one hundred and");
   	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/1.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/100.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/and.wav", NULL, SND_FILENAME);}
	if (three=='2'){
	printf("two hundred and");
   	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/2.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/100.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/and.wav", NULL, SND_FILENAME);}
	if (three=='3'){
	printf("three hundred and");
   	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/3.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/100.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/and.wav", NULL, SND_FILENAME);}
	if (three=='4'){
	printf("four hundred and");
   	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/4.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/100.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/and.wav", NULL, SND_FILENAME);}
	if (three=='5'){
	printf("five hundred and");
   	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/5.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/100.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/and.wav", NULL, SND_FILENAME);}
	if (three=='6'){
	printf("six hundred and");
   	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/6.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/100.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/and.wav", NULL, SND_FILENAME);}
	if (three=='7'){
	printf("seven hundred and");
   	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/7.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/100.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/and.wav", NULL, SND_FILENAME);}
	if (three=='8'){
	printf("eight hundred and");
   	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/8.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/100.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/and.wav", NULL, SND_FILENAME);}
	if (three=='9'){
	printf("nine hundred and");
   	PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/9.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/100.wav", NULL, SND_FILENAME);PlaySound("C:/Users/Intel/Desktop/Siund/Delete Sound pack wav/and.wav", NULL, SND_FILENAME);}
	twos(two,one);
}
int main(){
   char num[3],len=0;
   puts("Enter Number (range: 0-999): ");
   do{
   gets(num);
   len=strlen(num);
   if (len==3){
   	threes(num[0],num[1],num[2]);}
   else if(len==2){
   	twos(num[0],num[1]);}
   else if(len==1){
   	ones(num[0]);}
   else if(len>3){
   	printf("Error, Input again!\n");}
   }while(len>3);
return 0;}


