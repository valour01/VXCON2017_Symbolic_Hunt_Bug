


int main(int argc, char* argv[])
{
    char arr[100];
    scanf("%s", arr);
    if( *((int*)arr) == 0x61616161 )
    {
        printf("pass\n");
    }else
    {
        printf("fails\n");
    }
}

