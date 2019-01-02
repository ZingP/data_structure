#include <stdio.h>

int main(){   
    FILE *fp = NULL;
    char buff[255];
 
    fp = fopen("D:/githubfile/data_structure/read_write_file/test.txt", "r+");  // 确保 test.txt 文件已创建
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff );
 
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff );
   
    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    
    int a;
    scanf  ("%d", &a);
}