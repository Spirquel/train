import my_class.Toto;

/*pour compiler : javac -d bin my_class/Toto.java Main.java //ça range les .class dans le bin
  pour lancer : java -cp bin Main //faut reprendre les .class dans le bin
 */

public class Main
{
    public static void main (String[] args)
    {  
        Toto toto1 = new Toto(15, "pedro", false);
        toto1.getIdentity();
    }
}