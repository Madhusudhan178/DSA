public class Palindorme {

    public static void main(String[] args) {
       boolean b=true;

        String s="abcabc";
        int n=s.length();
        for(int i=0;i<n/2;i++){
            if(s.charAt(i)!=s.charAt(n-i-1)){//6-0-1
                b=false;
                break;
            }
            // for(int j=(n-1);j<n/2;j--){
            //     if(s.charAt(i)!=s.charAt(j)){
            //         b=false;
                    // break;
            //     }
            // }

        }
        if(b){
            System.out.println("it is palindrome");
        }
        else{
            System.out.println("not a palindrome");
        }

    }
}
