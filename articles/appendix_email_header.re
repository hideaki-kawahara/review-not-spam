= メールヘッダーの確認

== メールヘッダーを確認する意味

メールヘッダーを確認することは、メールが「いつ」「誰か」「どこから」来ていることを認識できるようになります。また迷惑メールを受信しないための色々な取り決めを見ることができます。興味があれば是非ともメールヘッダーをご確認ください。


== メールヘッダーの確認方法
基本的にスマートフォン以外では簡単に見ることができます。メールを開いてメニューの詳細などに「メッセージソースの確認」や「メールヘッダーの確認」などで見ることができます。スマートフォンではAndroidの一部のアプリで可能ですが、無理なときはパソコンからWebメールか携帯電話会社提供のサイトで確認してください。

//table[tbl1][メールヘッダーの確認方法]{
サイト名	URL
-----------------
Gmail	ヘッダー全体からメールの経路を確認する@<fn>{Gmail}
Outlook	Outlookでインターネットメッセージヘッダーを表示する@<fn>{Outlook}
ヤフーメール	メールの送信者情報を詳しく表示する（詳細ヘッダー）@<fn>{yahoo}
NTTドコモ	ヘッダ表示@<fn>{docomo}
au	メールヘッダ情報を確認する@<fn>{au}
ソフトバンク	［S!メール（MMS）］Eメールヘッダ情報は確認できますか？@<fn>{softbank}
//}

 * iCloud
 ** Webに説明がないので説明を記載、メールをダブルクリックして表示すると、メールヘッダー表示ができるようになります。
//image[iCloud][iCloudのメールヘッダー表示][scale=1]{
//}

//footnote[Gmail][https://support.google.com/mail/answer/29436]
//footnote[Outlook][https://support.microsoft.com/ja-jp/office/cd039382-dc6e-4264-ac74-c048563d212c]
//footnote[yahoo][https://knowledge.support.yahoo-net.jp/PccMail/s/article/H000007254]
//footnote[docomo][https://mail.smt.docomo.ne.jp/help/help_read_header.html]
//footnote[au][https://www.au.com/mobile/service/webmail/usage/spam/#anc03]
//footnote[softbank][https://www.softbank.jp/support/faq/view/10356]

== SPFレコードの確認
Received-SPF:がSPFレコードになります。


Sender Policy Frameworkと呼ばれるものです。あらかじめ送信元ドメインからメールを送信して良いIPアドレスを記載し、そして受信するメールサーバーではメールの送信元IPアドレスと、SPFレコードのIPアドレスを照合して一致しなかったら送信元の詐称が行われたとして受信拒否が可能となります。

受信メールサーバーは、SPFレコードとAuthentication Resultレコードに認証結果を記載します。結果がPassになっていれば迷惑メールではないです。

//table[spf][SPFレコードの結果]{
結果	意味
-----------------
Pass	認証処理に成功した
Fail	認証処理に失敗した
SoftFail	~の条件にマッチした（弱い認証処理に失敗）
Neutral	?の条件にマッチした（ほとんど使われない）
//}

== DKIMレコードの確認
DKIM-Signature:がDKIMレコードになります。

DomainKeys Identified Mailと呼ばれるもので、あらかじめ送信元ドメインに公開鍵を記載し、そして送信側は送信メールに秘密鍵を使用し署名を付与し、受信するメールサバーでは送信元ドメインに公開鍵を取得して受信したメールの署名を検証して一致しなかったら送信元の詐称が行われたとして受信拒否が可能となります。

受信メールサーバーは、Authentication Resultレコードに認証結果を記載します。結果がPassになっていれば迷惑メールではないです。


== Authentication Resultレコードの確認
Authentication-Results:がAuthentication Resultレコードで、SPF認証、DKIM認証、DMARC認証の結果が記載されます。

//table[dkim][DKIMレコードの結果]{
結果	意味
-----------------
Pass	メールは署名されて認証処理に成功した
hardfail	メールは署名されたが認証処理が失敗した
policy	 メールは署名されたがポリシーによって受け入れない
//}

DMARC認証はDomain-based Message Authentication、Reporting and Conformanceと呼ばれもので、SPF認証やDKIM認証が失敗したときの受信するかどうかはメール受信側に委ねられていました。ドメインを詐称された側はDMARCレコードに設定したDMARCポリシーとして宣言することでメール受信側に受信ルールを依頼できます。


//table[dmarc][DMARCレコードの結果]{
結果	意味
-----------------
pass	SPF認証とDKIM認証は通過したので通す
quarantine	認証エラーなのでメールサーバーで隔離する
reject	 認証エラーなので受信拒否する
//}

