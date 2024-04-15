package bank;
class Account
{
    public  String name;
    protected String email;
    private String password;
    //getters & setters (value not setted && value setted)
    public String getPassword()
    {
        setpassword("randomPass");
        return this.password;
    }
    private void setpassword(String pass)
    {
        this.password=pass;
    }
}
public class Bank 
{
    public static void main(String args[])
    {
        Account ac1=new Account();
        ac1.name="log2base2";
        ac1.email="user01@log2base2.com";
        //ac1.setpassword("1234");
        System.out.println(ac1.getPassword());

    }
}
