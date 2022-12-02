boolnum_prim(int n,inti)
{
    int r;
    se(i <2)
        restituiscitrue;
    r = n % i;
    se(r ==0)
        return false;
    altro
        r = num_prim(n, i - 1);
}
