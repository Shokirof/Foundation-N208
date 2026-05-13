#include <stdio.h>
int main(){
int n;
   int cnt=0;
    printf("n>>>> ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i%2==0){
            cnt++;
        }
    }
          printf("%d",cnt);
    return 0;
}