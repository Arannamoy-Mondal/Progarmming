import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),k=sc.nextInt(),cnt=0;
        for(int i=0;i<n;i++)
        {
            int tmp=sc.nextInt();
            if(tmp>=k)cnt++;
        }
        System.out.println(cnt);
    }
}
