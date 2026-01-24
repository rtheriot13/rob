import java.util.ArrayList;
import java.util.Arrays;

public class Main{

    public static void main(String[] args) {

        String[] beerTypeArray = {"ipa", "lager", "stout", "porter"};

        ArrayList<String> beerTypeArrayList =
                new ArrayList<>(Arrays.asList("ipa", "lager", "stout", "porter"));

        //add element
        // unable to add element for array
        beerTypeArrayList.add("ale");
        System.out.println(beerTypeArrayList.get(4));

        //remove element
        //unable to remove element for array
        beerTypeArrayList.remove("porter");
        System.out.println(beerTypeArrayList.get(3));

    }
}