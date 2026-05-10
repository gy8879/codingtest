#include <stdio.h>

int main() {
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    int A_arr[n1];
    int B_arr[n2];



    for(int i=0; i<n1; i++){
        scanf("%d", &A_arr[i]);
    }
    for(int i=0; i<n2; i++){
        scanf("%d", &B_arr[i]);
    }
    int found=0;
    for(int i=0; i<=n1-n2; i++){
        int flag=1;
        for(int j=0; j<n2; j++){
            if(A_arr[i+j]!=B_arr[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Yes");
    }else{
        printf("No");
    }
    // Please write your code here.
    return 0;
}