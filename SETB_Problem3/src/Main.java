import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		ArrayList<String> list = new ArrayList<>();
		String[] temp = {"this", "is", "lots", "of", "fun", "for", "every", "Java", "programmer"};
		for(String a:temp) {
			list.add(a);
		}
		System.out.println(markLength4(list).toString());
	}
	public static ArrayList<String> markLength4(ArrayList<String> input){
		ArrayList<String> out = new ArrayList<>();
		
		for(int i = 0;i<input.size();i++) {
			out.add(input.get(i));
			
			if(input.get(i).length() == 4) {
				out.add(out.indexOf(input.get(i)),"****");
			}
				
		}
		return out;
	}

}
