fun main() {
    var x = readLine()!!.split(" ").map { it.toInt() }
    var n = x[0]
    var m = x[1]
    var baguni = IntArray(n)

    for (o in 0 until(m)) {
        var y = readLine()!!.split(" ").map { it.toInt() }
        val z = y[0]
        val t = y[1]
        val s = y[2]
        
        for (i: Int in z..t) {
            baguni[i - 1] = s
        }
    }

    for (i in baguni) {
        print("${i} ")
    }
}