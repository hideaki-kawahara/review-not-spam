= 迷惑メールフィルターを使う
@<b>{この項目は筆者の個人的な見解です。}


@<b>{迷惑メールフィルターは知らず知らず利用しています。}

携帯電話会社では迷惑メールフィルターが導入されています。GmailやiCloudやOutlookやヤフーメールなどの大手フリーメールサービスでも迷惑メールフィルターが導入されています。現在は標準で有効になっていますので知らず知らずに迷惑メールフィルターを使っている方も多いです。ただ、迷惑メールが多いのは携帯電話会社のになるため、通常使われている迷惑メールフィルターだけでは足りないかもしれません。その場合は携帯電話会社が提供している迷惑メール対策の利用を検討してください。

== 迷惑メールフィルターがない弱小プロバイダー
そこで気になるのは、大手以外です。弱小プロバイダーのサービスでは、メールボックスの容量が非常に少ないなどメールサービス自体が2世代前ぐらい古い感じです。このような@<b>{サービスでは迷惑メールフィルターが搭載されていない}ことがありあます。また搭載されていても迷惑メールフィルターの能力が低いことも多いです。このようなメールサービスでは迷惑メールフィルターを使っても迷惑メールを防ぐことは難しいです。サービス向上を待っていても望めないので@<b>{プロバイダーを変えるのが最善の策}です。プロバイダーを変えるのが難しいときは、@<b>{そのプロバイダではメールサービスを利用しないのが一番}です。

弱小プロバイダーがメールサービスの向上に注力しないのは、この辺りも1つの要因とも言われてます。迷惑メールはメールサービス側にとっても、ユーザー体験が悪くなり利用が減ってしまうし、何よりも迷惑メールを大量に受信するためサーバーの負荷が増大して、更にサーバーの容量を食ってしまうなどしてコストだけが増大してしまうだけでした。最近だと@<b>{弱小プロバイダーもG SuiteやOutlookを使う}などメールサービスの向上をしているところもあります。


== 迷惑メールフィルターの設定

==={nari} なりすまし規制（全携帯電話会社対応）
なりすまし規制とは、業者が送信元メールアドレを偽り携帯電話会社のメールアドレスとして送信してくるのを防ぐ機能です。通常のメールサーバーは送信元を偽っても、本当のメールアドレスを付加（エンベロープフロムと呼びます）して送信します。@<b>{なりすまし規制は、偽ったメールアドレスと本当のメールアドレスを比較して、異なったら迷惑メールとして受信しない}ようにします。また、携帯電話会社内で閉じたメールでは、メールアドレスの存在チェックも行っており、存在しないメールアドレスも「なりすまし規制」として制限されます。

今の時代、使用しているメールアドレスが、@<b>{契約しているメールサーバー以外から送信することはないので、なりすまし規制の設定}にすることをオススメします。

ドコモ：かんたん設定 @<href>{https://www.nttdocomo.co.jp/info/spam_mail/easy_setup/}@<br>{}
au：なりすまし規制 @<href>{https://www.au.com/support/service/mobile/trouble/mail/email/filter/detail/forgery/}@<br>{}
ソフトバンク、ワイモバイル：なりすましメール拒否設定 @<href>{https://www.softbank.jp/mobile/support/mail/antispam/mms/antispoof/}@<br>{}
UQモバイル：メールサービス @<href>{https://www.uqwimax.jp/mobile/support/guide/mail/}@<br>{}

=== 携帯/PHS以外のメール拒否設定（全携帯電話会社対応）
迷惑メールの多くは、パソコンから送信されています。そのため手っ取り早く迷惑メールを受信したくないと思ったら、@<hd>{nari}と合わせて携帯/PHS以外のメール拒否設定をすることをオススメします。

@<b>{この2つの設定だけで迷惑メールはかなり減ります。}

ドコモ：携帯・PHS／パソコンなどのメール設定 @<href>{https://www.nttdocomo.co.jp/info/spam_mail/spmode/mail_setup/index.html}@<br>{}
au：事業者毎に受信を設定 @<href>{https://www.au.com/support/service/mobile/trouble/mail/email/filter/detail/mailsetting/}@<br>{}
ソフトバンク：ケータイ・PHSからのメールのみ許可 @<href>{https://www.softbank.jp/mobile/support/mail/antispam/email-i/handset-phs/}@<br>{}

==={HTML} HTMLメール規制
auにだけある機能です。HTMLメールは画像付きのメールみたいなものです。文字情報以外も表示されるので広告宣伝メールに最適ですが迷惑メールでは非常に多いです。HTMLメールにすることでURLを隠すことができるので、フィッシング詐欺によく使われます。また、HTMLメールは画像を外部サイトから表示するので、業者がメール受信者ごとにユニークなURLにしてメール受信者の存在確認をしています。

このことから、@<b>{広告宣伝メールを受信する予定がないのであればHTMLメールは受信しない設定がオススメです。}

なお、HTMLメールが良く行う0×0画像によるWebビーコンは、スマートフォンのメールソフトやWebメールでは機能しないし、Cookieを無効にしているので、メール受信者の存在確認以上の情報搾取はできません。

=== URL規制
@<b>{携帯電話会社で、少々機能が異なります。}

auやソフトバンクでは「URLリンク規制」でメールにURLが含まれていたら（HTMLメールも対象）受信しない機能です。知り合いでURLのやり取りをしていると受信しなくなるので注意が必要です。
ドコモでは「特定URL付メール拒否設定」でメールに「出会い系」「アダルト系」「違法行為を指南しているサイト」へのURLが含まれていたら受信しない機能です。これはネットスター株式会社が行っているフィルタリングになり精度は高いのですが、最新情報には若干のタイムラグがあります。

これらの設定は@<b>{「子供」と「シルバー世代」にするのが良い}です。大人はURLのやり取りをするかどうかを考えて、URLのやり取りをしないのなら設定してください。


=== ウイルスメール規制
@<b>{携帯電話会社で、少々機能が異なります。}

auでは「ウイルスメール規制」で受信するメールの添付ファイルに株式会社シマンテックのウイルスパターン情報を照合させて一致したら受信しなくなる機能です。受信のときだけ機能するためウイルスメール送信を防止することはできません。

ドコモでは「詐欺／ウイルスメール拒否設定」で受信するメールの添付ファイルにウイルスが含まれていたらウイルスを除去してメールを受信する機能です。またメール送信時もウイルスを除去して送信します。また「特定URL付メール拒否設定」と機能がかぶるのですが、詐欺メールも送受信できなくなります。

ウイルスメールは減る傾向がありますが、これらの設定は@<b>{設定するのが良い}です。

詐欺／ウイルスメール拒否設定 @<href>{https://www.nttdocomo.co.jp/info/spam_mail/rejection_setup/}

=== 大量送信者からのメール拒否設定
@<b>{設定しておいてください。}

ドコモからドコモに1日に500通以上送信されたらメールを拒否する設定です。ときどきバイトと称して携帯電話に契約させて迷惑メールを送信する方が居るので、この設定は有効にしておいてください。@<b>{短文迷惑メールにも効果があるのでドコモの方は必須の設定}です。

大量送信者からのメール拒否設定 @<href>{https://www.nttdocomo.co.jp/info/spam_mail/mail_limit/}

=== シークレットコード登録
ドコモだけにある機能です。この迷惑メールフィルターを使用している人は居ないとは思いますが、機能としてあるので紹介しておきます。ドコモの携帯電話でiモード契約をしていると「電話番号@docomo.ne.jp」が設定できますが（スマートフォン契約では電話番号をメールアドレスに設定はできません）、このメールのときだけ特別なルールが設定できます。

シークレットコード登録という4桁の数字を設定することで、「電話番号XXXX@docomo.ne.jp」というメールアドレスにすることができ、電話番号メールアドレスによる迷惑メールをへらすことができます。しかし、この形式のメールアドレスでも迷惑メールが届くことがありますので、@<b>{迷惑メールを受信することが趣味という人にしか勧めません}。


ドコモ：シークレットコード登録@<br>{}
@<href>{https://www.nttdocomo.co.jp/info/spam_mail/secret_code/}


== 間違ってフィルタリングされたら？

@<b>{届かなかったメールは、どんなに頑張っても同じものは届きません。}@<br>{}
@<b>{メールサービスに文句を言っても無駄です。素直に別の方法で連絡することを推奨します。}

迷惑メールフォルダーに振り分けられたなら、迷惑メールじゃないと報告してください。報告しても再度迷惑メールフォルダーに振り分けられるかもしれませんが、そのたびに報告してください。今の時代はメール以外の連絡方法があるので、メールを使用することをやめて他の手段で連絡をすることを検討してください。

== おすすめの設定

//table[docomo][ドコモの設定例]{
設定名	設定内容
-------------------------------------------------------------
ドコモ
かんたん設定	パソコンから受信しないなら「受信拒否強」
特定URL付メール拒否設定	設定する
詐欺／ウイルスメール拒否設定	設定する
大量送信者からのメール拒否設定	設定する。
//}

//table[au][auの設定例]{
設定名	設定内容
-------------------------------------------------------------
迷惑メールおまかせ規制	ON
なりすまし規制	高
HTMLメール規制	規制する
URLリンク規制	TPOに合わせる
ウイルスメール規制	規制する
携帯/PHS以外のメール	パソコンから受信しないなら「受け取らない」
//}

//table[softbank][ソフトバンクの設定例]{
設定名	設定内容
-------------------------------------------------------------
なりすましメール拒否設定	受け取らない
未承諾広告メール拒否設定	受け取らない
URLリンク付きメール拒否設定	受け取らない
海外からの電話番号メール拒否設定	受け取らない
//}
