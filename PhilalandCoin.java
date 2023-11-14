class PhilalandCoin {
    static int denom(int n) {
        return ((int)(Math.log(n)/Math.log(2))+1);
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0)
        {
            int n = sc.nextInt();
            System.out.println(denom(n));
            t-=1;
        }
    }
}
