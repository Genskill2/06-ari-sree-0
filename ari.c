#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>
#include<math.h>

string ari(string s)
        {
	int len,n_word=0,n_char=0,n_sent=0;
	string result;
	len = strlen(s);
	for(int i=0;i<len;i++)
         {
	     if(isalnum(s[i]))
	     n_char++;
	     if(s[i]==' ')
	     n_word++;
	     if(s[i]=='!'||s[i]=='?'||s[i]=='.')
	     n_sent++;
	  }
	
	float ari_value = 4.71*n_char/n_word+0.5*n_word/n_sent-21.43;
	int r=round(ari_value);
	if(r<ari_value)
	  r++;
	
	string grade_level[] = {"KinderKindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"} ;
	
	for(int i =1;i<=14;i++){
	 if(r==i)
	   result = grade_level[i-1];
		
	}
	return result;
	}
