const { bubbleSort } = require('./build/Release/addon')
console.time('c++ time');
bubbleSort()
console.timeEnd('c++ time')

console.time('JavaScript time');
bubbleSortJs();
console.timeEnd('JavaScripttime');

function bubbleSortJs() {
    const length = 50000;
    const arr = [];
    for (i = length; i > 0; i--) {
        arr.push(i);
    }
    for (i = 0; i < length; i++) {
        for (j = 0; j <= length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                const temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



