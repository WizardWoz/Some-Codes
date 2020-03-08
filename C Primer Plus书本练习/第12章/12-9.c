#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
void fun(void);
int main(void){
	fun();
	return 0;
}

void fun(void){
    int n_word,i;
    char **word;
    char word_tmp[256];

    printf("How many words do you wish to enter? ");
    scanf("%d",&n_word);

    word=(char **)malloc(sizeof(char *)*n_word);

    printf("Enter %d words now:\n",n_word);
    for(i=0;i<n_word;i++){
        scanf("%s",word_tmp);		//检测到任意空格字符即停止输入 
        int word_length=strlen(word_tmp);
        word[i]=(char *)malloc(word_length+1);
        strncpy(word[i],word_tmp,word_length+1);
    }

    printf("Here are your words:\n");
    for(i=0;i<n_word;i++){
        printf("%s\n",word[i]);
    }

    // 别忘记释放内存
    for(i=0;i<n_word;i++){
        free(word[i]);
    }
    free(word);
}
