import java.util.*;//输入用的
//public class Text1 {
//   public static void main(String[] args) {
//      //定义变量int,double,char,String,float,浮点墨认double,要改加F或f后缀
//   int a = 1, b, c = 3;
//   float dd = 1.2F;//dd=1.2会报错
//   double d = 1.2, e;
//   char f = 'F', g;
//   int aa = (int) dd;
//   String h = "hhhh", i;
//   a=(int)dd;
//   a++;
//   b=a++;
//   ++c;
//   int max=a>b?a:b;
//}
//       //数组
//        //于c一致int a[100]下标0到99}
//    public static void main (String[]args){
//       Scanner in=new Scanner(System.in);//输入用的
//        //输出
//        int a=2,b=3,c,i=1;double f=1.22;
//        c=a*b;
//        String d="abc";
//        //System.out.print("文字"+变量或变量式子),println和print无区别，但println会自动换行
//        System.out.print(c);
//        System.out.println("考试分数为:"+c);
//        System.out.println("考试分数为:"+(c+b)+c*b);
//        System.out.print(i+""+f+""+d+"\n");
//        System.out.printf("i=%d,d=%f,s=%s\n",i,f,d);
//        /*输入
//        import java.util.*;(开头）
//        Scanner in=new Scanner(System.in);
//        变量=in.nextInt();int型的
//           =in,nextDouble();double型的
//           =in.nextLine();String科读取一行的，且输入（空格）b，会读取b前的空格
//           =in.next();只读取一个单词，空格，回车为界
//         */
//        d=in.nextLine();
//        System.out.print(d);
//        /*in.nextLine()读空（常见错误）
//        int n=nextInt();
//        String s=nextLine();//n输入的那个回车会被s读取，s就变回车了（读空）
//        //解决
//        int n=nextInt();
//        in.nextLine();或搞String temp=in.nextLine();
//        String s=nextLine();
//         */
//    }
//示例
//       public static void main(String[] args) {
//            Scanner in = new Scanner(System.in);
//            int i = in.nextInt();
//            double d = in.nextDouble();
//            in.nextLine();
//            String s = in.nextLine();
//            System.out.print(i+""+d+""+s+"\n");//1
//            System.out.printf("i=%d,d=%f,s=%s\n",i,d,s);
//            in.close();
//        }
//   }

   /// /if,switch与python一样一个成立后面忽略
   //switch(a){
   // case1:break;
   // case2...
   // default:
   // }
//    public static void main(String args[]){
//        Scanner in=new Scanner(System.in);
//        int a=1,b=2,c=3,d=4;
//        if(a==1){
//            a+=1;
//        }
//        else if(b!=5){
//            a+=2;
//        }
//        else if(c==3){
//            a+=4;
//        }
//        else{
//            a+=8;
//        }
//        System.out.println(a);
//        in.close();
//    }
//    //循环与c完全一样(||或，&&和
//    public static void main(String[]args){
//        int[] wudi={1,2,3,4,5,6,7,8,9};
//        int n=0;
//        for(int i=0;i<=9;i++){
//            System.out.println(i+";");//System.out.println(wudi[i]);
//            n+=1;
//        }
//        int sum=1,i=2;
//        while(i<18){
//            sum+=1;
//            i+=1;
//        }
//        System.out.println(sum+""+i);
//        do{
//            sum-=1;
//            i-=1;
//        }while(i>10);
//    }//continue,break语句与c一致；


   class F {
      static double n=0;//类对象，所有实例共用一个
      double num=1;//实例对象，每个实例各有一个
      public double getresult(double a, int... x)//最多1个。。。x
      {
         int sum = 0;
         double result = 0;
         for (int i = 0; i < x.length; i++) {
            sum = sum + x[i];
         }
         for (int i : x) {
            sum += i;
         }
         result = a * sum;
         return result;
      }
   }

   public class Text1 {
      public static void main(String[] args) {
         F in = new F();
         double result = in.getresult(1.0 / 3, 3, 10, 20, 30);
         System.out.println(result);
         char[] c={'a','b','c'};
         for(int i=0;i<c.length;i++){
            System.out.println(i);
            if (Character.isUpperCase(c[i])){
               c[i]=Character.toLowerCase(c[i]);
            }else if(Character.isLowerCase(c[i]));
            {
               c[i]=Character.toUpperCase(c[i]);
            }
         }
      }
      }








