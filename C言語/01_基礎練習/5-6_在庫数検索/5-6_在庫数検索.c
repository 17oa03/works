/*
【プログラム概要】
商品コード(整数2桁)を入力し、
該当する商品の在庫数を検索して出力する。
商品コードに99が入力されたら終了する。
*/

/*
【プログラム】
*/
#include <stdio.h>

#define YOUSO 5

int main(void)
{
	int code[YOUSO] = { 21, 68, 37, 40, 85 };
	int stock[YOUSO] = { 123, 430, 333, 650, 200 };
	int input = 0;
	int i;

	while (input != 99) { /* 終了コードが入力されるまで処理を繰り返す。 */

		printf("商品コード ==> ");
		scanf("%d", &input);

		if (input != 99) {

			/* 該当する商品があれば、カウンタ変数の加算を止める。*/
			for (i = 0; i < YOUSO && input != code[i]; i++);

			if (i < YOUSO) {

				printf("在庫数は、%dです。\n", stock[i]);
			}
			else
			{

				printf("該当する商品はありません。\n");
			}
		}
	}

	return 0;
}

/*
【実行結果】
商品コード ==> 37
在庫数は、333です。
商品コード ==> 21
在庫数は、123です。
商品コード ==> 85
在庫数は、200です。
商品コード ==> 10
該当する商品はありません。
商品コード ==> 40
在庫数は、650です。
商品コード ==> 68
在庫数は、430です。
商品コード ==> 99
*/

/*
【不具合履歴】
配列の初期化をdouble型で行っていた、
printf関数で出力変換指定子が「%d」だったので、
該当する商品があっても在庫数が全て「0」になっていた、
配列をint型に修正したところ、
問題は無かった。
*/