
#include <stdio.h>
#include <math.h>

int main(){
    
    float pi, base = 0, div = 1;
    int n;

    printf("Qual valor de n?");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        
        if (i % 2 == 0){
            
            base = base - 1/pow(div,3);
        } else {

            base = base + 1/pow(div,3);
            
        }
    div += 2;
    }
    
    pi = cbrt(base*32);
    printf("%.5f", pi);

    return 0;
}