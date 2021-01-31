/* 上下に操作できるバーを表示する */
#include <drawlib.h>
#include <stdio.h>

int main(void) {
  /* 1フレーム毎に待機する時間（秒） */
  float wait_time = 0.01;

  /* --- バー用のパラメータ --- */
  /* バーの幅と高さ */
  int barw = 20, barh = 150;
  /* 一度のキー操作で変化するy座標の値 */
  int bardy = 50;
  /* バー1の位置(x座標，y座標) */
  int bar1x = 70, bar1y = DL_HEIGHT / 2;
  /* バー1の上下操作に対応するキー */
  int bar1kup = 'w', bar1kdown = 's';
  /* バー2の位置(x座標，y座標) */
  int bar2x = DL_WIDTH - 70, bar2y = DL_HEIGHT / 2;
  /* バー2の上下操作に対応するキー */
  int bar2kup = 'i', bar2kdown = 'k';

  /* --- ボール用のパラメータ --- */
  /* ボールの半径 */
  int br = 15;
  /* ボールの速度（x方向とy方向）*/
  int bvx = 5.0, bvy = 5.0;
  /* ボールの位置（x座標，y座標）*/
  int bx = DL_WIDTH / 2, by = DL_HEIGHT / 2;

  /* --- スコア --- */
  int score1 = 0, score2 = 0;
  /* スコアを表示する位置 */
  int sx = DL_WIDTH / 2 - 120, sy = 50;
  /* スコア文字列 */
  char sscore[] = "   :   ";

  /* --- その他 --- */
  /* イベント処理のための変数 */
  int t, k, x, y;
  
  dl_initialize(1.0);
  
  while (1) {
    /* バーの処理 */
    while (dl_get_event(&t, &k, &x, &y)) {
      if (t == DL_EVENT_KEY) {
	if (k == bar1kup)
	  bar1y -= bardy;
	else if (k == bar1kdown)
	  bar1y += bardy;
	else if (k == bar2kup)
	  bar2y -= bardy;
	else if (k == bar2kdown)
	  bar2y += bardy;
      }
    }
    if (bar1y - barh / 2 < 0)
      bar1y = barh / 2;
    if (bar1y + barh / 2 > DL_HEIGHT)
      bar1y = DL_HEIGHT - barh / 2;
    if (bar2y - barh / 2 < 0)
      bar2y = barh / 2;
    if (bar2y + barh / 2 > DL_HEIGHT)
      bar2y = DL_HEIGHT - barh / 2;

    /* --- ボールの処理 --- */
    bx += bvx;
    if (bx - br <= 0 || bx + br >= DL_WIDTH) 
      bvx *= -1;
    by += bvy;
    if (by - br <= 0 || by + br >= DL_HEIGHT)
      bvy *= -1;

    /* --- バーとの当たり判定 --- */
    if (by > bar1y - barh / 2 && by < bar1y + barh / 2) {
      if (bvx < 0 && bx - br <= bar1x + barw / 2 && bx - br >= bar1x - barw / 2) 
	bvx *= -1;
      if (bvx > 0 && bx + br >= bar1x - barw / 2 && bx + br <= bar1x + barw / 2)
	bvx *= -1;
    }
    if (by > bar2y - barh / 2 && by < bar2y + barh / 2) {
      if (bvx < 0 && bx - br <= bar2x + barw / 2 && bx - br >= bar2x - barw / 2) 
	bvx *= -1;
      if (bvx > 0 && bx + br >= bar2x - barw / 2 && bx + br <= bar2x + barw / 2)
	bvx *= -1;
    }

    /* --- スコア判定 --- */
    if (bx - br <= 0) {
      score2++;
      bx = bar1x + barw + 1;
      by = bar1y;
      bvx = abs(bvx) + 0.1;
    }
    if (bx + br >= DL_WIDTH) {
      score1++;
      bx = bar2x - barw - 1;
      by = bar2y;
      bvx = -abs(bvx) - 0.1;
    }
    if(score1 > 999)
      score1 = 999;
    if(score2 > 999)
      score2 = 999;
    
    /* --- 描画処理 --- */
    dl_stop();
    dl_clear(DL_C("black"));
    /* バーの描画 */
    dl_rectangle(bar1x - barw / 2, bar1y - barh / 2,
		 bar1x + barw / 2, bar1y + barh / 2, DL_C("red"), 1, 1);
    dl_rectangle(bar2x - barw / 2, bar2y - barh / 2,
		 bar2x + barw / 2, bar2y + barh / 2, DL_C("green"), 1, 1);
    /* ボールの描画 */
    dl_circle(bx, by, br, DL_C("blue"), 1, 1);
    /* スコアの描画 */
    sprintf (sscore, "%3d:%d", score1, score2);
    dl_text (sscore, sx, sy, 2.0, DL_C("white"), 2);
    
    dl_resume();

    dl_wait(wait_time);
  }

  return 0;
}
