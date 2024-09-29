
// way 1
int missingN(int t[5], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (t[i] + 1 != t[i + 1])
        {
            return t[i] + 1;
        };
    };
}
// int main (){
// int t[5]={1,2,3,5,6};
// return missingN(t,5);
//}
// way 2

int main()
{

    int t[5] = {1, 2, 3, 5, 6};
    int somme = t[4] * (t[4] + 1) / 2;
    int sommeT = sum(t, 5);
    return somme - sommeT;
}
int sum(int t[5], int length)
{
    int x = 0;
    for (int i = 0; i < length; i++)
    {
        x = x + t[i];
    }
    return x;
}
