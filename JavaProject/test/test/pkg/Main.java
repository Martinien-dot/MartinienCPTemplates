package test.test.pkg;
import java.util.*;
import java.io.*;


public class Main {
	void afficherRepertoire() {
		System.out.println("Veuiller saisire le chemin d'acces à un repertoire:");
		Scanner sc = new Scanner(System.in);
		String chemin = sc.nextLine();
		File rep = new File(chemin);
		if(rep.isDirectory()) {
			File tab[] = rep.listFiles();
			System.out.println("Votre repertoire contient: " + tab.length+ " élément(s)");
			for(File x:tab) {
				System.out.println(x.getName());
			}
		}
		else {
			System.out.println("Le chemin "+chemin+" n'est pas un repertoire!!");
		}
		sc.close();
	}
	void DirectoryFile() {
		ArrayList<File> fichiers = new ArrayList<File>();
		ArrayList<File> document = new ArrayList<File>();
		System.out.println("Saisir un repertoire:");
		Scanner sc = new Scanner(System.in);
		String chemin = sc.nextLine();
		File rep = new File(chemin);
		if(rep.isDirectory()) {
			File tab[] = rep.listFiles();
			for(File x:tab) {
				if(x.isFile()) {
					fichiers.add(x);
				}
				else if(x.isDirectory()) {
					document.add(x);
				}
			}
			System.out.println("Votre repertoire contient: " + tab.length + " élément(s)");
			System.out.println("--->"+ fichiers.size() + " fichiers:");
			for(File x:fichiers) {
				System.out.println(x.getName());
			}
			System.out.println("Les dossiers dans votre repertoire sont:");
			for(File x:document) {
				System.out.println(x.getName());
			}
		}
		else {
			System.out.println("Le chemin "+chemin+" n'est pas un repertoire!!");
		}
		sc.close();
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		for(int i=0; i<n; i++){
			System.out.println(i);
		}
		scan.close();
	}


}