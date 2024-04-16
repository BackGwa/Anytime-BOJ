fun main() {
    var nm = readLine()!!.split(" ").map { it.toInt() }
    var x = Array(nm[0], {Array(nm[1], { 0 })})
    var y = Array(nm[0], {Array(nm[1], { 0 })})
    var index_i = 0 
    var index_j = 0

    for (i in 0..nm[0] - 1) {
        var tmp = readLine()!!.split(" ").map { it.toInt() }
        for (j in 0..nm[1] - 1) {
            x[i][j] = tmp[j]
        }
    }

    for (i in 0..nm[0] - 1) {
        var tmp = readLine()!!.split(" ").map { it.toInt() }
        for (j in 0..nm[1] - 1) {
            y[i][j] = tmp[j]
        }
    }
     
    for (i in x) {
        for (j in i) {
            print("${j + y[index_i][index_j]} ")
            index_j++
        }
        index_j = 0
        index_i++
        println()
    }
}