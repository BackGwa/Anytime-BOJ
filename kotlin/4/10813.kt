fun main() {
    var x = readLine()!!.split(" ").map { it.toInt() }
    var n = x[0]
    var m = x[1]
    var arr = IntArray(n)

    for (i: Int in 1..n) {
        arr[i - 1] = i
    }

    for (o in 1..m) {
        var y = readLine()!!.split(" ").map { it.toInt() }
        var i = y[0]
        var j = y[1]
        var tmp = arr[i - 1]
        arr[i - 1] = arr[j - 1]
        arr[j - 1] = tmp
    }

    for (i: Int in 0..n - 1) {
        print("${arr[i]} ")
    }
}