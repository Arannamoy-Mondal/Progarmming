
import java.util.*;

public class input {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your name:");
        String name=sc.nextLine();
        System.out.println("How old are you?");
        int old=sc.nextInt();
        sc.nextLine();
        System.out.println("Where are you from?");
        String from=sc.nextLine();
        System.out.println("My name is "+name);
        System.out.println("You are "+old+" years old.");
        System.out.println("You are from "+from);
        
    }
}
