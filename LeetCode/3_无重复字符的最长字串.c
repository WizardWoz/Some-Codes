#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
int lengthOfLongestSubstring(char *s);
int main(void){
	char s[]={"aaabbbccc"};
	printf("The length:%d",lengthOfLongestSubstring(s));
	return 0;
}

int lengthOfLongestSubstring(char *s){		//s:源字符串 
	int i,j,flag,count=0,len,real=0,lengthmax;		
	len=strlen(s);
	int calculen[len];		//calculen:存放arr串长度的数组
	char arr[len];			//arr:存放不重复字母的字符数组
	for(i=0;i<len;i++){ 	//按顺序取源字符串内的1个字符 
		flag=0; 
		for(j=0;j<len;j++){	//将源字符串的1个字符与arr串内的所有字符作比较 
			if(*(s+i)==arr[j])
				flag++;		//判断源字符串的字符是否在arr串中出现过 
		}
		if(flag==0){		//若未出现过，则存放在arr中	
			arr[real]=*(s+i);
			real++;
		}
		else{				//若出现过，将之前已确定得到的arr计算长度 
			calculen[count]=strlen(arr);//存入calculen数组中	 		
			memset(arr,'\0',calculen[count]);//并将arr数组清空
			count++; 
			real=0;
		}
	}
	lengthmax=calculen[0];
	for(i=1;i<=count;i++){
		if(calculen[i]>=lengthmax)
			lengthmax=calculen[i];
	}
	return lengthmax;
}
