#include <stdio.h>

int main(void)
{
	char str[100];	
	int i=0;
	fgets(str,100,stdin);//kullanıcı girişi buffera yazılıyor
		while(str[i])//string sonuna kadar tarama yapılıyor
		{
			if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')); //karakter tespiti --> sesli ise yazma
			 else
			   printf("%c",str[i]);
			i++;	
		}
		
		
	return 0;
}
