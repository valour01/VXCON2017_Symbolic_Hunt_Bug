

int main(int argc, char** argv)
{
    char str[100];
    int i;
    //scanf("%s", str);
    //printf("%s\n", argv[1]);
    for(i=0; argv[1][i] != 0; i++)
    {
       //printf("%c", argv[1][i]);
       *(char*)(str+i) = argv[1][i]-(unsigned char)3;
    }
    printf(str);
    printf("\nfin\n");

}
