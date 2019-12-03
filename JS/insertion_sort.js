const insertionSort = arr => {
	const len = arr.length;
	for(let i = 1; i < len; i++) {
		let key = arr[i];
		let j = i;
		while(j > 0 && arr[j - 1] > key) {
			arr[j] = arr[j - 1];
			j = j - 1;
		}
		arr[j] = key;
	}
	return arr;
}
let array = [33, 53, 12, 4445, -8, 0, 2];
console.log(`Unsorted array: ${array}`);
console.log(`Sorted array: ${insertionSort(array)}`);