//
//  main.c
//  Bubble Sort
//
//  Created by sodam pullareddy on 23/07/17.
//  Copyright © 2017 sodam pullareddy. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
int *bubblesort(int a[],int n);
int *bubblesort(int a[],int n){
    printf("%d\n",n);
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
            
        }
        n--;
    }
    
    return a;
}

int main() {
    //read inputs
    int n;
    printf("enter the array size");//size of array
    scanf("%d",&n);
    int *a=malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        bubblesort(a,n);
    //output
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}
