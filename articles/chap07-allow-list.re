={allow} 受信許可／受信拒否

メールアドレスを消す、メールアドレスを変更することができないとき、フィルターもあまり効果がないとき、受信許可リスト方式はどうでしょうか？

====[column] 受信許可リストという表現について
Black Lives Matter（ブラック・ライブズ・マター）@<href>{https://www3.nhk.or.jp/news/special/presidential-election_2020/demonstration/demonstration_01.html}を合い言葉に黒人差別への抗議が広がっていく中で、コンピューターの世界で使用されている言葉の言い換えが起こりました。
今まで、迷惑メールの対応方法で使用されていた「ホワイトリスト／ブラックリスト」も対象となり、今後は使用されなくなる可能性が非常に高いです。
どのような名称にするか決まっていないところが多いですが、本書では「受信許可リスト／受信拒否リスト」という表記に統一します。
====[/column]

== 受信拒否リスト方式
受信拒否リスト方式は、あまり効果がない方法です。受信拒否リストに登録してしばらく迷惑メールがこなくなっても、迷惑メールは送信元を変更してくるので、再び迷惑メールが届いてしまいます。完全にいたちごっこになり、最終的には受信拒否リストの登録件数を超えてしまいます。

この場合、効果的な方法は受信拒否リストに「ドメインだけで登録」することです。たえばGmailからの迷惑メールが多いときは@gmail.comを受信拒否リストに入れてしまえば、業者はGmailのメールアドレスをたくさん作成して迷惑メールを送信しても、1つの受信拒否リストで対処できます。他にも特定の国だけを受信拒否リストに入れるなどするのも効果的です。

@<b>{受信拒否リストでは「ドメインだけで登録」するというのを活用すると、迷惑メールの数が一気に減ります}。

== 受信許可リスト方式
それでは、受信許可リスト方式はどうでしょうか？受信許可リスト方式はとても効果があります。@<b>{受信したいメールアドレスだけを受信すれば良くなるので迷惑メールが一切来なくなります}。ただ、受信許可リスト方式では、常に受信許可リストを更新しなければなりません。仕事関連ではないですが、プライベートでは知り合いがメールアドレスを変更したという話はよく聞くので、更新を忘れたとき友好関係にヒビが入る可能性もあることを心の片隅においてください。

なお、受信許可リスト方式ならば、メールアドレスを複雑なのにしなくても良いので、知り合い専用にするのに最適です。

@<b>{なお、一部のメールサービスには、受信許可リスト方式が存在しないです。}
受信許可リスト方式がない代わりにフィルターを使用する方法もありますが、フィルターを使うのは上級者向けで上手く設定できないことが多く、迷惑メールを受信しまうことには変わりないので、@<b>{受信許可リスト方式をどうしても使用したいときは、そのメールサービスの利用をやめることをオススメします}。

受信許可リスト方式が存在しないメールサービスの一例です。

 * Gmail
 * iCloud
 * ヤフーメール

=== アドレス帳受信設定

携帯電話会社では、受信許可リストの他にアドレス帳受信という機能があります。あらかじめ設定したアドレス帳にあるメールアドレスしか受信しないため、受信するメールアドレスが決まっているなら非常に楽な機能です。携帯電話会社のサーバーにアドレス帳をアップロードして設定するだけで、この機能が使用できるため業務用携帯や子供やシニア向けには最適なサービスです。



== リスト上限について

//table[history][受信許可リスト上限／受信拒否リスト上限]{
サービス	受信許可	受信拒否
------------------------------------
Gamil	-	不明
iCloud@<fn>{iCloud}	-	-
Outlook@<fn>{Outlook}	1024	500
ヤフーメール@<fn>{yahoo}	-	500
NTTドコモ@<fn>{docomo}	120	メールアドレス120/ドメイン200
au@<fn>{au1}@<fn>{au2}	200	200
au（アドレス帳）@<fn>{au3}	1000	-
UQモバイル@<fn>{uq}	220	200
ソフトバンク@<fn>{softbank1}	300	300
ワイモバイル@<fn>{softbank2}	許可／拒否併用300
//}

//footnote[iCloud][https://support.apple.com/ja-jp/guide/icloud/mm6b1a3f8a/icloud]
//footnote[Outlook][https://support.microsoft.com/ja-jp/office/5ae3ea8e-cf41-4fa0-b02a-3b96e21de089]
//footnote[yahoo][https://knowledge.support.yahoo-net.jp/PccMail/s/article/H000007401]
//footnote[docomo][https://www.nttdocomo.co.jp/info/spam_mail/spmode/domain/]
//footnote[au1][https://www.au.com/support/service/mobile/trouble/mail/email/filter/detail/domain/]
//footnote[au2][https://www.au.com/support/service/mobile/trouble/mail/email/filter/detail/block/]
//footnote[au3][https://www.au.com/support/service/mobile/trouble/mail/email/filter/detail/friendmail/]
//footnote[uq][https://www.uqwimax.jp/mobile/support/guide/mail/]
//footnote[softbank1][https://www.softbank.jp/mobile/support/mail/antispam/email-i/white/]
//footnote[softbank2][https://www.softbank.jp/mobile/support/mail/antispam/email-i/black-only/]
//footnote[ymobile][https://www.ymobile.jp/service/others/spam/]
