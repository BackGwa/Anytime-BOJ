fun main() {
    var x = readLine()!!.split(" ").map { it.toInt() }
    var n = x[0]
    var m = x[1]
    var baguni = IntArray(n) { it + 1 }

    for (o in 1..m) {
        var y = readLine()!!.split(" ").map { it.toInt() }
        var i = y[0]
        var j = y[1]
        
        while (i < j) {
            var tmp = baguni[i - 1]
            baguni[i - 1] = baguni[j - 1]
            baguni[j - 1] = tmp
            i++
            j--
        }
    }

    for (i: Int in baguni) {
        print("${i} ")
    }
}