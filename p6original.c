#include<stdio.h> 
 int input_size() 
 { 
   int n; 
   printf("enter the size of a array\n"); 
   scanf("%d",&n); 
   return n; 
 } 
 void input_array(int n,int a[n]) 
 { 
   printf("enter the array elements\n"); 
   for(int i=0;i<n;i++) 
     { 
       scanf("%d",&a[i]); 
     } 
 } 
 int find_largest(int n,int a[n]) 
 { 
   int largest,temp=0; 
   int i; 
   for(i=0;i<n;i++) 
     { 
       if(a[i]>temp) 
       { 
         temp=a[i]; 
         largest=i; 
       } 
       else 
       { 
         temp=temp; 
       } 
     } 
   return largest; 
    
 } 
 void output(int n,int a[n],int largest) 
 { 
   printf("the largest number is %d in position %d",a[largest],largest); 
 } 
 int main() 
 { 
   int x; 
   x=input_size(); 
   int a[x]; 
   input_array(x,a); 
   int result; 
   result=find_largest(x,a); 
   output(x,a,result); 
   return 0;
 }
