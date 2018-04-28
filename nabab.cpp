#include<bits/stdc++.h>
int main()
{
    long long a,b,n;
    int d=0;
 char array[10000];
  while(scanf("%lld ",&n)==1)
  {
      while(n--){
      scanf("%lld %lld",&a,&b);
       long long count=0,c=0;
      getchar();
      while(a--)
      {
          scanf("%s",array);
          for(long long i=0; i<b; i++)
          {
              if(array[i]=='B')
                count++;
                else if(array[i]=='T')
                    c++;
          }
      }
      printf("Case %d: %lld\n",++d,count-c);
  }
  }
  return 0;
}
