public class label{
	public static void main(String[] args){
		a: for(int i = 2 ;   i < 7 ; i++){
			if(i == 3){
				continue;
			}
			if(i == 5){
				break a;
			}
			System.out.println(i);
		}
	}
} 