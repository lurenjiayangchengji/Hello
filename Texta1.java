import java.util.*;
public class Texta1{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int x,y;
        System.out.println("输入两个整数");
        x=in.nextInt();
        y=in.nextInt();
        if (x>y&&y>=3){
            System.out.println(x+y);}
        else if (x<y||y>=4){
                System.out.println(x*y);
        }
        else
            System.out.println(x-y);
    }
}
