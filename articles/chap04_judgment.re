= 迷惑メールの判定
迷惑メールの判定をしましょう。

以下の項目に迷惑メールを判定する手順を列挙します。迷惑メールかな？と思ったときに、こちらを確認してみてください。


=={mot} 送信元に心当たりがないメール
@<b>{送信元に心当たりがないメールは迷惑メールです。}

送信元の名前は詐称できるので確認するのは名前ではなく、送信元のメールアドレスまで確実に確認してください。このとき@<b>{メール本文は危険なので絶対に触らないでください}。


送信元のメールアドレスを確認するとき使用文字にも注意してください。「O」と「0」、「l」と「I」と「1」などを意図的に混在させて本物と見せかることもあります。たとえば、みずほ銀行やソフトバンクやを語る迷惑メールでは「MlZUHOBANK」（全体を英大文字にして英小文字ｉを英小文字Ｌにする）や「S0FTBANK」（全体を英文字にして英小文字ｏを数字０にする）というメールアドレスを使用するなどして本物っぽく見せたりするので注意して確認してください。


== 送信先に自分があるメール

「何で俺のメールアドレスを知っているんだろう？」このような話をよく聞きます。メールアドレスが流出やメールアドレスを悪質な業者に売りさばいたと考える方が居ますが、前の章でも書きましたがメールアドレス単体の価値は非常に低いので、そのようなことは基本的にありません。一番考えられる可能性は、メールアドレスを機械的に作り出すことが可能なので、業者が知っているというよりは作り出されたメールアドレスにたまたま一致したと思ってください。


そして迷惑メールを確認するとき、パソコンでは問題ないのですが、@<b>{スマートフォンで迷惑メールを確認するときは注意が必要です。}

@<b>{送信先に自分のメールアドレスがある迷惑メールをスマートフォンで確認すると宛先欄に自分の名前が表示されていることがあります}。名前が表示されていることで過去に利用したサービスではないのかと誤認することがあります。これはスマートフォンの標準的な動作仕様で、宛先にメールアドレスのみのとき、Androidでは「端末情報」、iPhoneでは連絡先アプリで「自分のカード」にメールアドレスが設定されていると、これらの情報からメールアプリの宛先に名前を補完します。このため迷惑メールを送信している側に個人情報が渡っていると錯覚してしまいます。この場合、落ち着いてメールの宛先以外に確認してください。@<b>{「件名」や「本文」にメールアドレス以外の個人情報が記載されていなければ個人情報は渡っていません}。



これらのスマートフォンの動作仕様に関して簡単に確認できます。次にiPhoneで「自分のカード」を「ほげ山ホゲ次郎」に設定したときのiPhone標準メールアプリで表示します。Androidでも「端末情報」を変更するだけで確認できます。

#@# //embed[latex]{
#@# \clearpage
#@# //}

iPhoneで「自分のカード」を「ほげ山ホゲ次郎」に設定します。
//image[hoge1][iPhoneで「自分のカード」を「ほげ山ホゲ次郎」に設定][scale=0.5]{
//}

iPhone標準メールアプリで表示します
//image[hoge2][iPhone標準メールアプリで表示][scale=0.5]{
//}


== 送信先が複数あるメール

2020年現在、このような迷惑メールは非常に珍しいです。昔の迷惑メールではメール送信先を大量に並べて送信することがありましたが、今はこの形式でメールを送信するとほぼ迷惑メールとして判定され届かないので業者もこの形式を利用していないのですが、ときどきこの形式でメール送信することがありますので、@<b>{知り合いからのメール以外では迷惑メールと判定して良い}でしょう。

そして@<b>{正義感を持つことは危険}です。送信先に並べられたメールアドレスはお互いにメールアドレス知ることができます。並べられたメールアドレスは全員が被害者とは限りません、迷惑メール業者が混ざっている可能性もあります。つまり@<b>{迷惑メール業者同士が迷惑メールを通じてメールアドレスを渡している可能性もあるので、並べられたメールアドレスに「メールアドレスが共有されていますよ」と連絡をすることは非常に危険}です。


=={undisclosed} 送信先に自分がないメール
送信先に自分がないメールには2つのパターンがあります。

 1. 宛先にundisclosed-recipients:;と表示される。
 2. 宛先にメールアドレスはあるが自分以外が表示される。

undisclosed-recipients:;と表示されるメールの送信先を設定せずに送信すると表示されます。@<b>{undisclosed-recipients:;と表示されるメールは迷惑メールと判定して良い}です。メールマガジンなどでは送信先を設定するので、このような表示になることがないからです。このようなメール送信方法はメールソフトでは行うことができないので業者がオペレーションミスをしたと推測できます。


次に自分以外の宛先があるときは、メーリングリストから送信されている可能性がありますが、大前提として@<b>{送信元に心当たりがないメールは迷惑メールなので迷惑メールと判定して良い}です。そしてメーリングリストでは、解除するための方法やリンクがメールに記載されていることがありますが、とても怪しい業者であるときはその方法を実行してはいけません。@<b>{メーリングリスト解除のために指定されたメールアドレスにメールを送信やリンクをクリックすることで、新たな迷惑メールリストとして登録されてしまいます}。


== 日本語が変なメール
@<b>{日本語が変なメールは迷惑メールと判定して良いです。}

//table[history][日本が変な例]{
例
------------------------------------
専用案内
こんにちはメンバー
お支払い情報を更新する
この度は誠に、おめでとうございます
心から感謝いたしております
ご本人が確認をお願いします
アカウントを確認するために次のリンクを提供しました
不要配信希望
アカウントスペシャリスト
//}

迷惑メールを送信する業者は送信文面を確認せずに機械的に送信しています。そのため遠い昔に機械翻訳した「日本語が変」な状態のままで、メール内容を直すこともできない迷惑メールは日本国外の業者に多いです。最近は文面もまともになったと言われていますが、日本語のホームページをそのままコピペしているケースが多く、送信元の名前などに@<b>{日本語漢字にそっくりな中国語を使用}していたりと、これらも落ち着いて迷惑メールを見ると見破れることが多いです。とにかく落ち着いて見ることをオススメします。

=== 文字化けメール
@<b>{文字化けメールは迷惑メールと判定して良いです。}

メールはいろいろな言語を扱えるのですが、日本語が変なメールは文字化けすることがあります。
元々のメール文面が日本語以外で書かれていたものを、日本語に翻訳してメールを作ると文字化けが発生することがあるからです。メール作成時にエンコードと呼ばれる文字コードを指定する識別子が必要で、エンコードによっては1つの言語しか扱えない物があり、例えばAという言語でメールを作成している途中に、Bという言語に翻訳して作成してしまうと、Bという言語はAという言語で表示しようとして文字化けが発生してしまうのです。


== 不審なURLが入っているメール
@<b>{不審なURLが入っているメールは迷惑メールとして判定して良いです、そしてURLを絶対にクリックしてはいけません。}


迷惑メールを送信している相手に対してユニークなURLを発行しており、そのURLをクリックさせることで送信先のメールアドレスが有効であること確認しています。@<hd>{undisclosed}の項目でも記載しましたが、@<b>{URLをクリックさせることで新たな迷惑メールリストとして登録}されます。

昔は、URLの前にスペースや言葉を入れて、URLを全部見えないようにしてURLをクリックさせるようにしてましたが、今は、URLに関しては折返し表示を行うようになっているので、落ち着いてメールの文面を見てください。

=== 短縮URLが入っているメール
@<b>{短縮URLが入っているメールは迷惑メールとして判定して良いです。そしてURLを絶対にクリックしてはいけません。}

短縮URLは長いURLを短くして文字数削減に使用するサービスであるが、本来のURLを隠すために使用しているため悪用目的がほとんどで、フィッシング詐欺やアフィリエイトURL隠蔽に使用されています。アフィリエイトURL隠蔽の目的で使用された短縮URLをクリックしても、メールアドレスの有効確認されることはなく大きな被害はないですが、普段から不審なURLである認識をすることで危機意識を高めることをオススメします。

下ににクリックに注意した方が良い短縮URLを列挙します。

//table[shortURL][クリック注意短縮URL]{
短縮URL	用途
------------------------------------
tinyurl.com	いろいろ
j.mp	いろいろ
bit.ly	いろいろ
fb.me	いろいろ
t.co	いろいろ
amzn.to	アフィリエイト
r10.to	アフィリエイト
//}


== 不審な添付ファイルがあるメール
@<b>{不審な添付ファイルは危険なコンピューターウイルスなので絶対に開かないでください。そして、知り合いからのメール以外では迷惑メールと判定して良いです。}

コンピューターウイルスに感染すると、個人情報が搾取されるだけではなく、コンピューターに記録してる全ての情報が搾取され、それを元に新たな被害者を作ることになります。
もし、知り合いからのウイルスメールだったときは、メールで連絡を取ることは危険です。できるだけ感染したコンピューターを使用しない別の方法で連絡してください。そして、ご自分にコンピューターウイルスの対応ができないのであれば、2次被害をさけるために対処方法の相談に乗らないでください。

== 銀行やクレジットカードや携帯電話会社からのメール
@<b>{まずは、ブラウザを使って銀行やクレジットカードや携帯電話会社の名前を検索してください、表示されたURLと送信元のメールアドレスが異なっていたら迷惑メールとして判定して良いです。}@<hd>{mot}の項目でも記載しましたが、似た文字種を使用して本物らしく見せることもあるので注意して見てください。


銀行やクレジットカードや携帯電話会社から「アカウントを再確認する必要があります」というメールがくることはないです。業者はログインするための情報を搾取するのが目的なので、このようなログインさせようとする文面になります。


== アカウントの更新＆パスワードの更新依頼メール

== クレジットカードの更新依頼メール
== 出会い系メール
== 懸賞メール

== 懐かしい友人からのメール

== 有名芸能人からのメール


== 英語だけのメール

== 広告宣伝メール
広告宣伝メールではメール受信者の事前承諾が必ず必要です。このルールを守らない広告宣伝メールは、次に示す表示義務を守っていても迷惑メールになります。

特定電子メール法@<fn>{tokutei}では、広告宣伝メールを送信するに当たっては以下の表示義務が存在します。

 * 送信者氏名または名称の表示をしている。
 * 受信拒否ができる方法を表示している。
 ** URLのときは受信拒否が明瞭かつ平易に行えること。
 * 送信者と特定商取引法上の販売業者が異なるときは販売業者氏名または名称の表示している。
 * 送信者の住所を表示している。
 * 問い合わせなどを受け付けることができるメールアドレスまたは電話番号を明記している。
 ** URLのときは受信拒否が明瞭かつ表示が行えること。

迷惑メール相談センターサイトの1-2 特定電子メール法@<fn>{dekyo}に、「送信者には表示義務があります」の項目に画像で例があるので参考にしてください。

これを違反した広告宣伝メールは、迷惑メール相談センター@<fn>{meiwaku}に遠慮なく報告してください。

なお、ホームページにメールアドレスを公開しているときは注意が必要です。ホームページなどに掲載されているメールアドレスに対して、事前承諾を行わず広告宣伝メールを送信しても特定電子メール法違反とはなりません。このとき、公開しているメールアドレスと一緒に「特定電子メールの送信送信拒否します」と表記すると事前承諾が必要になります。





//footnote[tokutei][特定電子メールの送信の適正化等に関する法律 @<href>{https://www.caa.go.jp/policies/policy/consumer_transaction/specifed_email}]

//footnote[dekyo][1-2 特定電子メール法 @<href>{https://www.dekyo.or.jp/soudan/contents/taisaku/1-2.html}]


//footnote[meiwaku][情報提供のお願い | 迷惑メール相談センター @<href>{https://www.dekyo.or.jp/soudan/contents/ihan/index.html}]