import javax.swing.JOptionPane;
public class switches {
    public static void main(String args[])
    {
        int day=Integer.parseInt(JOptionPane.showInputDialog("Enter the day:"));
        switch(day)
        {
           case 6:JOptionPane.showMessageDialog(null,"Today is Saturday");
           break;
           case 7:JOptionPane.showMessageDialog(null,"Today is Sunday");
           break;
           case 1:JOptionPane.showMessageDialog(null,"Today is Monday");
           break;
           case 2:JOptionPane.showMessageDialog(null,"Today is Tuesday");
           break;
           case 3:JOptionPane.showMessageDialog(null,"Today is Wednesday");
           break;
           case 4:JOptionPane.showMessageDialog(null,"Today is Thursday");
           break;
           case 5:JOptionPane.showMessageDialog(null,"Today is Friday");
           break;
           default:JOptionPane.showMessageDialog(null,"You entered wrong.");
           break;




        }
    }
}
