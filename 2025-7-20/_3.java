import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.Scanner;

public class _3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int num = n;
        while( k --  > 0){
//          //从小到大排序
            PriorityQueue<Integer> pq = new PriorityQueue<>();
            //从大到小排序
            PriorityQueue<Integer> pq2 = new PriorityQueue<>(new Comparator<Integer>() {
                @Override
                public int compare(Integer o1, Integer o2) {
                    return o2 - o1;
                }
            });
            while(num!=0){
                pq.offer(num%10);
                num/=10;
            }
            while(n!=0){
                pq2.offer(n%10);
                n/=10;
            }
            int g1 = 0;
            while(!pq.isEmpty()){
                g1=pq.poll()+g1*10;
            }
            int g2 = 0;
            while(!pq2.isEmpty()){
                g2=pq2.poll()+g2*10;
            }
            n = g2-g1;
            num = n ;
        }
        System.out.println(n);
    }
}
