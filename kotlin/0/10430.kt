fun main() {
	var x = readLine()!!.split(" ").map { it.toInt() }
	println((x[0] + x[1]) % x[2])
	println(((x[0] % x[2]) + (x[1] % x[2])) % x[2])
	println((x[0] * x[1]) % x[2])
	print(((x[0] % x[2]) * (x[1] % x[2])) % x[2])
}