#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#include "pe12-3a.h"
int main(void){
	int mode,mode_pre;
	printf("Enter 0 for metric mode,1 for US mode:");
	scanf("%d",&mode);
	while(mode>=0){ 
		if(mode!=0&&mode!=1){
            printf("Invalid mode specified. Mode %s used.\n",(mode_pre?"1(US)":"0(metric)"));
            mode=mode_pre;
        }		//将set_mode()搬至main()内部 
		show_info(mode);
		mode_pre=mode;
		printf("Enter 0 for metric mode,1 for US mode");
		printf(" (-1 to quit):");
		scanf("%d",&mode);
	}
	printf("Done!");
	return 0;
}
