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
	printf("�ΰ�Ū�Ҧ�Ū��couse.txt(���c��)\n");
	printf("-------------------------------------------------\n");
	printf("Ū�����e���G\n");
	k=fopen("course.txt", "r");
    if (k==NULL)
    {
        printf("�ɮ׶}�ҥ���!!\n");
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
