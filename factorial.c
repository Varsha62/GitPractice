#include<stdio.h>

int fact(int a){
    //base case
    if(a==1){
        return 1;
    }
    return a*fact(a-1);
}
int main(){
    int n ;
    printf("PLEASE ENTER N : " );
    scanf("%d",&n);

    printf("%d",fact(n));

}