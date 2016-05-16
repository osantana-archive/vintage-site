/* Coloca foco em nome usuario na página de login */
function loginFocus()
{
	document.loginform.usuario.focus();
}

/* Anima Barra de Ferramentas */
function tool_over(elm)
{
	elm.style.borderTop = "1px solid white";
	elm.style.borderLeft = "1px solid white";
	elm.style.borderRight = "1px solid #808080";
	elm.style.borderBottom = "1px solid #808080";
}

function tool_out(elm)
{
	elm.style.borderTop = "1px solid #D0D0D0";
	elm.style.borderLeft = "1px solid #D0D0D0";
	elm.style.borderRight = "1px solid #D0D0D0";
	elm.style.borderBottom = "1px solid #D0D0D0";
}

function dsp(n, status)
{
	if (document.all)
		var all = document.all;
	else
		if (document['getElementsByTagName'])
			var all = document.getElementsByTagName("*");

	if (!all)
		return;
		
	for (var i = 0; i < all.length; i++) {
		var element = all[i];
		if (element.className == 'dsp' + n.toString())
			if (status)
				element.style.display = 'block';
			else
				element.style.display = 'none';
	}
}

