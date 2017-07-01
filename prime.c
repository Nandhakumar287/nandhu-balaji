void main()
{
 int i,a,b=0;
 printf("\nEnter +ve num:")
 scanf("\n%d",&a);
 for(i=2;i<=a/2;++i)
       {
            if(a%i==0)
            {
             b=1;
             break;
            }
       }
       if(b==0)
       printf("\nprime");
       else
       printf("\nnot prime");
       getch();
 }      
       
