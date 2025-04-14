package my_class;

public class Toto 
{
    private int age_;
    private String name_;
    private boolean natio_france_;
    
    public Toto(int _age, String _name, boolean _natio_france)
    {
        this.age_ = _age;
        this.name_ = _name;
        this.natio_france_ = _natio_france;
    }
    
    public void getIdentity()
    {
        System.out.println("name: " + this.name_ + ", age: " + this.age_ + " ans, nationalite francaise: " + this.natio_france_);
    }
}
