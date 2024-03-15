fun main() {
	var t = readLine()!!.toInt()

    for (i: Int in 1..t) {
        var x = readLine()!!.split(" ").map { it.toInt() }
        println("Case #${i}: ${x[0] + x[1]}")
    }

}