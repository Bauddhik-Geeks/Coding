// The BufferedReader class of Java is used to read the stream 
// of characters from the specified source (character-input stream). 
// The constructor of this class accepts an InputStream object as
//  a parameter



import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Buffered_reader {
    public static void main(String[] args) throws IOException {
        
        //your code goes here
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int a = Integer.parseInt(reader.readLine());
        int b = Integer.parseInt(reader.readLine());
        System.out.println(a + " " + b);
    }
}

