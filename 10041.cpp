#include <stdio.h>
#include <stdlib.h>

int comp(const void *a,const void *b)
{
    return(*(int *)a-*(int*)b);
}

int main()
{
    int n;///多少組測資
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int s;///每排幾個測資
        scanf("%d",&s);
        int fam[s];
        for(int j=0;j<s;j++)
        {
            scanf("%d",&fam[j]);
        }
        int sum=0,mid;///總和,中位數
        qsort(fam,s,sizeof(int),comp);///排序
        mid=fam[s/2];///找出中位數
        for(int k=0;k<s;k++)
        {
            sum+=abs(mid-fam[k]);
        }

        printf("%d",sum);
    }

}
