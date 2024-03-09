fun main() {
	var x = readLine()!!.split(" ").map() { it.toInt() }
    var y = x[0]
    var z = x[1]

    if (z < 45) {
        if (y == 0) y = 23
        else        y -= 1
        z -= 45
        z = 60 + z
    } else {
        z -= 45
    }

    print("${y} ${z}")
}