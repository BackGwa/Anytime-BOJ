fun main() {
	var x = readLine()!!.toInt()

    for (i: Int in 1..x) {
        for (j: Int in 1..x - i) {
            print(" ")
        }
        for (j: Int in 1..i) {
            print("*")
        }
        println()
    }

}