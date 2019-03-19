#include"cstdio"
#include"cmath"
#include"algorithm"
using namespace std;
const int MAXN=100005;
typedef long long LL;
struct node{
    int l,r;
    LL sum;
}segTree[MAXN*3];
int cnt;
void build(int rt,int l,int r)
{
    segTree[rt].l=l;
    segTree[rt].r=r;
    if(l==r)
    {
        scanf("%lld",&segTree[rt].sum);
        if(segTree[rt].sum==1)
        {
            cnt++;//统计数值1的个数 ,方便优化程序 
            segTree[rt].sum++;//将所有1均变为2,防止1干扰程序优化 
        }
        return ;
    }
    int mid=(l+r)>>1;
    build(rt<<1,l,mid);
    build((rt<<1)|1,mid+1,r);
    segTree[rt].sum=segTree[rt<<1].sum+segTree[(rt<<1)|1].sum;
}

void update(int rt,int l,int r)
{
    if(segTree[rt].sum==2*(segTree[rt].r-segTree[rt].l+1))    return ;//优化:不超过4轮，不小于2的整数在均变为2 
    
    if(segTree[rt].l==segTree[rt].r)
    {
        segTree[rt].sum=(LL)(log2(segTree[rt].sum*1.0)+1);
        return ;
    }
    
    int mid=(segTree[rt].l+segTree[rt].r)>>1;
    
    if(r<=mid)    update(rt<<1,l,r);
    else if(mid<l)    update((rt<<1)|1,l,r);
    else{
        update(rt<<1,l,mid);
        update((rt<<1)|1,mid+1,r);
    }
    segTree[rt].sum=segTree[rt<<1].sum+segTree[(rt<<1)|1].sum;
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    build(1,1,n);
    while(m--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        update(1,x,y);
        printf("%lld\n",segTree[1].sum-cnt);
    }
}
