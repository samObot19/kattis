import java.util.*;
import java.util.Arrays;


public class synchronizinglists{
    public static Scanner consol = new Scanner(System.in);
    public static void main(String[] args){
        Map <Integer, Integer> map = new HashMap<>();
        Vector<String> lst = new Vector<>();

        while(true){
            int len = consol.nextInt();
            if(len == 0){
                break;
            }
            int [] array1 = new int [len];
            int [] copy_array1 = new int[len];
            int [] array2 = new int[len];


            for(int i = 0; i < len; i++){
                array1[i] = consol.nextInt();
                copy_array1[i] = array1[i];
            }
            for (int j = 0; j < len; j++) {
                array2[j] = consol.nextInt();
            }

            Arrays.sort(array1);
            Arrays.sort(array2);

            // mapping
            for (int k = 0; k < len; k++) {
                map.put(array1[k], array2[k]);
            }

            for (int i = 0; i < len; i++) {
                int temp = map.get(copy_array1[i]);
                String l = Integer.toString(temp);
                lst.add(l);
            }
            lst.add("\n");
            map.clear();
        }

        for (int i = 0; i < lst.size() - 1; i++) {
            System.out.println(lst.get(i));
        }
        

    }
}