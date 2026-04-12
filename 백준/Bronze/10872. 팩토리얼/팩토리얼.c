#include <stdio.h>

int main(){
    long long n;
    long long fac=1;
    scanf("%lld",&n);
        // 2. 0팩토리얼 처리 및 음수 처리 (0! = 1)
    if(n < 0) {
        printf("0"); // 음수 팩토리얼 정의 불가 시
        return 0;
    } else if(n==0){
        printf("1");
        return 0;
    } else {
        // 3. 팩토리얼 계산
        for(long long i=n; i>0; i--){
            fac*=i;
        }    
    }
    printf("%lld", fac);
    return 0;
}