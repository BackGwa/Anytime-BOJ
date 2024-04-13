fun main() {
    var x = arrayOf("c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=")
    var s = readLine()!!

    for (i: String in x) {
        s = s.replace(i, "_")
    }

    print(s.length)
}