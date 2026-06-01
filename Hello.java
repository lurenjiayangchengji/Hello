public class Hello
{
    public static void main(String args[])
    {
        System.out.println("HelloWorld!");
        Student stu = new Student();
        stu.speak("We are students.");
    }
}

class Student
{
    public void speak(String s){
        System.out.println(s);
    }
}
