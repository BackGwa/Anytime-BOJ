fun main() {
	var x = readLine()!!.split(" ").map { it.toInt() }
    var h = x[0]
    var m = x[1]
    m = m + readLine()!!.toInt()

    h += (m / 60).toInt()
    m = (m % 60).toInt()

    if (h >= 24) {
        h -= 24
    }

    print("${h} ${m}")
}