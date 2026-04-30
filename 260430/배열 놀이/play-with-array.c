#include <stdio.h>

int main() {
    int n,q;
    scanf("%d %d",&n,&q);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<q; i++){
        int q_type;
        int s,e;
        scanf("%d",&q_type);
        if(q_type==1){
            scanf("%d",&s);
            printf("%d\n",a[s-1]);
        }
        else if(q_type==2){
            scanf("%d",&s);
            int cnt=0;
            for(int j=0; j<n; j++){
                if(a[j]==s){
                    cnt=1;
                    printf("%d\n", j+1);
                    break;
                }
            }
            if(cnt==0){
                printf("0\n");
            }

        }else if(q_type==3){
            scanf("%d %d", &s,&e);
            for(int j=s-1; j<=e-1; j++){
                printf("%d ", a[j]);
            }
            printf("\n");
        }
    }
    // Please write your code here.
    return 0;
}