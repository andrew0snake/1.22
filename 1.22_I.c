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
	printf("Non formatted text seems so:\n%s\n-------------------------------------",text);
	form(l,text);
	printf("Same text after formatting seems so:\n%s",text);
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

    int i,j,k,l,s,t,diff;

    i=j=k=l=s=t=diff=0;
    
    for (i=0;i<=len;++i){
    
	++j;
	if (j==(TAB+1) ){
	    ++s;
	    if (i>TAB)
		diff=i-TAB;
	    else 
		diff=0;

	    k=i;
	    t=(-1);

	    printf("i=%d;diff=%d;k=%d;t=%d;\n",i,diff,k,t);
	    printf("----------------------------------------\n");

	    while( (k>=diff) && (t<0) ){
		printf("step before testing k=%d;t=%d;text[k]=%c\n",k,t,text[k]);
		if ( (text[k]!=' ') && (text[k]!='\t') && (text[k]!='\n') )//&& (text[k]!=EOF) ) 
		    t=k;
		else
		    --k;
		printf("step after testing  k=%d;t=%d;text[%d]=%c\n",k,t,k,text[k]);
	    } 
	        
	    if (t>=0)
		printf("We got it!) t=%d;\n\n",t);
	    if (t>0){
		for(l=len;l>=(t+1);--l)
		    text[l]=text[l-1];
		text[t]='\n';
		++len;
	    }
	j=0;
	}
	
	printf("in char text[%d]=%c;in digit text[%d]=%d;i=%d,j=%d\n ",i,text[i],i,text[i],i,j);
    }
//    for (i=0;i<len;++i)
}
