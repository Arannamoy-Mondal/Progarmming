import java.util.*;
import javax.swing.JOptionPane;
public class random_number {
    public static void main(String[] args) {
        Random random=new Random();
        int x=random.nextInt();
        double y=random.nextDouble();
        JOptionPane.showMessageDialog(null,"Your lucky number is: "+x+" and "+y);



    }
    
}
