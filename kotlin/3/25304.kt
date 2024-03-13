fun main() {
	var total = readLine()!!.toInt()
    var amount = readLine()!!.toInt()
    var result = 0

    for (i: Int in 1..amount) {
        var x = readLine()!!.split(" ").map { it.toInt() }
        result += x[0] * x[1]
    }

    if (total == result)
        print("Yes")
    else
        print("No")
}