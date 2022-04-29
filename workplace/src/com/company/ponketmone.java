package com.company;

public class oddAndEven {
    public static int[] sender(){
        int num[] = {1,2,3,4,5};
        return num;
    }
    public static int  parameter1(){
        int i = 626331;
        return i;
    }

    public static void main(String[] args) {
        int num = parameter1();
        String answer = "";
        if( num == 0){
            answer = "Even";
        }else{
            if( num % 2 ==1){
                answer = "Odd";
            }else{
                answer = "Even";
            }
        }


        System.out.printf("returnVal ::"+answer);
    }
}
