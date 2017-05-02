
int main(int argc, char** argv)
{
    int var_int[10];
    int i ;
    //char var_char;
    //char var_string[100];

    for(i=0;i<10;i++)
        scanf("%d", &var_int[i]);

    if( var_int[0] == 1337 )
    {
        printf(argv[1]);
        if( var_int[1] == 9447)
            printf(argv[2]);
        else
            printf("p1\n");
    } else
    {
        printf("p4\n");
        if( var_int[10] + var_int[0] + var_int[1] == 19337 )
        {
            printf(argv[1]);
        
        }
        for(i =0; i< var_int[2]; i++)
        {
            if(i==0)
                printf(argv[1]);
        }
        if(i==8)
            printf(argv[2]);
    }
}



