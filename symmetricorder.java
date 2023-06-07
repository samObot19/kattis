import java.util.*;
import java.util.Vector;


public class symmetricorder{
    public static Scanner consol = new Scanner(System.in);

    public static void sort(Vector<String> vec){
        int length = vec.size()/2;
        int len = vec.size();

        for(int i = 1; i <= length; i++){
            String temp = vec.get(i);
            vec.remove(vec.get(i));
            vec.add((len - i), temp);
        }
    }

    public static void main(String [] args){
        Vector<String> symmetric = new Vector<String>();
        Vector<String> tempo = new Vector <String>();
        Vector<Integer> lst = new Vector<Integer>();
        
        String listOrder;
        while (true){
        //tempo.clear();
        String length = consol.nextLine();
        int len = Integer.parseInt(length);
        if(len == 0){
            break;
        }
        lst.add(len);
        for (int i = 0; i < len; i++){
            tempo.add(consol.nextLine());
        }
        sort(tempo);
        symmetric.addAll(tempo);
        tempo.clear();
    }
    int s = 1;
    int k = lst.get(0);
    System.out.println("SET " + 1);
        for (int i = 0; i < symmetric.size(); i++) {
            if (k == (i)) {
                System.out.println("SET " + (s + 1));
                k += lst.get(s);
                s++;
            }
            System.out.println(symmetric.get(i));
         }
        
    }
}