fun main() {
	var x = readLine()!!.split(" ").map { it.toDouble() }
	print(x[0] / x[1])
}