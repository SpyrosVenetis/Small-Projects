let form = document.getElementById('myForm');
let outputDiv = document.getElementById('output');
form.addEventListener('submit',function(inp1){
	inp1.preventDefault();
	let name=document.getElementById('name').value;
	let email=document.getElementById('email').value;
	let age=document.getElementById('age').value;
	document.getElementById('output').innerHTML=`
	<p>Όνομα: ${name}</p>
	<p>Ηλεκτρονική Διεύθυνση: ${email}</p>
	<p>Ηλικία: ${age}</p>
	`;
});