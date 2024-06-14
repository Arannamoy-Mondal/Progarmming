
import javax.swing.JOptionPane;

public class gui_intro {
    public static void main(String args[])
    {
        String str=JOptionPane.showInputDialog("Enter your name:");
        System.out.println("Hello, "+str);
        int age=Integer.parseInt(JOptionPane.showInputDialog("Enter your age:"));
        System.out.println("You are "+age+" years old");
        double height=Double.parseDouble(JOptionPane.showInputDialog("Enter your height: "));
        JOptionPane.showMessageDialog(null,"Hello, "+str+".\nYou are "+age+" years old. Your height is "+height);
    }
    
}
