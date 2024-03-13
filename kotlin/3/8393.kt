fun main() {
	var x = readLine()!!.toInt()
    var f = 0

    for (i: Int in 1..x) {
        f += i
    }

    print(f)
}