fun main() {
	var t = readLine()!!.toInt()

    for (i: Int in 1..t) {
        for (j: Int in 1..i) {
            print("*")
        }
        println()
    }
}