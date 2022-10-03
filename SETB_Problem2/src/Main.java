
public class Main {

	public static void main(String[] args) {
		int sum = 0;
		int[][] nested_arr = {
				{1,2,3,4},
				{5,6,7,8},
				{9,10,11,12},
				{13,14,15,16}
		};
		for(int i = 0;i<nested_arr.length;i++) {
			for(int j = 0;j<nested_arr.length;j++) {
				if(i == j) {
					sum += nested_arr[i][j];
					sum+= nested_arr[i][3-i];
				}
			}
		}
		System.out.println(sum);
	}

}
