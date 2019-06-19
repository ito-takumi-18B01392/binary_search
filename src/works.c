#include <stdio.h>

int n;
int k;
int A[100000];


int p(int x){
    int i, sum, ct;
    sum = 0;
    ct = 0;
    for(i=0; i<n; i++)
    {sum = sum + A[i];
         if (A[i] > x) return 0;
         else if (sum > x) {ct = ct+1; sum = A[i];}
    }if (ct >= k) return 0;
     else return 1;
}

int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    lb = 0;
    ub = 10000;
    while(ub-lb>1){
        int m = (ub+lb)/2;
        if (p(m)) {ub = m;}
        else {lb = m;}
    }
    printf("%d\n", ub);
    return 0;
}
