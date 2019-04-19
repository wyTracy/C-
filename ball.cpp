#include<iostream>
using namespace std;

int main()
{
   int n,L,t;
   int i,j,k,w,temp;
   int bc=0,cc=0;
   int a[100],b[100],c[100];
   cin>>n>>L>>t;
   for(i=0;i<n;i++)
   {
      cin>>a[i];
      b[bc++]=i;
   }
   for(j=1;j<=t;j++)
   {
      for(i=0;i<bc;i++)
     {
         if(a[b[i]]==L)
         {
             c[cc++]=b[i];
             bc--;
             b[i]=b[bc]; 
         }
     }
     for(i=0;i<cc;i++)
     {
         if(a[c[i]]==0)
         {
             b[bc++]=c[i];
             cc--;
             for(int h=i;h<cc;h++)
                 c[h]=c[h+1];
          }
     }
      for(k=0;k<bc;k++)
     {
        for(w=0;w<cc;w++)
       {
           if(a[b[k]]==a[c[w]])
          {
             temp=b[k];
             b[k]=c[w];
             c[w]=temp;
          }
       }
     }
     for(k=0;k<bc;k++)
        a[b[k]]++;
     for(w=0;w<cc;w++)
        a[c[w]]--;
   }
   for(i=0;i<n;i++)
     cout<<a[i]<<" ";
   return 0;
}
