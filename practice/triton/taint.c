



int main(int argc, char** argv)
{
    char ret;
    int in = atoi(argv[1]); 
    if(in==1)
        ret = 1;
    else if(in==2)
        ret = 2;
    else if(in==3)
        ret = 3;
    else if(in==4)
        ret = 4;
    else if(in==5)
        ret = 5;
    else 
       ret = in;
    //printf("ret %d\n", ret);
    return ret;
}
