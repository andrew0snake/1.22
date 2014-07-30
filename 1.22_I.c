#include <stdio.h>
#define TAB 5

int gett(char text[10000]);
void form(int len,char text[10000]);

void main ()
{

    int i,c,l;
    char text[10000];

    printf("Enter text, what has to be formatted.\n");

    while( (l=gett(text) )>0 ){
	printf("Non formatted text seems so:\n%s",text);
	form(l,text);
//	printf("Same text after formatting seems so:\n%s",text);
//    for (i=0;i<l;++i)
//	printf("Symbol %i-th in char=%c; and in digit=%d\n",i,text[i],text[i]);

	
    }
    printf("normal end of program\n");

}

int gett(char text[10000])
{

    int c,i;
    
    for (i=0;i<10000;++i)
	text[i]=0;

    for (i=0;(c=getchar() )!=EOF;++i)
	text[i]=c;

    return i;
}

void form(int len,char text[10000])
{

    int i,j,k,l,s,t;

    i=j=k=l=s=0;
    
    for (i=0;i<=len;++i){
    
	++j;
	if (j==TAB){
	    ++s;
	    for()
	    if ( (text[i]!=' ') && (text[i]!='\t') && (text[i]!='\n') && (j==(TAB) ) ) {
//	    	printf("TAB point=%d;char text[%d]=%c\n",i,i,text[i]);
		j=0;
	    }
	}
//	printf("i=%d;j=%d;text[%d]=%c\n",i,j,i,text[i]);
	}

}
