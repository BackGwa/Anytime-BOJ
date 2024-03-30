fun main() {
	var t = readLine()!!.toInt()

    for (i: Int in 0..t - 1) {
        var x = readLine()!!.split(" ").map { it.toInt() }
        println(x[0] + x[1])
    }
}