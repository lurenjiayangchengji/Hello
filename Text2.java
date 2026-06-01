//类与对象
import java.util.*;
class A{
    int m=5;
    void zengA(int x){
        m=m+x;
    }
    int jianA(int y){
        return m-y;
    }
}
class B extends A{
    int m=3;
    int jianA(int z){
        return super.jianA(z)+m;
    }
}
public class Text2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        A a1=new A(),a2=new A();//创建一个A的实例，然后让指针a1指向他；
        B b=new B();
        A a3,a4;//创建a3，a4两个指针，且只能指向A类的实例；
        a3=b;//a3指向b的实例中的A类；b指向b的实例里的B类；
        a4=a1;
        //a4.m=10'
        a1.zengA(5);a3.zengA(6);
        b.m=4;//相当于m=4
        System.out.println(a1.m);
        System.out.println(a2.m);
        System.out.println(a3.m);//变量根据A类来
        System.out.println(a4.m);//a1,a4指向的是同一实例，所以值一致；
        System.out.println(a3.jianA(1));//jianA和super.jianA是两个，这调用jianA；
    }
}
