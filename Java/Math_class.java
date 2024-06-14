
import javax.swing.JOptionPane;

public class Math_class {
    public static void main(String[] args) {
        int x=Integer.parseInt(JOptionPane.showInputDialog("Enter two number: ")),
        y=Integer.parseInt(JOptionPane.showInputDialog("Enter the second number: "));
        int x1=Math.max(x,y),y1=Math.min(x,y);
        int ans=Math.abs((-1)*(x-y));
        JOptionPane.showMessageDialog(null,"maximum number is:"+x1+" and minimum number is: "+y1+" and absulote value of their substractio "+ans);
    }
    
}
