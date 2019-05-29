#include <stdio.h>
#include <stdlib.h>
struct course

{
	char r[10];  
	int t;
	int y;
	int h;
} p;

int main(void)
{
    FILE *k;
	printf("用唯讀模式讀取couse.txt(結構體)\n");
	printf("-------------------------------------------------\n");
	printf("讀取內容為：\n");
	k=fopen("course.txt", "r");
    if (k==NULL)
    {
        printf("檔案開啟失敗!!\n");
        exit(1);
	}   
    else
    {
    	while (fscanf(k, "%[^,],%d,%d,%d", p.r, &p.t, &p.y, &p.h)!=EOF) 
    	    printf("%s\t %d\t %d\t %d", p.r, p.t, p.y, p.h); 
	}
	printf("\n");
    fclose(k);
    system("pause");
    return 0;
}
