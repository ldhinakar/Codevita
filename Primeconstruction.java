import java.util.*;

class PrimeConstruction {
    static int gcd(int a, int b)
    {
        if(b==0) return a;
        return gcd(b,a%b);
    }
    static int lcm(ArrayList<Integer>arr, int n)
    {
        int ans = arr.get(0);
        for(int i=1;i<n;i++)
        {
            ans = (arr.get(i)*ans)/(gcd(arr.get(i),ans));
        }
        return ans;
    }
    static boolean isprime(int n)
    {
        if(n==2) return true;
        for(int i=2;i<=Math.sqrt(n);i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer>v = new ArrayList<Integer>();
        for(int i=0;i<n;i++)
        {
            int t = sc.nextInt();
            v.add(t);
        }
        int a = Collections.min(v);
        int index = v.indexOf(a);
        v.remove(index);
        int res = lcm(v, n-1);
        if(isprime(res+a))
        {
            System.out.println(res+a);
        }
        else
        {
            System.out.println("None");
        }
    }
}
