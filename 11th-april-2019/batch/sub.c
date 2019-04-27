#include<stdio.h>
#include<math.h>
int main()
{
    int phy,che,math,bio,cs,tot;
    float per;
    printf("\n Enter the marks of 5 subjects= ");
    scanf("%d%d%d%d%d",&phy,&che,&math,&bio,&cs);
    tot=phy+che+math+bio+cs;
    per=tot/5;
    printf("\n Total of marks of all subjects= %d",tot);
    printf("\n Pecentage of the student=%f ",per);
    if(per>=90)
      printf("You are passed with A-Grade");
    else if(per>=80)
      printf("\n You are passed with B-Grade");
    else if(per>=70)
      printf("\n You are passed with C-Grade");
    else if(per>=60)
      printf("\n You are passed with D-Grade");
    else if(per>=40)
      printf("\n You are passed with E-Grade");
    else if(per<40)
      printf("\n You are failed with F-Grade");
    else
      printf("\n Invalid choise");
     return 0;
}      
              