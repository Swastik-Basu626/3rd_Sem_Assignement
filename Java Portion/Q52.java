import java.io.*;

public class Q52 {
    public static void main(String[] args) {

        // Check if two file names are passed
        if (args.length != 2) {
            System.out.println("Usage: java CopyFile <source-file> <destination-file>");
            return;
        }

        String sourceFile = args[0];
        String destFile = args[1];

        try (
            FileInputStream fis = new FileInputStream(sourceFile);
            FileOutputStream fos = new FileOutputStream(destFile);
        ) {
            int byteData;
            while ((byteData = fis.read()) != -1) {
                fos.write(byteData);
            }

            System.out.println("File copied successfully from \"" 
                               + sourceFile + "\" to \"" + destFile + "\".");

        } catch (FileNotFoundException e) {
            System.out.println("Error: File not found → " + e.getMessage());
        } catch (IOException e) {
            System.out.println("Error while copying file: " + e.getMessage());
        }
    }
}
