#include<bits/stdc++.h>
#include<string>
using namespace std;

inline bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
 
    while (h > l)
        if (str[l++] != str[h--])
            return false;
 
    return true;
}
 

inline int isRotationOfPalindrome(string str)
{
   if (isPalindrome(str))
         return 0;
   int n = str.length(),min=-1;
   for (int i=0;i<(n-1);i++)
   {
       string str1=str.substr(i+1,n-1);
       string str2=str.substr(0,i+1);
       str1.append(str2);
       if (isPalindrome(str1))
       {
       		//printf("left shift:i=%d\n",i+1);
       		if((i+1)<(n-i-1))
			   min=i+1;
			else
				min=n-i-1;
       		break;
       }  
   }

	if(min==-1)
		return -1;
   for (int i=0;i<min;i++)
   {
       string str1=str.substr(0,n-i-1);
       string str2=str.substr(n-i-1,n);
       str2.append(str1);
       if (isPalindrome(str2))
       {
       		//printf("left shift:i=%d\n",i+1);
       		if((i+1)<min)
       			min=i+1;
       		break;
       }  
   }
   
   return min;
}
 
int main()
{
    int t;
    char s[500];
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",s);
    	printf("%d\n",isRotationOfPalindrome(s));
    }
    return 0;
}
