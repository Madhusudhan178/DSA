public class function {
    public static int[] fun(){
        int arr[]={1,2,3,4,5};
        return arr;
    }
    public static void main(String[] args) {
        int array[] =fun();
        for(int i=0;i<array.length;i++){
            System.out.print(" "+array[i]);
        }
    }
}
