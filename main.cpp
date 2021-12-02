#include "cipher.h"

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string message = "Bgc-bfufb tegaedppqna ql aggv zge xof tegaedppfe'l lgjb.\n";
	message += "Xof adpf vflqanfe logjbvn'x hf pdwqna d cgebv qn coqro xof tbdkfe ql mjlx d lpdbb tdex. Xof tbdkfe QL XOF HGLL;\n";
	message += "qx'l kgje vjxk xg fnxfexdqn oqp ge ofe.\n";
	message += "Zgrjl ql d pdxxfe gz vfrqvqna codx xoqnal kgj def ngx agqna xg vg.\n";
	message += "Xof rglx gz dvvqna d zfdxjef qln'x mjlx xof xqpf qx xdwfl xg rgvf qx. Xof rglx dblg qnrbjvfl xof dvvqxqgn gz dn\n";
	message += "ghlxdrbf xg zjxjef fstdnlqgn. Xof xeqrw ql xg tqrw xof zfdxjefl xodx vgn'x zqaox fdro gxofe. - Mgon Rdepdrw.\n";
	message += "(ccc.adpdljxed.rgp/uqfc/nfcl/234346?utkjpvbjr)\n";
	message += "(ccc.hedqnkijgxf.rgp/ijgxfl/djxogel/m/mgon_rdepdrw.oxpb)\n";

	string freqLang = "TEOAISRHNUCMDLGWFPYKJBVQX";

	decryptMessage(message, freqLang);

	return 0;
}

