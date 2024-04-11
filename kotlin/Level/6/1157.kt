fun main() {
    var word = readLine()!!.toUpperCase()
    var map = mutableMapOf<Char, Int>()

    word.forEach {
        var char = it

        if (map.containsKey(char)) {
            map[char] = map[char]!!.plus(1)
        } else {
            map.set(char, 1)
        }
    }

    var max = map.maxBy { it.value }

    if (map.filter { it.value == max!!.value }.count() > 1) {
        print("?")
    } else {
        print(max!!.key)
    }
}