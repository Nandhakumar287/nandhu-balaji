void main()
{
int a,b=0,c=0,d;
printf("\nEnter the number:");
scanf("\n%d",&a);
d=a;
while(a!=0)
{
b=a%10;
c=c*10+b;
a=a/10;
}
if(c==d)
printf("\npalindrome");
else
printf("\nnot palindrome");
getch();
}
