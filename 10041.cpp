#include <stdio.h>
#include <stdlib.h>

int comp(const void *a,const void *b)
{
    return(*(int *)a-*(int*)b);
}

int main()
{
    int n;///�h�ֲմ���
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int s;///�C�ƴX�Ӵ���
        scanf("%d",&s);
        int fam[s];
        for(int j=0;j<s;j++)
        {
            scanf("%d",&fam[j]);
        }
        int sum=0,mid;///�`�M,�����
        qsort(fam,s,sizeof(int),comp);///�Ƨ�
        mid=fam[s/2];///��X�����
        for(int k=0;k<s;k++)
        {
            sum+=abs(mid-fam[k]);
        }

        printf("%d",sum);
    }

}
