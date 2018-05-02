#include<stdio.h>
#include<stdlib.h>

bool bin_search(int a[],int n,int q)
{
    int i,j,l,u,m,flag=0;
    l=0;u=n-1;
    while(l<=u){
        m=(l+u)/2;
        if(a[m]==q)
            flag++;
        else if(a[m]>q)
            l=m+1;
        else
            u=m-1;
    }
    if(flag==1) return true;
    else return false;
}
int main()
{
    int n,x[123],i,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    scanf("%d",&p);

    if(bin_search(x,n,p))
        printf("Search successful");
    else
       printf("Search Unsuccessful");
}
