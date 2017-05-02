


int main(int argc, char* argv[])
{
    if( *((int*)argv[1]) == 0x61616161 )
    {
        printf("pass\n");
    }else
    {
        printf("fails\n");
    }
}

