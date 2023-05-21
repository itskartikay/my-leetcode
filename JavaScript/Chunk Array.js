/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    var chunk=[]
    var index=0

    while(index<arr.length){
        chunk.push(arr.slice(index, index+size));
        index+=size;
    }

    return chunk
};
