#include <stdio.h>

using namespace std;
int a[200004], bb[200004];
int main()
{
    int n, k, q;
    scanf("%d%d%d", &n, &k,&q);
    int l, r;
    while(n--)
    {
        scanf("%d%d", &l, &r);
        a[l]++;
        a[r+1]--;
    }

    for(int i = 1; i <= 200001; i++)
    {
        a[i] += a[i-1];
    }

    for(int i = 1; i <= 200001; i++)
    {
        if(a[i] >= k)
            bb[i] = 1;
        else
            bb[i] = 0;
    }

    for(int i = 1; i <= 200001; i++)
        bb[i] += bb[i-1];

    int aa, b;
    while(q--)
    {
        scanf("%d%d", &aa, &b);
        printf("%d", bb[b]-bb[aa-1]);
    }

}
