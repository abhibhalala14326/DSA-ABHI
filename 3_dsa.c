#include <stdio.h>
int top = -1, size = 5;
int arr[5];
void inset(int a)
{

    if (top >= size - 1)
    {
        printf("full");
    }
    else
    {
        top++;
        arr[top] = a;
    }
}
void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("arr %d\n", arr[i]);
    }
}
void deleteEnd()
{

    if (top < 0)
    {
        printf("full");
    }
    else
    {
        top--;
    }
}
int main()
{
    int no;
 
    
display();
      
  inset(44);
    inset(43);
    deleteEnd();
    display();


  
    
    
    return 0;
}
