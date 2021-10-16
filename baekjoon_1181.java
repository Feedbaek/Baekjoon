//단어 정렬

//시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
//2 초	256 MB	68059	27996	20832	40.339%
//문제
//알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

//길이가 짧은 것부터
//길이가 같으면 사전 순으로
//입력
//첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다. 주어지는 문자열의 길이는 50을 넘지 않는다.

//출력
//조건에 따라 정렬하여 단어들을 출력한다. 단, 같은 단어가 여러 번 입력된 경우에는 한 번씩만 출력한다.
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.*;

public class baekjoon_1181 {
	public static void stringSort(String[] array, int start, int end) {
		if (start >= end)
			return ;
		int i = start + 1;
		int j = end;
		String pivot = array[start];
		String tmp;

		while (i <= j)
		{
			while (i <= end && (array[i].length() < pivot.length() || (array[i].length() == pivot.length() && array[i].compareTo(pivot) <= 0)))
				i++;
			while (j >= start && (array[j].length() > pivot.length() || (array[j].length() == pivot.length() && array[j].compareTo(pivot) > 0)))
				j--;
			if (i > j)
			{
				array[start] = array[j];
				array[j] = pivot;
			}
			else
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
		stringSort(array, start, j - 1);
		stringSort(array, j + 1, end);
	}
	public static void main(String[] args) throws IOException {
		String[] array;
		String last_string = "INIT";
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		array = new String[n];
		for (int i = 0; i < n; i++)
			array[i] = br.readLine();
		stringSort(array, 0, n - 1);
		for (int i = 0; i < n; i++)
		{
			if (!last_string.equals(array[i]))
			{
				last_string = array[i];
				System.out.println(array[i]);
			}
		}
	}
}
