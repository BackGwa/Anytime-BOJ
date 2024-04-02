fun main() {
    var t = readLine()!!.toInt()

    for (o in 1..t) {
        var x = readLine()!!.split(" ")
        var r = x[0].toInt()
        var s = x[1]
        for (i in s) {
            repeat(r) {
                print(i)
            }
        }
        println()
    }
}