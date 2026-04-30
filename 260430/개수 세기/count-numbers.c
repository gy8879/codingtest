#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]==m) cnt++;
    }
    printf("%d", cnt);    
    // Please write your code here.
    return 0;
}