#include<iostream>
void d2b(int n,char c[],int index)
{
if(n==0)
return;
c[index] = n%2+'0';
d2b(n/2,c,index+1);

}

int main()
{
int n;
char c[100];
cin >> n;
d2b(n,c,0);
cout<<c;
}
