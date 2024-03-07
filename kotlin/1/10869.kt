fun main() {
	var x = readLine()!!.split(" ").map { it.toInt() }
	println(x[0] + x[1])
	println(x[0] - x[1])
	println(x[0] * x[1])
	println(x[0] / x[1])
	print(x[0] % x[1])
}