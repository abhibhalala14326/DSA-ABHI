#include<stdio.h>
#include<stdlib.h>
int size;
arr[50];
void random()
{
    for(int i=0;i<size;i++)
    {
        arr[i]=(rand()%50)+1;
    }
}
void display()
{
    for(int i=0;i<size;i++)
    {
       printf("%d\n",arr[i]);
    }
}
void index()
{
    int a;
    printf("enter the index ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("not index");
    }else{
         for(int i=0;i<size;i++)
    {
       printf("%d\n",a);
    }
    }
}
void check()
{
int a;
int c=1;
printf("enter the number at check");
scanf("%d",&a);
for (int i=0;i<=size;i++){
if (a==arr[i])
{
    printf("Check a number %d",i);
    c++;
    break;
}

}
if(a==c){
    printf("not");
}
}

int main()
{
    printf("enter the size of size");
    scanf("%d",&size);
random();
display();
check();
}