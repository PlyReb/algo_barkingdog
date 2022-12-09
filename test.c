#include<stdio.h>

int main()
{
    int score= 43;
    char grade;

    switch(score/10)
    {
        case 10:
        default:
            grade= 'F';
            break;
        case 9:
            grade= 'A';
            break;
    }
    printf("%c가 당신의 성적입니다.\n", grade);
}