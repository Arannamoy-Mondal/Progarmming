import javax.swing.JOptionPane;
public class if_statement {
    public static void main(String[] args) {
        
        int age=Integer.parseInt(JOptionPane.showInputDialog("Enter your age: "));
        if(age>=18)JOptionPane.showMessageDialog(null, "Your are adult");
        else JOptionPane.showMessageDialog(null, "Your are not adult");
    }
    
}
