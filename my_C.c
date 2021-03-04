/*my first programm*/
#include<stdio.h>
int main() {
    char ms;
    char sex;
    int age;
    printf("Enter your marital status (y/n)\n");
    scanf(" %c",&ms);
    printf("Enter your age\n");
    scanf(" %d",&age);
    printf("Enter your sex (M/F)\n");
    scanf(" %c",&sex);
    if(ms=='y'){
        printf("unsured");  
    }
    else
    {
        if(sex == 'M')
        {
            if(age<=30){
                printf("unsured");
            }
            else{
                printf("hired");
            }
        } else{
            if(age<=25){
                printf("unsured");
            }
            else{
                printf("hired");
            }
        }
        
    }
    return 0;
}
