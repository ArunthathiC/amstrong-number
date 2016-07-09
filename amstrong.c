#include<stdio.h>
void main(){
  int n,temp,r,res,i;
  printf("Enter the number:");
  scanf("%d",&n);
  temp=n;
  for(i=0;i<=n;i++){
    r=n%10;
    res=r*r*r;
    n=n/10;
  }
  if(temp=res)
    printf("This is amstrong number");
  else
    printf("not an amstrong number");
  }
  
