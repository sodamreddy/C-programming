//
//  main.c
//  basic
//
//  Created by sodam pullareddy on 22/07/17.
//  Copyright © 2017 sodam pullareddy. All rights reserved.
//

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<malloc/malloc.h>

        //quick sorting
void quicksort(int[] ,int ,int );
int partition(int[],int ,int);

int main(){
    int n,r,p;
    int *a;
    //read inputs
    printf("Enter the size of array");
    scanf("%d\n",&n);
    a=(int*)malloc(n*sizeof(int));
    //enter array elements
    for(int j=1;j<=n;j++){
        scanf("%d",&a[j]);
    }
    r=n;
    p=1;
    //calling quicksort Function with p=1,r=size of array
    quicksort(a,p,r);
    
    //elements after quicksort
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }

    return 0;
    
   }
void quicksort(int a[],int p,int r){
    int q;

    if(p<r){
        q=partition( a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}
int partition(int a[],int p,int r){
    int x=a[r];   //pivot elements
    int i=p-1;
    int temp;
    for(int j=p;j<=r-1;j++){
        if(a[j]<x){
            i=i+1;
            //swaping of elements less than pivot element
            int temp1;
            temp1=a[i];
            a[i]=a[j];
            a[j]=temp1;

        }
    }
    //setting pivot element in correct position of array
    //swap a[i+1] and a[r];
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return i+1;
}

