= メールヘッダーの確認

== メールヘッダーを確認する意味

メールヘッダーを確認することは、メールが「いつ」「誰か」「どこから」来ていることを認識できるようになります。また迷惑メールを受信しないための色々な取り決めを見ることができます。興味があれば是非ともメールヘッダーをご確認ください。


== メールヘッダーの確認方法
基本的にスマートフォン以外では簡単に見ることができます。メールを開いてメニューの詳細などに「メッセージソースの確認」や「メールヘッダーの確認」などで見ることができます。スマートフォンではAndroidの一部のアプリで可能ですが、無理なときはパソコンからWebメールか携帯電話会社提供のサイトで確認してください。

//tsize[20,100]
//table[tbl1][あ]{
サイト名	URL
-----------------
Gmail	https://support.google.com/mail/answer/29436?hl=ja
Outlook	https://support.microsoft.com/ja-jp/office/cd039382-dc6e-4264-ac74-c048563d212c
//}

 * ヤフーメール
 ** メールの送信者情報を詳しく表示する（詳細ヘッダー）
 ** @<href>{https://knowledge.support.yahoo-net.jp/PccMail/s/article/H000007254}
 * NTTドコモ
 ** ヘッダー表示
 ** @<href>{https://mail.smt.docomo.ne.jp/help/help_read_header.html}
 * au
 ** メールヘッダー情報を確認する
 ** @<href>{https://www.au.com/mobile/service/webmail/usage/spam/#anc03}
 * ソフトバンク
 ** ［S!メール（MMS）］Eメールヘッダー情報は確認できますか？
 ** @<href>{https://www.softbank.jp/support/faq/view/10356}

 * iCloud
 ** Webに説明がありません。メールをダブルクリックして表示すると、メールヘッダー表示ができるようになります。
//image[iCloud][メールヘッダー表示][scale=1]{
//}


== SPFレコードの確認
Received-SPF:がSPFレコードになります。

== DKIMレコードの確認
DKIM-Signature:がDKIMレコードになります。

== Authentication Resultレコードの確認
Authentication-Results:がAuthentication Resultレコードになります。

== X-Mailerの確認
X-Mailer:に送信したメールソフトなどが記載されます。

