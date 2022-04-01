package com.company;


public class Main {
    public static int[] sender(){
        int num[] = {1,2,3,4,5};
        return num;
    }
    public static int  parameter1(){
        int i = 626331;
        return i;
    }

    public static int evenCase(int num){
        num = num / 2;
        return num;
    }
    public static int oddCase(int num){
        num = (num * 3 ) +1;
        return num;
    }


    public static void main(String[] args) {
        int num = parameter1();

        int returnVal = -1;
        for(int i = 1 ; i<= 500 ; i++){
            if( num %2 ==1){
                num = oddCase(num);
            }else{
                num = evenCase(num);
            }
            if( num ==1){
                returnVal = i;
                i = 503;
            }
            System.out.println(" Now Num :::"+num );
        }


        System.out.printf("returnVal ::"+returnVal);
    }
}
