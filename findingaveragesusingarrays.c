#include<stdio.h>
void main()
{
  int a[3][5],i,j,av[3]={0};
  for(j=0;j<5;j++)
  {
    printf("Enter marks of  student %d\n",j+1);
      for(i=0;i<3;i++)
      {
        scanf("%d",&a[i][j]);
    }
  }
  for(j=0;j<5;j++)
  {
    av[0]=av[0]+a[0][j];
  }
    for(j=0;j<5;j++)
  {
    av[1]=av[1]+a[1][j];
  }
  for(j=0;j<5;j++)
  {
    av[2]=av[2]+a[2][j];
  }
  printf("Average marks of subject 1 :%d\n",av[0]/5);
  printf("Average marks of subject 2 :%d\n",av[1]/5);
  printf("Average marks of subject 3 :%d",av[2]/5);
}
