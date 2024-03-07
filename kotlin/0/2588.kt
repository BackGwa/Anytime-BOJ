fun main() {
	var x = readLine()!!.toInt()
	var y = readLine()!!.toInt()
	println(x * (y % 10))
	println(x * ((y % 100) / 10))
	println(x * (y / 100))
	print(x * y)
}