#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]==2){
            cnt++;
        }
        if(cnt==3){
            printf("%d",i+1);
            break;
        }
    }    
    return 0;
}