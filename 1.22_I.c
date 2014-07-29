#include <stdio.h>
#define TAB 50

int gett(char text[10000]);
void form(int len,char text[10000]);

void main ()
{

    int i,c,l;
    char text[10000];

    printf("Enter text, what has to be formatted.\n");

    while( (l=gett(text) )>0 ){
	printf("Non formatted text seems so:\n");
	
	printf("Same text after formatting seems so:\n");
    for (i=0;i<l;++i)
	printf("Symbol %i-th in char=%c; and in digit=%d\n",i,text[i],text[i]);

	
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

    int i,j,k,l,s,t,prov;
    char tmp[TAB];

    i=j=k=l=s=prov=0;
    
    for (i=0;i<=len;++i){
	tmp[j]=text[i];

	if (i==len)
	    ++s;

	if ( (j==TAB) || (i==len) ) {
	    prov=0;
	    ++s;
	    k=j;

	    while ( (prov=0) && (k>0) )
		if ( (tmp[k]!=' ') && (tmp[k]!='\t') && (tmp[k]!='\n') )
		    prov=1;
		else
		    --k;

	    for (l=0;)
	}
	else {
	    j=0;
	
	}
	
	
	++j
    }


}
