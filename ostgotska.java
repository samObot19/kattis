
import java.io.*;

public class ostgotska{

    public static float counter(String str, String sub){
        int count = 0;
        int pos = 0;
        int space = 0;

        while ((pos = str.indexOf(sub, pos)) != -1){
            count++;
            pos += sub.length();
        }

        for (int i = 0; i < str.length(); i++){
            char c = str.charAt(i);

            if (c == ' ' || c == '\t' || c == '\n'){
                  space ++;
            }
        }
        float percent = ((float) count / ((float) str.length())) * 100;
        return percent;
    }

    public static void main(String [] arga) throws IOException {
        BufferedReader consol = new BufferedReader(new InputStreamReader(System.in));

        String line = consol.readLine();
        float percent = counter(line, "ae");

        /*if(percent >= 40){
            System.out.println("dae ae ju traeligt va");
        }else{
            System.out.println("haer talar vi rikssvenska");
        }*/

        System.out.println(percent);
    }
}