#include<stdio.h>
struct term{
    int coef;
    int exp;
};
int main(){
struct term poly1[10],poly2[10],result[30];
int n1,n2,n3=0;
int i=0,j=0;
printf("ENter the number of terms in the first polynomial :");
scanf("%d",&n1);
printf("Enter the terms for the first polynomial (coefficient exponent) :\n)");
for(i=0;i<n1;i++){
    scanf("%d""%d", &poly1[i].coef,&poly1[i].exp);

}
printf("First Polynomial is :\n");
for(i=0;i<n1;i++){
    printf("%d^%d",poly1[i].coef,poly1[i].exp);
    if(i!=n1-1){
        printf("+");
    }
}printf("\n");
printf("ENter the number of elements in the second polynomial (coefficient,exponent):");
scanf("%d",&n2);
printf("Enetr the terms of  second polynnomial :\n");
for(i=0;i<n2;i++){
    scanf("%d""%d",&poly2[i].coef,&poly2[i].exp);
}printf("The secod polynomial is :\n");
for(i=0;i<n2;i++){
    printf("%d^%d",poly2[i].coef,poly2[i].exp);
    if(n2-1!=0){
        printf("+");
    }
}
i=0;j=0;
while(i<n1 && j<n2){
    if(poly1[i].exp==poly2[j].exp){
        result[n3].coef=poly1[i].coef+poly2[j].coef;
        result[n3].exp=poly1[i].exp;
        i++;
        j++;
        n3++;
    }else if(poly1[i].exp>poly2[j].exp){
        result[n3].coef=poly1[i].coef;
        result[n3].exp=poly1[i].exp;
        i++;
        n3++;
    }else{
        result[n3].coef=poly2[j].coef;
        result[n3].exp=poly2[j].exp;
        j++;
        n3++;

    }
}while(i<n1){
    result[n3].coef=poly1[i].coef;
    result[n3].exp=poly1[i].exp;
    i++;
    n3++;
}while(j<n2){
    result[n3].coef=poly2[j].coef;
    result[n3].exp=poly2[j].exp;
    j++;
    n3++;
}
printf("\n The resulttant polynomial after addition is :\n");
for(i=0;i<n3;i++){
    printf("%d^%d",result[i].coef,result[i].exp);
    if(n3-1!=0){
        printf("+");
    }
}printf("\n");
return 0;
}
