import java.util.Scanner;
import java.util.Vector;

public class schoolspirit{

    public static double sum(Vector<Double> score){
        double s = 0;
        for (int i = 0; i < score.size(); i++) {
            s += 0.2*(score.get(i)* Math.pow(0.8, i));
        }
        return s;
    }
    public static Scanner consol = new Scanner(System.in);
    public static void main(String[] args){
         int length = consol.nextInt();
         Vector<Double> score = new Vector<>();
         double sc;
        for (int i = 0; i < length; i++) {
            sc = consol.nextDouble();
            score.add(sc);
        }

    double total = sum(score);
        double s = 0;
        double temp;
        for (int i = 0; i < score.size(); i++) {
            temp = score.get(i);
            score.remove(temp);
            s += sum(score);
            score.add(i, temp);
        }
        s = s/length;
        System.out.println(total);
        System.out.println(s);
    }
}