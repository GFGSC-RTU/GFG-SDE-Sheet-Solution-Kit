class GFG {
     
static int setKthBit(int n, int k)
{
    return ((1 << k) | n);
}
 
public static void main(String arg[])
{
    int n = 10, k = 2;
    System.out.print("Kth bit set number = " +
                             setKthBit(n, k));
}
}
