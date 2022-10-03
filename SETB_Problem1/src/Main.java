import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		int[] arr1 = {1,2,3,4};
		int[] arr2 = {3,4,5,6};
		ArrayList<Integer> arr3 = new ArrayList<>();
		for(int i : arr1) {
			for(int j: arr2) {
				if(i == j) {
					int sum = i+j;
					arr3.add(sum);
				}
			}
		}
		System.out.println(arr3.toString());
	}

}
