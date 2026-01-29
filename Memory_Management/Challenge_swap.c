#include<stdio.h>
void Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
int My_current_average_college = 10;
int La_Martiniere = 20;
Swap(&My_current_average_college,&La_Martiniere);
printf("My current average college = %d/100\n",My_current_average_college);
    printf("La Martinieres = %d0/100\n",La_Martiniere);
    return 0;
}