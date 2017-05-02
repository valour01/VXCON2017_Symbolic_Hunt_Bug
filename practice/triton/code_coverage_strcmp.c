

int my_strcmp(char* str1, char* str2)
{
    int i = 0;
    for(i=0;  str1[i]==str2[i] && str1[i]!=0 && str2[i]!=0; i++);
    return str1[i] - str2[i];
}
  


int main(int argc, char** argv)
{
    int var_int;
    char var_char;
    char var_string[100];

    printf("%s\n", argv[1]);


    if(my_strcmp("hell", argv[1])==0)
        printf("got p2\n");


}



