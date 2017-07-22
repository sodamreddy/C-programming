//
//  main.c
//  practice
//
//  Created by sodam pullareddy on 26/01/17.
//  Copyright © 2017 sodam pullareddy. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//string with elemination of vowels
char *rvowel(char *string);


    int main(){
        char *string;
        string=(char*)malloc(sizeof(char));
        //read inputs
        scanf("%s",string);
      //  int i=0;
        string=rvowel(string);
        printf("%s",string);

    }
char *rvowel(char *string){
    long len=strlen(string);
    //eleminates vowels from string
    for(int i=0;i<len;i++){
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='O'||string[i]=='u'){
            for(int j=i;j<len;j++){
                string[j]=string[j+1];
            }
            len--;
        }
    }
    //output
    return string;
}


