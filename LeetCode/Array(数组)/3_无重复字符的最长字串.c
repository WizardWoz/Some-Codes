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

int lengthOfLongestSubstring(char *s){		//s:Դ�ַ��� 
	int i,j,flag,count=0,len,real=0,lengthmax;		
	len=strlen(s);
	int calculen[len];		//calculen:���arr�����ȵ�����
	char arr[len];			//arr:��Ų��ظ���ĸ���ַ�����
	for(i=0;i<len;i++){ 	//��˳��ȡԴ�ַ����ڵ�1���ַ� 
		flag=0; 
		for(j=0;j<len;j++){	//��Դ�ַ�����1���ַ���arr���ڵ������ַ����Ƚ� 
			if(*(s+i)==arr[j])
				flag++;		//�ж�Դ�ַ������ַ��Ƿ���arr���г��ֹ� 
		}
		if(flag==0){		//��δ���ֹ���������arr��	
			arr[real]=*(s+i);
			real++;
		}
		else{				//�����ֹ�����֮ǰ��ȷ���õ���arr���㳤�� 
			calculen[count]=strlen(arr);//����calculen������	 		
			memset(arr,'\0',calculen[count]);//����arr�������
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
