fun main() {
	var x = readLine()!!.split(" ").map { it.toInt() }
    
    if (x[0] == x[1] && x[0] == x[2]) {
        print(10000 + (x[0] * 1000))
    } else if (x[0] == x[1] || x[0] == x[2]) {
        print(1000 + (x[0] * 100))
    } else if (x[1] == x[2]) {
        print(1000 + (x[1] * 100))
    } else {
        print(x.max() * 100)
    }
}