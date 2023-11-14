import java.util.*;

class Groovingmonkeys {
    static int findCount(int arr[], int index, int count, int start)
    {
        count++;
        if(arr[index]-1 == start)
        {
            return count;
        }
        return findCount(arr,arr[index]-1,count,start);
    }
    static int gcd(int a, int b)
    {
        if(b == 0) return a;
        return gcd(b,a%b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
            }
            ArrayList<Integer>v = new ArrayList<Integer>();
            for(int i=0;i<n;i++)
            {
                int count = 0;
                int finalcount = findCount(arr,i,count,i);
                v.add(finalcount);
            }
            int ans = v.get(0);
            for(int i=1;i<n;i++)
            {
                ans = (ans*v.get(i))/gcd(v.get(i),ans);
            }
            System.out.println(ans);
        }
    }
}
