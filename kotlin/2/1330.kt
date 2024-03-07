fun main() {
	var x = readLine()!!.split(" ").map { it.toInt() }
	
    if (x[0] == x[1]) print("==")
    else if (x[0] > x[1]) print(">")
    else print("<")
}