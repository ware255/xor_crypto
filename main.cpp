#include <cstdio>
#include <cstring>
#define KEY 8

int main() {
    char str[256];
    size_t len, i;
    printf("input  : ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    for (i = 0; i < len; i++) i[str] ^= KEY;
    printf("\nencode : ");i=0;
    len = --len-1;
    for (i = 0; i < len; i++) printf("%02x\x20", i[str]);
    printf("%02x\n", i[str]);
    for (i = 0; i < (len = strlen(str)); i++) str[i] ^= KEY;
    printf("decode : ");
    for (i = 0; i < len-1; i++) printf("%c", i[str]);i+=1;
    printf("%c\n", i[str]);
    return 0;
}
