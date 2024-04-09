fun main() {
    var x = readLine()!!.toInt()

    for (i in 1 until x) {
        for (j in 1 until x - i + 1) {
            print(" ")
        }
        for (j in 1 until 2 * i) {
            print("*")
        }
        println()
    }
    
    for (i in x downTo 1) {
        for (j in 1 until x - i + 1) {
            print(" ")
        }
        for (j in 1 until 2 * i) {
            print("*")
        }
        println()
    }
}