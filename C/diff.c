/**
 * File              : diff.c
 * Author            : zhangzhao <zhangzhao@ihep.ac.cn>
 * Date              : 16.06.2020
 * Last Modified Date: 16.06.2020
 * Last Modified By  : zhangzhao <zhangzhao@ihep.ac.cn>
 */
/* 比较输入文件并输出不同行 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLINE 100
void linediff(FILE *ifp, FILE *ofp) {
    char *iline=malloc(MAXLINE); 
    char *oline=malloc(MAXLINE);
    int num=0;
    while(fgets(iline, MAXLINE, ifp)&&fgets(oline, MAXLINE, ofp)) {
        num++;
        if (strcmp(iline, oline)) {
            printf("line %d:\n",num);
            printf("first file: %s",iline);
            printf("second file:%s",oline);
        }
    }
    free(iline);
    free(oline);
}
int main(int argc, char *argv[]) {
    FILE *ifp=fopen(argv[1],"r");
    FILE *ofp=fopen(argv[2],"r");
    linediff(ifp, ofp);
    fclose(ifp);
    fclose(ofp);
    return 0;
}

