#include<stdio.h>

void TOH(int n,char *Beg,char *Aux,char *End)
{
    if(n == 0)
        return;
    TOH(n-1,Beg,End,Aux);
    printf("Shifting %dth disk from %s tower to %s tower\n",n,Beg,End);
    TOH(n-1,Aux,Beg,End);
}
int main()
{
    printf("kushagra Varshney 2125cs1206\n");
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    char Beg[] = "Beginning";
    char Aux[] = "Auxiliary";
    char End[] = "End";
    TOH(n,Beg,Aux,End); 
    return 0;
}