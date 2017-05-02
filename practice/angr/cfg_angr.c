int f1_1()
{
    return f2_1();
}

int f1_2()
{
    return f2_2();
}


int f2_1()
{
    return f3_1();
}

int f2_2()
{
    return f3_2();
}


int f3_1()
{
   return end();
}

int f3_2()
{
   return end();
}

int end()
{
   return 0;
}

int rec()
{
   return rec();
}


void main(int argc, char** argv)
{
    f1_1();
    f1_2(); 

    rec();
}
