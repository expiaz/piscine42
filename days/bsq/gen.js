const put = c => console.log(c);

let out = "";

const [node, exe, p, h, w, ... toks] = process.argv;

if (process.argv.length < 5) {
	put(`${exe.substring(exe.lastIndexOf('/') + 1)} frequency height width [blank block solved]`);
	return
}

const frequency = parseInt(p, 10) / 100;
const height = parseInt(h, 10);
const width = parseInt(w, 10);

const [blank = '.', block = 'o', solved = 'x'] = toks;

put(height + blank + block + solved);

for (let i = 0; i < height; i++) {
	for (let j = 0; j < width; j++) {
		if (frequency > Math.random())
			out += block;
		else
			out += blank;
	}
	put(out);
	out = "";
}

