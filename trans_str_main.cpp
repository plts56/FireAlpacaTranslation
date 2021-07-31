/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_main.h"

///////////////////////////////////////////////////////////////////////////
// - メインウィンドウで使用される文字列
// - String used in the main window
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMain( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 1) return QObject::tr("ブラシツール");
    if (idx == 2) return QObject::tr("ドットツール");
    if (idx == 3) return QObject::tr("消しゴムツール");
    if (idx == 4) return QObject::tr("移動ツール");
    if (idx == 5) return QObject::tr("バケツツール");
    if (idx == 6) return QObject::tr("グラデーションツール");
    if (idx == 7) return QObject::tr("塗りつぶしツール");
    if (idx == 8) return QObject::tr("選択ツール");
    if (idx == 9) return QObject::tr("自動選択ツール");
    if (idx == 10) return QObject::tr("選択ペンツール");
    if (idx == 11) return QObject::tr("選択消しツール");
    if (idx == 12) return QObject::tr("テキストツール");
    if (idx == 13) return QObject::tr("スポイトツール");
    if (idx == 14) return QObject::tr("手のひらツール");

    if (idx == 15) return QObject::tr("スナップ オフ");
    if (idx == 16) return QObject::tr("並行スナップ");
    if (idx == 17) return QObject::tr("十字スナップ");
    if (idx == 18) return QObject::tr("集中線スナップ");
    if (idx == 19) return QObject::tr("スナップ設定");

    if (idx == 20) return QObject::tr("アンチエイリアス");
    if (idx == 21) return QObject::tr("手ぶれ補正");
    if (idx == 22) return QObject::tr("丸める");
    if (idx == 23) return QObject::tr("不透明度");
    if (idx == 24) return QObject::tr("参照");
    if (idx == 25) return QObject::tr("キャンバス");
    if (idx == 26) return QObject::tr("アクティブレイヤー");
    if (idx == 27) return QObject::tr("拡張");
    if (idx == 28) return QObject::tr("形状");
    if (idx == 29) return QObject::tr("タイプ");
    if (idx == 30) return QObject::tr("線形");
    if (idx == 31) return QObject::tr("円形");
    if (idx == 32) return QObject::tr("前景色～背景色");
    if (idx == 33) return QObject::tr("前景色～透明");
    if (idx == 34) return QObject::tr("矩形");
    if (idx == 35) return QObject::tr("楕円");
    if (idx == 36) return QObject::tr("多角形");
    if (idx == 37) return QObject::tr("設定なし");
    if (idx == 38) return QObject::tr("投げなわ");
    if (idx == 39) return QObject::tr("投げなわ選択ツール");

    if (idx == 40) return QObject::tr("カラー");
    if (idx == 41) return QObject::tr("ブラシコントロール");
    if (idx == 42) return QObject::tr("ブラシ");
    if (idx == 43) return QObject::tr("ナビゲーター");
    if (idx == 44) return QObject::tr("レイヤー");
    if (idx == 45) return QObject::tr("ブラシプレビュー");
    if (idx == 46) return QObject::tr("パレット");
    if (idx == 47) return QObject::tr("資料");
    if (idx == 48) return QObject::tr("ブラシサイズ");

    if (idx == 50) return QObject::tr("(反転)");
    if (idx == 51) return QObject::tr("ファイルが存在しません");
    if (idx == 52) return QObject::tr("既に開いていますが、続行しますか？");
    if (idx == 54) return QObject::tr("消失点スナップ");
    if (idx == 55) return QObject::tr("画像を開く");
    if (idx == 56) return QObject::tr("画像");
    if (idx == 57) return QObject::tr("同心円スナップ");
    if (idx == 58) return QObject::tr("曲線スナップ");

    if (idx == 60) return QObject::tr("拡張");
    if (idx == 61) return QObject::tr("収縮");
    if (idx == 62) return QObject::tr("ウィンドウ位置を初期化しますか？");
    if (idx == 63) return QObject::tr("取り消し");
    if (idx == 64) return QObject::tr("やり直し");
    if (idx == 65) return QObject::tr("スナップ");
    if (idx == 66) return QObject::tr("言語を切り替えるため、アプリケーションを一旦終了します。終了後、アプリケーションを立ち上げ直してください。");
    if (idx == 67) return QObject::tr("読み込みに失敗しました");
    if (idx == 68) return QObject::tr("閾値");

    if (idx == 70) return QObject::tr("プリンタの取得に失敗しました");
    if (idx == 71) return QObject::tr("ソフトエッジ");
    if (idx == 72) return QObject::tr("未設定");
    if (idx == 73) return QObject::tr("クリック位置のレイヤーを選択");

    if (idx == 75) return QObject::tr("並行");
    if (idx == 76) return QObject::tr("集中線");
    if (idx == 77) return QObject::tr("同心円");
    if (idx == 78) return QObject::tr("曲線");
    if (idx == 79) return QObject::tr("消失点");

    if (idx == 80) return QObject::tr("操作ツール");
    if (idx == 81) return QObject::tr("分割ツール");
    if (idx == 82) return QObject::tr("左右の間隔");
    if (idx == 83) return QObject::tr("上下の間隔");

    if (idx == 85) return QObject::tr("中央から選択");
    if (idx == 86) return QObject::tr("縦横比を固定");

    if (idx == 87) return QObject::tr("ショートカットを反映するため、アプリケーションを一旦終了します。終了後、アプリケーションを立ち上げ直してください。");

    if (idx == 88) return QObject::tr("その他");
    if (idx == 89) return QObject::tr("ブラシサイズを大きく");
    if (idx == 90) return QObject::tr("ブラシサイズを小さく");
    if (idx == 91) return QObject::tr("無効なMDPファイルです。");
    if (idx == 92) return QObject::tr("%1 は正しい形式のMDPファイルではないため開けません。");
    if (idx == 93) return QObject::tr("ファイルが既に存在します");
    if (idx == 94) return QObject::tr("アニメGIF変換サービス 「アルパカ動画」 をブラウザで開きますか？");
    if (idx == 95) return QObject::tr("背景を透過させますか？");
    if (idx == 96) return QObject::tr("フォルダを作成しますか？");

    if (idx == 110) return QObject::tr("フリーハンド");
    if (idx == 111) return QObject::tr("直線");
    if (idx == 112) return QObject::tr("折れ線");
    if (idx == 113) return QObject::tr("多角形");
    if (idx == 114) return QObject::tr("矩形");
    if (idx == 115) return QObject::tr("楕円");
    if (idx == 116) return QObject::tr("曲線");
    if (idx == 117) return QObject::tr("図形");

    if (idx == 120) return QObject::tr("3Dパース スナップ");
    if (idx == 121) return QObject::tr("フィルター処理中に別のファイルを開くことはできません。");
    if (idx == 122) return QObject::tr("選択解除");
    if (idx == 123) return QObject::tr("グリッドにスナップ");
    if (idx == 124) return QObject::tr("レイヤーカラーを無視");
    if (idx == 125) return QObject::tr("下書きレイヤーを無視");

    if (idx == 130) return QObject::tr("自動保存中...");
    if (idx == 131) return QObject::tr("自動保存完了");
    if (idx == 132) return QObject::tr("自動保存を無効にしました (メモリ不足)\n\nアプリケーションの安定性が著しく低下しています");
    if (idx == 133) return QObject::tr("自動保存されている画像を復旧しますか？");

    if (idx == 135) return QObject::tr("pixiv Sketch への投稿に失敗しました");

    // dialog_expand.cpp
    if (idx == 140) return QObject::tr("角を丸める");

    // dialog_border.cpp
    if (idx == 150) return QObject::tr("角を丸め、太さを維持する");

    if (idx == 160) return QObject::tr("隙間を塞ぐ");
    if (idx == 162) return QObject::tr("許容値");
    if (idx == 163) return QObject::tr("透明〜前景色");
    if (idx == 164) return QObject::tr("カスタム");

    // mainwindow.cpp
    if (idx == 170) return QObject::tr("ドラッグごとに位置を確定");
    if (idx == 171) return QObject::tr("位置を確定");
    if (idx == 172) return QObject::tr("両端の筆圧をゼロにする");

    if (idx == 180) return QObject::tr("パレットファイルの読み込み");
    if (idx == 181) return QObject::tr("パレットファイルの保存");
    if (idx == 182) return QObject::tr("FireAlpacaパレット (*.fap);;FireAlpacaパレット (*.fap)");

    if (idx == 190) return QObject::tr("変形");
    if (idx == 191) return QObject::tr("自由変形");
    if (idx == 192) return QObject::tr("メッシュ変形");

    if (idx == 200) return QObject::tr("左右対称");
    if (idx == 201) return QObject::tr("上下対称");
    if (idx == 202) return QObject::tr("回転対称");
    if (idx == 203) return QObject::tr(" (鏡像)");
    if (idx == 204) return QObject::tr("タイル");
    if (idx == 205) return QObject::tr("対称");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 1) return QObject::tr("笔刷工具");
    if (idx == 2) return QObject::tr("点刷工具");
    if (idx == 3) return QObject::tr("橡皮擦工具");
    if (idx == 4) return QObject::tr("移动工具");
    if (idx == 5) return QObject::tr("油漆桶工具");
    if (idx == 6) return QObject::tr("渐变工具");
    if (idx == 7) return QObject::tr("填充工具");
    if (idx == 8) return QObject::tr("选择工具");
    if (idx == 9) return QObject::tr("自动选择工具");
    if (idx == 10) return QObject::tr("选择笔工具");
    if (idx == 11) return QObject::tr("选择消除工具");
    if (idx == 12) return QObject::tr("文本工具");
    if (idx == 13) return QObject::tr("吸管工具");
    if (idx == 14) return QObject::tr("手掌工具");

    if (idx == 15) return QObject::tr("停止");
    if (idx == 16) return QObject::tr("平行辅助");
    if (idx == 17) return QObject::tr("十字辅助");
    if (idx == 18) return QObject::tr("射線辅助");
    if (idx == 19) return QObject::tr("辅助设定");

    if (idx == 20) return QObject::tr("边缘柔化抗锯齿");
    if (idx == 21) return QObject::tr("抖动修正");
    if (idx == 22) return QObject::tr("圆角");
    if (idx == 23) return QObject::tr("不透明度");
    if (idx == 24) return QObject::tr("参照");
    if (idx == 25) return QObject::tr("画布");
    if (idx == 26) return QObject::tr("图层");
    if (idx == 27) return QObject::tr("扩张");
    if (idx == 28) return QObject::tr("形状");
    if (idx == 29) return QObject::tr("类型");
    if (idx == 30) return QObject::tr("线形");
    if (idx == 31) return QObject::tr("圆形");
    if (idx == 32) return QObject::tr("前景～背景");
    if (idx == 33) return QObject::tr("前景");
    if (idx == 34) return QObject::tr("矩形");
    if (idx == 35) return QObject::tr("椭圆");
    if (idx == 36) return QObject::tr("多角形");
    if (idx == 37) return QObject::tr("无设定");
    if (idx == 38) return QObject::tr("套索");

    if (idx == 40) return QObject::tr("颜色");
    if (idx == 41) return QObject::tr("笔刷控制");
    if (idx == 42) return QObject::tr("笔刷");
    if (idx == 43) return QObject::tr("导览");
    if (idx == 44) return QObject::tr("图层");
    if (idx == 45) return QObject::tr("笔刷预览");
    if (idx == 46) return QObject::tr("色板");
    if (idx == 47) return QObject::tr("资料");

    if (idx == 50) return QObject::tr("(反转)");
    if (idx == 51) return QObject::tr("档案不存在");
    if (idx == 52) return QObject::tr("已开启，是否继续执行？");
    if (idx == 54) return QObject::tr("消失点辅助");
    if (idx == 55) return QObject::tr("打开图像");
    if (idx == 56) return QObject::tr("图像");

    if (idx == 60) return QObject::tr("扩张");
    if (idx == 61) return QObject::tr("收缩");
    if (idx == 62) return QObject::tr("初始化窗口位置吗?");
    if (idx == 63) return QObject::tr("取消");
    if (idx == 64) return QObject::tr("还原");
    if (idx == 65) return QObject::tr("辅助");
    if (idx == 66) return QObject::tr("为了转换语言，需先关闭应用软件。结束后，请重新启动应用软件。");
    if (idx == 67) return QObject::tr("读取失败");
    if (idx == 68) return QObject::tr("阈值");

    if (idx == 70) return QObject::tr("无法连接至打印机。");
    if (idx == 71) return QObject::tr("柔边");
    if (idx == 72) return QObject::tr("未设定");
    if (idx == 73) return QObject::tr("选择点击位置的图层");

    if (idx == 75) return QObject::tr("平行");
    if (idx == 76) return QObject::tr("集中线");
    if (idx == 77) return QObject::tr("同心圆");
    if (idx == 78) return QObject::tr("曲线");
    if (idx == 79) return QObject::tr("消失点");

    if (idx == 80) return QObject::tr("操作工具");
    if (idx == 81) return QObject::tr("分割工具");
    if (idx == 82) return QObject::tr("左右间隔");
    if (idx == 83) return QObject::tr("上下间隔");

    if (idx == 85) return QObject::tr("从中心选择");
    if (idx == 86) return QObject::tr("固定纵横比");

    if (idx == 87) return QObject::tr("为了更新快捷键，请先关闭程序后再次重新启动程序。");

    if (idx == 88) return QObject::tr("其他");
    if (idx == 89) return QObject::tr("放大笔刷尺寸");
    if (idx == 90) return QObject::tr("缩小笔刷尺寸");
    if (idx == 91) return QObject::tr("无效的MDP文件。");
    if (idx == 92) return QObject::tr("%1 因不是正确的MDP文件形式，无法打开。");
    if (idx == 93) return QObject::tr("文件已存在");
    if (idx == 94) return QObject::tr("使用浏览器打开动画GIF转换服务「Alpaca动画」吗？");

    if (idx == 110) return QObject::tr("手绘");
    if (idx == 111) return QObject::tr("直线");
    if (idx == 112) return QObject::tr("折线");
    if (idx == 113) return QObject::tr("多边形");
    if (idx == 114) return QObject::tr("矩形");
    if (idx == 115) return QObject::tr("椭圆");
    if (idx == 116) return QObject::tr("曲线");
    if (idx == 117) return QObject::tr("形状");

    if (idx == 130) return QObject::tr("正在自动保存...");
    if (idx == 131) return QObject::tr("自动保存完毕");
    if (idx == 132) return QObject::tr("已禁用自动保存(内存不足)\n\n应用程序的稳定性会显著下降");
    if (idx == 133) return QObject::tr("要将已经自动保存的图像恢复原状吗?");

    if (idx == 200) return QObject::tr("双侧对称");
    if (idx == 201) return QObject::tr("纵向对称");
    if (idx == 202) return QObject::tr("旋转对称");
    if (idx == 203) return QObject::tr(" (镜像)");
    if (idx == 204) return QObject::tr("瓷砖");
    if (idx == 205) return QObject::tr("对称");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 1) return QObject::tr("筆刷工具");
    if (idx == 2) return QObject::tr("點刷工具");
    if (idx == 3) return QObject::tr("橡皮擦工具");
    if (idx == 4) return QObject::tr("移動工具");
    if (idx == 5) return QObject::tr("油漆桶工具");
    if (idx == 6) return QObject::tr("漸變工具");
    if (idx == 7) return QObject::tr("填充工具");
    if (idx == 8) return QObject::tr("選擇工具");
    if (idx == 9) return QObject::tr("魔術棒工具");
    if (idx == 10) return QObject::tr("選擇筆工具");
    if (idx == 11) return QObject::tr("選擇消除工具");
    if (idx == 12) return QObject::tr("文本工具");
    if (idx == 13) return QObject::tr("滴管工具");
    if (idx == 14) return QObject::tr("手掌工具");

    if (idx == 15) return QObject::tr("停止");
    if (idx == 16) return QObject::tr("平行輔助");
    if (idx == 17) return QObject::tr("十字輔助");
    if (idx == 18) return QObject::tr("集中線輔助");
    if (idx == 19) return QObject::tr("輔助設定");

    if (idx == 20) return QObject::tr("反鋸齒");
    if (idx == 21) return QObject::tr("抖動修正");
    if (idx == 22) return QObject::tr("圓角");
    if (idx == 23) return QObject::tr("不透明度");
    if (idx == 24) return QObject::tr("參照");
    if (idx == 25) return QObject::tr("畫布");
    if (idx == 26) return QObject::tr("圖層");
    if (idx == 27) return QObject::tr("擴張");
    if (idx == 28) return QObject::tr("形狀");
    if (idx == 29) return QObject::tr("類型");
    if (idx == 30) return QObject::tr("線形");
    if (idx == 31) return QObject::tr("圓形");
    if (idx == 32) return QObject::tr("前景～背景");
    if (idx == 33) return QObject::tr("前景");
    if (idx == 34) return QObject::tr("矩形");
    if (idx == 35) return QObject::tr("楕圓");
    if (idx == 36) return QObject::tr("多角形");
    if (idx == 37) return QObject::tr("無設定");
    if (idx == 38) return QObject::tr("套索");

    if (idx == 40) return QObject::tr("顏色");
    if (idx == 41) return QObject::tr("筆刷參數");
    if (idx == 42) return QObject::tr("筆刷");
    if (idx == 43) return QObject::tr("導覽");
    if (idx == 44) return QObject::tr("圖層");
    if (idx == 45) return QObject::tr("筆刷預覽");
    if (idx == 46) return QObject::tr("色板");
    if (idx == 47) return QObject::tr("資料");

    if (idx == 50) return QObject::tr("(反轉)");
    if (idx == 51) return QObject::tr("檔案不存在");
    if (idx == 52) return QObject::tr("已開啟，確定繼續執行嗎？");
    if (idx == 54) return QObject::tr("消失點輔助");
    if (idx == 55) return QObject::tr("開啟圖像");
    if (idx == 56) return QObject::tr("圖像");

    if (idx == 60) return QObject::tr("擴張");
    if (idx == 61) return QObject::tr("收縮");
    if (idx == 62) return QObject::tr("確定要初始化視窗位置嗎？");
    if (idx == 63) return QObject::tr("取消");
    if (idx == 64) return QObject::tr("復原");
    if (idx == 65) return QObject::tr("輔助");
    if (idx == 66) return QObject::tr("為了切換語言，必須先關閉應用軟體。稍後請重新啟動。");
    if (idx == 67) return QObject::tr("讀取失敗");
    if (idx == 68) return QObject::tr("閾值");

    if (idx == 70) return QObject::tr("無法連結至印表機");
    if (idx == 71) return QObject::tr("羽化邊緣");
    if (idx == 72) return QObject::tr("未命名");
    if (idx == 73) return QObject::tr("選擇點擊處的圖層");

    if (idx == 75) return QObject::tr("平行");
    if (idx == 76) return QObject::tr("集中線");
    if (idx == 77) return QObject::tr("同心圓");
    if (idx == 78) return QObject::tr("曲線");
    if (idx == 79) return QObject::tr("消失點");

    if (idx == 80) return QObject::tr("操作工具");
    if (idx == 81) return QObject::tr("分割工具");
    if (idx == 82) return QObject::tr("左右間距");
    if (idx == 83) return QObject::tr("上下間距");

    if (idx == 85) return QObject::tr("從中央選擇");
    if (idx == 86) return QObject::tr("固定縱橫比例");

    if (idx == 87) return QObject::tr("為了套用快捷鍵設定，必須先關閉應用軟體。稍後請重新啟動。");

    if (idx == 88) return QObject::tr("其他");
    if (idx == 89) return QObject::tr("放大筆刷尺寸");
    if (idx == 90) return QObject::tr("縮小筆刷尺寸");
    if (idx == 91) return QObject::tr("此為無效MDP檔案。");
    if (idx == 92) return QObject::tr("%1 並非正確的MDP檔案格式，無法開啟。");
    if (idx == 93) return QObject::tr("檔案已存在");
    if (idx == 94) return QObject::tr("請問要在瀏覽器中開啟GIF動畫轉換服務「羊駝動畫」嗎？");
  }

  if (man->TranslateKorean())
  {
    if (idx == 1) return QObject::tr("브러시 툴");
    if (idx == 2) return QObject::tr("도트 툴");
    if (idx == 3) return QObject::tr("지우개 툴");
    if (idx == 4) return QObject::tr("이동 툴");
    if (idx == 5) return QObject::tr("버킷 툴");
    if (idx == 6) return QObject::tr("그라데이션 툴");
    if (idx == 7) return QObject::tr("채우기 툴");
    if (idx == 8) return QObject::tr("선택 툴");
    if (idx == 9) return QObject::tr("자동선택 툴");
    if (idx == 10) return QObject::tr("선택 펜 툴");
    if (idx == 11) return QObject::tr("선택 지우개 툴");
    if (idx == 12) return QObject::tr("텍스트 툴");
    if (idx == 13) return QObject::tr("스포이트 툴");
    if (idx == 14) return QObject::tr("손바닥 툴");

    if (idx == 15) return QObject::tr("스냅 Off");
    if (idx == 16) return QObject::tr("병행 스냅");
    if (idx == 17) return QObject::tr("십자 스냅");
    if (idx == 18) return QObject::tr("집중선 스냅");
    if (idx == 19) return QObject::tr("스냅 설정");

    if (idx == 20) return QObject::tr("안티 에일리어싱");
    if (idx == 21) return QObject::tr("보정");
    if (idx == 22) return QObject::tr("둥글게 하기");
    if (idx == 23) return QObject::tr("불투명도");
    if (idx == 24) return QObject::tr("참조");
    if (idx == 25) return QObject::tr("캔버스");
    if (idx == 26) return QObject::tr("레이어");
    if (idx == 27) return QObject::tr("확장");
    if (idx == 28) return QObject::tr("형상");
    if (idx == 29) return QObject::tr("타입");
    if (idx == 30) return QObject::tr("선형");
    if (idx == 31) return QObject::tr("원형");
    if (idx == 32) return QObject::tr("전경∼배경");
    if (idx == 33) return QObject::tr("전경");
    if (idx == 34) return QObject::tr("직사각형");
    if (idx == 35) return QObject::tr("타원");
    if (idx == 36) return QObject::tr("다각형");
    if (idx == 37) return QObject::tr("설정 없음");
    if (idx == 38) return QObject::tr("올가미");

    if (idx == 40) return QObject::tr("컬러");
    if (idx == 41) return QObject::tr("브러시 컨트롤");
    if (idx == 42) return QObject::tr("브러시");
    if (idx == 43) return QObject::tr("내비게이터");
    if (idx == 44) return QObject::tr("레이어");
    if (idx == 45) return QObject::tr("브러시 미리보기");
    if (idx == 46) return QObject::tr("팔레트");
    if (idx == 47) return QObject::tr("자료");

    if (idx == 50) return QObject::tr("(반전)");
    if (idx == 51) return QObject::tr("파일이 존재하지 않습니다");
    if (idx == 52) return QObject::tr("이미 열려 있습니다. 계속할까요?");
    if (idx == 54) return QObject::tr("소실점 스냅");
    if (idx == 55) return QObject::tr("이미지 열기");
    if (idx == 56) return QObject::tr("이미지");

    if (idx == 60) return QObject::tr("확장");
    if (idx == 61) return QObject::tr("수축");
    if (idx == 62) return QObject::tr("윈도우 위치를 초기화 합니까?");
    if (idx == 63) return QObject::tr("취소");
    if (idx == 64) return QObject::tr("다시 하기");
    if (idx == 65) return QObject::tr("스냅");
    if (idx == 66) return QObject::tr("언어를 바꾸기 위해서, 프로그램을 일단 종료합니다. 종료 후, 다시 시작해 주십시오.");
    if (idx == 67) return QObject::tr("열기에 실패했습니다");
    if (idx == 68) return QObject::tr("한계값");

    if (idx == 70) return QObject::tr("프린터 취득에 실패했습니다.");
    if (idx == 71) return QObject::tr("소프트 에지");
    if (idx == 72) return QObject::tr("미설정");
    if (idx == 73) return QObject::tr("클릭 위치의 레이어를 선택");

    if (idx == 75) return QObject::tr("병행");
    if (idx == 76) return QObject::tr("집중선");
    if (idx == 77) return QObject::tr("원형");
    if (idx == 78) return QObject::tr("곡선");
    if (idx == 79) return QObject::tr("소실점");

    if (idx == 80) return QObject::tr("조작 툴");
    if (idx == 81) return QObject::tr("분할 툴");
    if (idx == 82) return QObject::tr("좌우의 간격");
    if (idx == 83) return QObject::tr("상하의 간격");

    if (idx == 85) return QObject::tr("중앙에서 선택");
    if (idx == 86) return QObject::tr("세로와 가로 비율을 고정");

    if (idx == 87) return QObject::tr("단축키를 반영하기 위해, 프로그램을 일단 종료합니다. 종료후, 다시 시작해 주십시오.");

    if (idx == 88) return QObject::tr("그 외");
    if (idx == 89) return QObject::tr("브러시사이즈를 크게");
    if (idx == 90) return QObject::tr("브러시사이즈를 작게");
    if (idx == 91) return QObject::tr("무효한 MDP파일 입니다.");
    if (idx == 92) return QObject::tr("%1 는 알맞은 형식의 MDP파일이 아니기 때문에 열 수 없습니다.");
    if (idx == 93) return QObject::tr("파일이 이미 존재합니다.");
    if (idx == 94) return QObject::tr("애니메이션 GIF변환 서비스「AlpacaDouga」를 브라우저로 여시겠습니까?");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 1) return QObject::tr("Ferramenta Pincel");
    if (idx == 2) return QObject::tr("Ferramenta Ponto");
    if (idx == 3) return QObject::tr("Ferramenta Borracha");
    if (idx == 4) return QObject::tr("Ferramenta Mover");
    if (idx == 5) return QObject::tr("Ferramenta Balde");
    if (idx == 6) return QObject::tr("Ferramenta Gradiente");
    if (idx == 7) return QObject::tr("Ferramenta Preenchimento");
    if (idx == 8) return QObject::tr("Ferramenta Seleção");
    if (idx == 9) return QObject::tr("Ferramenta Varinha Mágica");
    if (idx == 10) return QObject::tr("Ferramenta Caneta de Seleção");
    if (idx == 11) return QObject::tr("Ferramenta Seleção de Borracha");
    if (idx == 12) return QObject::tr("Ferramenta de Texto");
    if (idx == 13) return QObject::tr("Ferramenta Conta-gotas");
    if (idx == 14) return QObject::tr("Ferramenta Mão");

    if (idx == 15) return QObject::tr("Ajuste");
    if (idx == 16) return QObject::tr("Ajuste Paralelo");
    if (idx == 17) return QObject::tr("Ajuste Entrecruzado");
    if (idx == 18) return QObject::tr("Ajuste Radial");
    if (idx == 19) return QObject::tr("Configuração de Ajuste");

    if (idx == 20) return QObject::tr("Suavização");
    if (idx == 21) return QObject::tr("Correção");
    if (idx == 22) return QObject::tr("Arredondar Canto");
    if (idx == 23) return QObject::tr("Opacidade");
    if (idx == 24) return QObject::tr("Referência");
    if (idx == 25) return QObject::tr("Tela");
    if (idx == 26) return QObject::tr("Camada");
    if (idx == 27) return QObject::tr("Expandir");
    if (idx == 28) return QObject::tr("Formato");
    if (idx == 29) return QObject::tr("Tipo");
    if (idx == 30) return QObject::tr("Linear");
    if (idx == 31) return QObject::tr("Circular");
    if (idx == 32) return QObject::tr("Primeiro plano-Plano de fundo");
    if (idx == 33) return QObject::tr("Primeiro plano");
    if (idx == 34) return QObject::tr("Retângulo");
    if (idx == 35) return QObject::tr("Elipse");
    if (idx == 36) return QObject::tr("Polígono");
    if (idx == 37) return QObject::tr("Nenhuma Opção");
    if (idx == 38) return QObject::tr("Laço");

    if (idx == 40) return QObject::tr("Cor");
    if (idx == 41) return QObject::tr("Controle de Pincel");
    if (idx == 42) return QObject::tr("Pincel");
    if (idx == 43) return QObject::tr("Navegador");
    if (idx == 44) return QObject::tr("Camada");
    if (idx == 45) return QObject::tr("Visualização do Pincel");
    if (idx == 46) return QObject::tr("Paleta");
    //if (idx == 47) return QObject::tr("資料");

    if (idx == 50) return QObject::tr("(Inverter)");
    if (idx == 51) return QObject::tr("O arquivo não existe.");
    if (idx == 52)
    {
      QString s = QObject::tr("%1 já está aberto. Continuar?");
      s.replace( "%1", man->StrParam() );
      return s;
    }
    if (idx == 54) return QObject::tr("Ajuste de Ponto de Fuga");
    if (idx == 55) return QObject::tr("Abrir uma imagem");
    if (idx == 56) return QObject::tr("Imagem");

    if (idx == 60) return QObject::tr("Expandir");
    if (idx == 61) return QObject::tr("Encolher");
    if (idx == 62) return QObject::tr("Inicializar uma posição de janela?");
    if (idx == 63) return QObject::tr("Desfazer");
    if (idx == 64) return QObject::tr("Refazer");
    if (idx == 65) return QObject::tr("Ajustar");
    if (idx == 66) return QObject::tr("O programa será fechado para atualizar a configuração de idioma.  Reinicie o programa após fechá-lo.");
    if (idx == 67) return QObject::tr("Falha ao abrir");
    if (idx == 68) return QObject::tr("Limite");

    if (idx == 70) return QObject::tr("Falha em localizar a impressora.");
    if (idx == 71) return QObject::tr("Suavização de Bordas");
    if (idx == 72) return QObject::tr("Sem nome");
    if (idx == 73) return QObject::tr("Selecione uma camada no ponto clicado");

    if (idx == 75) return QObject::tr("Paralelo");
    if (idx == 76) return QObject::tr("Radial");
    if (idx == 77) return QObject::tr("Círculo");
    if (idx == 78) return QObject::tr("Curva");
    if (idx == 79) return QObject::tr("Ponto de fuga");

    if (idx == 80) return QObject::tr("Ferramenta de operação");
    if (idx == 81) return QObject::tr("Ferramenta de divisão");
    if (idx == 82) return QObject::tr("Espaçamento lateral");
    if (idx == 83) return QObject::tr("Espaçamento vertical");

    if (idx == 85) return QObject::tr("Selecionar do centro");
    if (idx == 86) return QObject::tr("Restringir proporções");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 1) return QObject::tr("Herramienta Pincel");
    if (idx == 2) return QObject::tr("Herramienta Punto");
    if (idx == 3) return QObject::tr("Herramienta Borrador");
    if (idx == 4) return QObject::tr("Herramienta Mover");
    if (idx == 5) return QObject::tr("Herramienta Bote de pintura");
    if (idx == 6) return QObject::tr("Herramienta Degradado");
    if (idx == 7) return QObject::tr("Herramienta Relleno");
    if (idx == 8) return QObject::tr("Herramienta Seleccionar");
    if (idx == 9) return QObject::tr("Herramienta Varita mágica");
    if (idx == 10) return QObject::tr("Herramienta Seleccionar Pluma");
    if (idx == 11) return QObject::tr("Herramienta Seleccionar Borrador");
    if (idx == 12) return QObject::tr("Herramienta Texto");
    if (idx == 13) return QObject::tr("Herramienta Cuentagotas");
    if (idx == 14) return QObject::tr("Herramienta Mano");
    if (idx == 15) return QObject::tr("Desactivar Ajustar");
    if (idx == 16) return QObject::tr("Ajuste paralelo");
    if (idx == 17) return QObject::tr("Ajuste entrecruzado");
    if (idx == 18) return QObject::tr("Ajuste radial");
    if (idx == 19) return QObject::tr("Configuraciones de ajuste");
    if (idx == 20) return QObject::tr("Suavizado");
    if (idx == 21) return QObject::tr("Corrección");
    if (idx == 22) return QObject::tr("Redondear vértice");
    if (idx == 23) return QObject::tr("Opacidad");
    if (idx == 24) return QObject::tr("Referencia");
    if (idx == 25) return QObject::tr("Lienzo");
    if (idx == 26) return QObject::tr("Capa");
    if (idx == 27) return QObject::tr("Expandir");
    if (idx == 28) return QObject::tr("Forma");
    if (idx == 29) return QObject::tr("Tipo");
    if (idx == 30) return QObject::tr("Lineal");
    if (idx == 31) return QObject::tr("Circular");
    if (idx == 32) return QObject::tr("Frontal - Fondo");
    if (idx == 33) return QObject::tr("Frontal");
    if (idx == 34) return QObject::tr("Rectángulo");
    if (idx == 35) return QObject::tr("Elipse");
    if (idx == 36) return QObject::tr("Polígono");
    if (idx == 37) return QObject::tr("Sin opción");
    if (idx == 38) return QObject::tr("Lazo");
    if (idx == 39) return QObject::tr("Herramienta Lazo");
    if (idx == 40) return QObject::tr("Color");
    if (idx == 41) return QObject::tr("Control del pincel");
    if (idx == 42) return QObject::tr("Pincel");
    if (idx == 43) return QObject::tr("Navegador");
    if (idx == 44) return QObject::tr("Capa");
    if (idx == 45) return QObject::tr("Vista previa del pincel");
    if (idx == 46) return QObject::tr("Paleta");

    if (idx == 50) return QObject::tr("(Voltear)");
    if (idx == 51) return QObject::tr("El archivo no existe.");
    if (idx == 52)
    {
      QString s = QObject::tr("%1 ya está abierto. ¿Desea continuar?");
      s.replace( "%1", man->StrParam() );
      return s;
    }
    if (idx == 54) return QObject::tr("Ajustar a punto de fuga");
    if (idx == 55) return QObject::tr("Abrir imagen");
    if (idx == 56) return QObject::tr("Imagen");
    if (idx == 57) return QObject::tr("Círculo");
    if (idx == 58) return QObject::tr("Curva");
    if (idx == 60) return QObject::tr("Expandir");
    if (idx == 61) return QObject::tr("Contraer");
    if (idx == 62) return QObject::tr("¿Desea inicializar una posición de ventana?");
    if (idx == 63) return QObject::tr("Deshacer");
    if (idx == 64) return QObject::tr("Rehacer");
    if (idx == 65) return QObject::tr("Ajustar");
    if (idx == 66) return QObject::tr("Para actualizar la configuración de idioma el programa debe cerrarse. A continuación, reinicie el programa.");
    if (idx == 67) return QObject::tr("No se pudo abrir");
    if (idx == 68) return QObject::tr("Umbral");

    if (idx == 70) return QObject::tr("Fallo en la obtención de la impresora");
    if (idx == 71) return QObject::tr("Bordes Suaves");
    if (idx == 72) return QObject::tr("Sin título");
    if (idx == 73) return QObject::tr("Seleccionar capa en el punto clicado");
    if (idx == 75) return QObject::tr("Paralelo");
    if (idx == 76) return QObject::tr("Radial");
    if (idx == 77) return QObject::tr("Círculo");
    if (idx == 78) return QObject::tr("Curva");
    if (idx == 79) return QObject::tr("Punto de fuga");
    if (idx == 80) return QObject::tr("Herramienta de operación");
    if (idx == 81) return QObject::tr("Herramienta de división");
    if (idx == 82) return QObject::tr("Kerning");
    if (idx == 83) return QObject::tr("Interlineado");
    if (idx == 85) return QObject::tr("Seleccionar desde el centro");
    if (idx == 86) return QObject::tr("Restringir proporciones");
    if (idx == 87) return QObject::tr("Para actualizar los atajos de teclado el programa debe cerrarse. Por favor, reinicia el programa después de su cierre.");
    if (idx == 88) return QObject::tr("Otros");
    if (idx == 89) return QObject::tr("Aumentar tamaño del Pincel");
    if (idx == 90) return QObject::tr("Disminuir tamaño del Pincel");
  }

  if (man->TranslateGerman())
  {
    if (idx == 1) return QObject::tr("Pinsel-Tool");
    if (idx == 2) return QObject::tr("Pünktchen-Tool");
    if (idx == 3) return QObject::tr("Radierer-Tool");
    if (idx == 4) return QObject::tr("Verschiebe-Tool");
    if (idx == 5) return QObject::tr("Eimer-Tool");
    if (idx == 6) return QObject::tr("Verlauf-Tool");
    if (idx == 7) return QObject::tr("Füll-Tool");
    if (idx == 8) return QObject::tr("Auswahl-Tool");
    if (idx == 9) return QObject::tr("Zauberstab-Tool");
    if (idx == 10) return QObject::tr("Stiftwahl-Tool");
    if (idx == 11) return QObject::tr("Radiererwahl-Tool");
    if (idx == 12) return QObject::tr("Text-Tool");
    if (idx == 13) return QObject::tr("Pipette-Tool");
    if (idx == 14) return QObject::tr("Hand-Tool");

    if (idx == 15) return QObject::tr("Schnappfunktion abbrechen");
    if (idx == 16) return QObject::tr("Paralelle Schnappfunktion");
    if (idx == 17) return QObject::tr("Kreuz-und-Quer-Schnappfunktion");
    if (idx == 18) return QObject::tr("Radikale Schnappfunktion");
    if (idx == 19) return QObject::tr("Einstellung der Schnappfunktion");

    if (idx == 20) return QObject::tr("Anti-Aliasing");
    if (idx == 21) return QObject::tr("Korrektur");
    if (idx == 22) return QObject::tr("Runde Ecke");
    if (idx == 23) return QObject::tr("Deckkraft");
    if (idx == 24) return QObject::tr("Referenz");
    if (idx == 25) return QObject::tr("Leinwand");
    if (idx == 26) return QObject::tr("Ebene");
    if (idx == 27) return QObject::tr("Erweitern");
    if (idx == 28) return QObject::tr("Form");
    if (idx == 29) return QObject::tr("Typ");
    if (idx == 30) return QObject::tr("Linienförmig");
    if (idx == 31) return QObject::tr("Kreisförmig");
    if (idx == 32) return QObject::tr("Vordergrund - Hintergrund");
    if (idx == 33) return QObject::tr("Vordergrund");
    if (idx == 34) return QObject::tr("Rechteck");
    if (idx == 35) return QObject::tr("Ellipse");
    if (idx == 36) return QObject::tr("Polygon");
    if (idx == 37) return QObject::tr("Keine Option");
    if (idx == 38) return QObject::tr("Lasso");

    if (idx == 40) return QObject::tr("Farbe");
    if (idx == 41) return QObject::tr("Pinselkontrolle");
    if (idx == 42) return QObject::tr("Pinsel");
    if (idx == 43) return QObject::tr("Navigator");
    if (idx == 44) return QObject::tr("Ebene");
    if (idx == 45) return QObject::tr("Pinselprüfung ");
    if (idx == 46) return QObject::tr("Palette");

    if (idx == 50) return QObject::tr("(Umdrehen)");
    if (idx == 51) return QObject::tr("Diese Datei existiert nicht.");
    if (idx == 52)
    {
      QString s = QObject::tr("%1 ist bereits geöffnet.  Weitermachen?");
      s.replace( "%1", man->StrParam() );
      return s;
    }
    if (idx == 54) return QObject::tr("Fluchtpunkt-Schnappfunktion");
    if (idx == 55) return QObject::tr("Ein Bild öffnen");
    if (idx == 56) return QObject::tr("Ein Bild");

    if (idx == 60) return QObject::tr("Erweitern");
    if (idx == 61) return QObject::tr("Kontakt");
    if (idx == 62) return QObject::tr("Eine Fensterposition initialisieren?");
    if (idx == 63) return QObject::tr("Rückgängig machen");
    if (idx == 64) return QObject::tr("Wiederholen");
    if (idx == 65) return QObject::tr("Schnappfunktion");
    if (idx == 66) return QObject::tr("Bei der Aktualisierung der Spracheinstellung wird das Programm beendet. Bitte starten Sie das Programm nach der Beendung wieder.");
    if (idx == 67) return QObject::tr("Konnte nicht geöffnet werden");
    if (idx == 68) return QObject::tr("Schwellenwert");

    if (idx == 70) return QObject::tr("Druckererfassung fehlgeschlagen");
    if (idx == 71) return QObject::tr("Abgerundete Ecken");
    if (idx == 72) return QObject::tr("Ohne Titel");
    if (idx == 73) return QObject::tr("Wählen Sie eine Ebene an dem angeklickten Punkt.");

    if (idx == 75) return QObject::tr("Parallel");
    if (idx == 76) return QObject::tr("Radial");
    if (idx == 77) return QObject::tr("Kreis");
    if (idx == 78) return QObject::tr("Kurve");
    if (idx == 79) return QObject::tr("Fluchtpunkt");

    if (idx == 80) return QObject::tr("Bearbeitungswerkzeug");
    if (idx == 81) return QObject::tr("Teilungswerkzeug");
    if (idx == 82) return QObject::tr("Unterschneiden");
    if (idx == 83) return QObject::tr("Führen");

    if (idx == 85) return QObject::tr("Aus der Mitte wählen");
    if (idx == 86) return QObject::tr("Proportionen beschränken");
  }

  if (man->TranslateFrench())
  {
    if (idx == 1) return QObject::tr("Outil Pinceau");
    if (idx == 2) return QObject::tr("Outil Point");
    if (idx == 3) return QObject::tr("Outil Gomme");
    if (idx == 4) return QObject::tr("Outil Déplacer");
    if (idx == 5) return QObject::tr("Outil Pot de peinture");
    if (idx == 6) return QObject::tr("Outil Dégradé");
    if (idx == 7) return QObject::tr("Outil Remplissage");
    if (idx == 8) return QObject::tr("Outil Sélection");
    if (idx == 9) return QObject::tr("Outil Baguette magique");
    if (idx == 10) return QObject::tr("Outil Sélection du crayon");
    if (idx == 11) return QObject::tr("Outil Sélection de la gomme");
    if (idx == 12) return QObject::tr("Outil Texte");
    if (idx == 13) return QObject::tr("Outil Pipette");
    if (idx == 14) return QObject::tr("Outil Main");

    if (idx == 15) return QObject::tr("Désaligner");
    if (idx == 16) return QObject::tr("Alignement parallèle");
    if (idx == 17) return QObject::tr("Alignement axial");
    if (idx == 18) return QObject::tr("Alignement radial");
    if (idx == 19) return QObject::tr("Paramètre d'alignement");

    if (idx == 20) return QObject::tr("Anticrénelage");
    if (idx == 21) return QObject::tr("Correction");
    if (idx == 22) return QObject::tr("Angle arrondi");
    if (idx == 23) return QObject::tr("Opacité");
    if (idx == 24) return QObject::tr("Référence");
    if (idx == 25) return QObject::tr("Zone de travail");
    if (idx == 26) return QObject::tr("Masque");
    if (idx == 27) return QObject::tr("Dilater");
    if (idx == 28) return QObject::tr("Forme");
    if (idx == 29) return QObject::tr("Type");
    if (idx == 30) return QObject::tr("Linéaire");
    if (idx == 31) return QObject::tr("Circulaire");
    if (idx == 32) return QObject::tr("Premier plan-Arrière-plan");
    if (idx == 33) return QObject::tr("Premier plan");
    if (idx == 34) return QObject::tr("Rectangle");
    if (idx == 35) return QObject::tr("Ellipse");
    if (idx == 36) return QObject::tr("Polygone");
    if (idx == 37) return QObject::tr("Aucune option");
    if (idx == 38) return QObject::tr("Lasso");

    if (idx == 40) return QObject::tr("Couleur");
    if (idx == 41) return QObject::tr("Option du pinceau");
    if (idx == 42) return QObject::tr("Pinceau");
    if (idx == 43) return QObject::tr("Navigateur");
    if (idx == 44) return QObject::tr("Masque");
    if (idx == 45) return QObject::tr("Aperçu du pinceau");
    if (idx == 46) return QObject::tr("Palette");

    if (idx == 50) return QObject::tr("(Faire basculer)");
    if (idx == 51) return QObject::tr("Le fichier n'existe pas.");
    if (idx == 52)
    {
      QString s = QObject::tr("%1 est déjà ouvert. Voulez-vous continuer ?");
      s.replace( "%1", man->StrParam() );
      return s;
    }
    if (idx == 54) return QObject::tr("Alignement du point de fuite");
    if (idx == 55) return QObject::tr("Ouvrir une image");
    if (idx == 56) return QObject::tr("Image");

    if (idx == 60) return QObject::tr("Dilater");
    if (idx == 61) return QObject::tr("Contracter");
    if (idx == 62) return QObject::tr("Voulez-vous initialiser la position d'une fenêtre ?");
    if (idx == 63) return QObject::tr("Annuler");
    if (idx == 64) return QObject::tr("Rétablir");
    if (idx == 65) return QObject::tr("Aligner");
    if (idx == 66) return QObject::tr("Le programme va se fermer afin de mettre à jour les paramètres linguistiques. Veuillez redémarrer le programme après sa fermeture.");
    if (idx == 67) return QObject::tr("Impossible d'ouvrir");
    if (idx == 68) return QObject::tr("Seuil");

    if (idx == 70) return QObject::tr("Échec de l'obtention d'une imprimante");
    if (idx == 71) return QObject::tr("Soft Edge");
    if (idx == 72) return QObject::tr("Sans-titre");
    if (idx == 73) return QObject::tr("Sélectionner un calque au point désigné");

    if (idx == 75) return QObject::tr("Parallèle");
    if (idx == 76) return QObject::tr("Radial");
    if (idx == 77) return QObject::tr("Cercle");
    if (idx == 78) return QObject::tr("Courbe");
    if (idx == 79) return QObject::tr("Point de fuite");

    if (idx == 80) return QObject::tr("Outil opération");
    if (idx == 81) return QObject::tr("Outil division");
    if (idx == 82) return QObject::tr("Crénage");
    if (idx == 83) return QObject::tr("Interlignage");

    if (idx == 85) return QObject::tr("Choisir à partir du centre");
    if (idx == 86) return QObject::tr("Fixer les proportions");
  }

  if (man->TranslateRussian())
  {
    if (idx == 1) return QObject::tr("Инструмент КИСТЬ");
    if (idx == 2) return QObject::tr("Инструмент ТОЧЕЧНАЯ КИСТЬ");
    if (idx == 3) return QObject::tr("Инструмент ЛАСТИК");
    if (idx == 4) return QObject::tr("Инструмент ПЕРЕМЕЩЕНИЕ");
    if (idx == 5) return QObject::tr("Инструмент ВЕДРО");
    if (idx == 6) return QObject::tr("Инструмент ГРАДИЕНТ ");
    if (idx == 7) return QObject::tr("Инструмент ЗАЛИВКА");
    if (idx == 8) return QObject::tr("Инструмент ВЫДЕЛЕНИЕ");
    if (idx == 9) return QObject::tr("Инструмент ВОЛШЕБНАЯ ПАЛОЧКА");
    if (idx == 10) return QObject::tr("Инструмент ВЫБОР ПЕРА");
    if (idx == 11) return QObject::tr("Инструмент ВЫБОР ЛАСТИКА");
    if (idx == 12) return QObject::tr("Инструмент ТЕКСТ");
    if (idx == 13) return QObject::tr("Инструмент ПИПЕТКА");
    if (idx == 14) return QObject::tr("Инструмент РУКА");

    if (idx == 15) return QObject::tr("Снэппинг отключен");
    if (idx == 16) return QObject::tr("Параллельный снэппинг");
    if (idx == 17) return QObject::tr("Перекрестный снэппинг");
    if (idx == 18) return QObject::tr("Радиальный снэппинг");
    if (idx == 19) return QObject::tr("Настройки снэппинга");

    if (idx == 20) return QObject::tr("Сглаживание");
    if (idx == 21) return QObject::tr("Коррекция");
    if (idx == 22) return QObject::tr("Скругление углов");
    if (idx == 23) return QObject::tr("Непрозрачность");
    if (idx == 24) return QObject::tr("Ссылка");
    if (idx == 25) return QObject::tr("Холст");
    if (idx == 26) return QObject::tr("Слой");
    if (idx == 27) return QObject::tr("Расширить");
    if (idx == 28) return QObject::tr("Форма");
    if (idx == 29) return QObject::tr("Текст");
    if (idx == 30) return QObject::tr("Линейный");
    if (idx == 31) return QObject::tr("Круговой");
    if (idx == 32) return QObject::tr("Передний план - фон");
    if (idx == 33) return QObject::tr("Передний план");
    if (idx == 34) return QObject::tr("Прямоугольник");
    if (idx == 35) return QObject::tr("Эллипс");
    if (idx == 36) return QObject::tr("Многоугольник");
    if (idx == 37) return QObject::tr("Нет варианта");
    if (idx == 38) return QObject::tr("Лассо");

    if (idx == 40) return QObject::tr("Цвет");
    if (idx == 41) return QObject::tr("Параметры кисти");
    if (idx == 42) return QObject::tr("Кисть");
    if (idx == 43) return QObject::tr("Навигатор");
    if (idx == 44) return QObject::tr("Слой");
    if (idx == 45) return QObject::tr("Предварительный просмотр кисти");
    if (idx == 46) return QObject::tr("Палитра");
    if (idx == 47) return QObject::tr("Модель");

    if (idx == 50) return QObject::tr("(Отразить)");
    if (idx == 51) return QObject::tr("Файл не существует.");
    if (idx == 52)
    {
      QString s = QObject::tr("%1 уже открыт. Продолжить?");
      s.replace( "%1", man->StrParam() );
      return s;
    }
    if (idx == 54) return QObject::tr("Исправление перспективы");
    if (idx == 55) return QObject::tr("Открыть изображение");
    if (idx == 56) return QObject::tr("Изображения");

    if (idx == 60) return QObject::tr("Расширить");
    if (idx == 61) return QObject::tr("Сжать");
    if (idx == 62) return QObject::tr("Инициализировать положение окна?");
    if (idx == 63) return QObject::tr("Отменить");
    if (idx == 64) return QObject::tr("Восстановить");
    if (idx == 65) return QObject::tr("Линейка");
    if (idx == 66) return QObject::tr("Для обновления настроек языка программа будет закрыта. Перезапустите программу после закрытия.");
    if (idx == 67) return QObject::tr("Не удалось открыть");
    if (idx == 68) return QObject::tr("Изогелия");

    if (idx == 70) return QObject::tr("Не удалось определить принтер");
    if (idx == 71) return QObject::tr("Размытый край"); // ソフトエッジ
    if (idx == 72) return QObject::tr("Без названия");
    if (idx == 73) return QObject::tr("Выберите слой в точке клика");

    if (idx == 75) return QObject::tr("Параллельный");
    if (idx == 76) return QObject::tr("Радиальный");
    if (idx == 77) return QObject::tr("Круговой");
    if (idx == 78) return QObject::tr("Кривая");
    if (idx == 79) return QObject::tr("Исправление перспективы");

    if (idx == 80) return QObject::tr("Рабочий инструмент");
    if (idx == 81) return QObject::tr("Инструмент разделения");
    if (idx == 82) return QObject::tr("Кернинг");
    if (idx == 83) return QObject::tr("Интерлиньяж");

    if (idx == 85) return QObject::tr("Выбрать из центра");
    if (idx == 86) return QObject::tr("Сохранять пропорции");

    if (idx == 87) return QObject::tr("Для обновления настроек программа будет закрыта. Перезапустите программу после закрытия");

    if (idx == 88) return QObject::tr("Прочее");
    if (idx == 89) return QObject::tr("Увеличить размер кисти");
    if (idx == 90) return QObject::tr("Уменьшить размер кисти");
    if (idx == 91) return QObject::tr("Недопустимый MDP файл");
    if (idx == 92) return QObject::tr("%1 не может быть открыт так как не является MDP файлом");
    if (idx == 93) return QObject::tr("Файл уже существует");
    if (idx == 94) return QObject::tr("Открыть \"AlpacaDouga\", сервис для создания анимации GIF, в браузере?");
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 1) return QObject::tr("Brush Tool"); // ブラシツール
  if (idx == 2) return QObject::tr("Dot Tool"); // ドットツール
  if (idx == 3) return QObject::tr("Eraser Tool"); // 消しゴムツール
  if (idx == 4) return QObject::tr("Move Tool"); // 移動ツール
  if (idx == 5) return QObject::tr("Bucket Tool"); // バケツツール
  if (idx == 6) return QObject::tr("Gradient Tool"); // グラデーションツール
  if (idx == 7) return QObject::tr("Fill Tool"); // 塗りつぶしツール
  if (idx == 8) return QObject::tr("Select Tool"); // 選択ツール
  if (idx == 9) return QObject::tr("MagicWand Tool"); // 自動選択ツール
  if (idx == 10) return QObject::tr("SelectPen Tool"); // 選択ペンツール
  if (idx == 11) return QObject::tr("SelectEraser Tool"); // 選択消しツール
  if (idx == 12) return QObject::tr("Text Tool"); // テキストツール
  if (idx == 13) return QObject::tr("Eyedropper Tool"); // スポイトツール
  if (idx == 14) return QObject::tr("Hand Tool"); // 手のひらツール

  if (idx == 15) return QObject::tr("Snap Off"); // スナップ・オフ [スナップしない]
  if (idx == 16) return QObject::tr("Parallel Snap"); // 並行スナップ
  if (idx == 17) return QObject::tr("Crisscross Snap"); // 十字スナップ
  if (idx == 18) return QObject::tr("Radial Snap"); // 集中線スナップ
  if (idx == 19) return QObject::tr("Snap Setting"); // スナップ設定 [スナップ設定を開始する]

  if (idx == 20) return QObject::tr("Anti-aliasing"); // アンチエイリアス
  if (idx == 21) return QObject::tr("Stabilizer"); // 手ぶれ補正 [ブラシの補正]
  if (idx == 22) return QObject::tr("RoundCorner"); // 角丸 [矩形の角を丸める処理]
  if (idx == 23) return QObject::tr("Opacity"); // 不透明度
  if (idx == 24) return QObject::tr("Reference"); // 参照 [レイヤーの参照]
  if (idx == 25) return QObject::tr("Canvas"); // キャンバス [レイヤーの参照対象]
  if (idx == 26) return QObject::tr("Active Layer");  // アクティブレイヤー [レイヤーの参照対象]
  if (idx == 27) return QObject::tr("Expand"); // 拡張 [自動選択やバケツ塗りつぶしの拡張処理]
  if (idx == 28) return QObject::tr("Shape"); // 形状 [グラデーションの形状]
  if (idx == 29) return QObject::tr("Type");  // タイプ [グラデーションの型]
  if (idx == 30) return QObject::tr("Linear"); // 線形 [グラデーションの形状]
  if (idx == 31) return QObject::tr("Circular"); // 円形 [グラデーションの形状]
  if (idx == 32) return QObject::tr("Foreground-Background"); // 前景～背景 [グラデーションの型]
  if (idx == 33) return QObject::tr("Foreground"); // 前景 [グラデーションの型]
  if (idx == 34) return QObject::tr("Rectangle"); // 矩形 [塗りつぶしの形状]
  if (idx == 35) return QObject::tr("Ellipse"); // 楕円 [塗りつぶしの形状]
  if (idx == 36) return QObject::tr("Polygon"); // 多角形 [塗りつぶしの形状]
  if (idx == 37) return QObject::tr("No Option"); // 設定なし [設定がないツール用のパネルで表示する文字列]
  if (idx == 38) return QObject::tr("Lasso"); // 投げ縄 [選択範囲の取り方]
  if (idx == 39) return QObject::tr("Lasso Tool"); // 投げ縄ツール

  if (idx == 40) return QObject::tr("Color"); // 色 [ウィンドウのキャプション]
  if (idx == 41) return QObject::tr("Brush Control"); // ブラシコントロール [ウィンドウのキャプション]
  if (idx == 42) return QObject::tr("Brush"); // ブラシ [ウィンドウのキャプション]
  if (idx == 43) return QObject::tr("Navigator"); // ナビゲータ [ウィンドウのキャプション]
  if (idx == 44) return QObject::tr("Layer"); // レイヤー [ウィンドウのキャプション]
  if (idx == 45) return QObject::tr("Brush Preview"); // ブラシプレビュー [ウィンドウのキャプション]
  if (idx == 46) return QObject::tr("Palette"); // パレット [ウィンドウのキャプション]
  if (idx == 47) return QObject::tr("Reference"); // 資料 [ウィンドウのキャプション]
  if (idx == 48) return QObject::tr("Brush Size"); // ブラシサイズ [ウィンドウのキャプション]

  if (idx == 50) return QObject::tr("(Flip)"); // 反転 [表示の左右反転]
  if (idx == 51) return QObject::tr("File does not exist"); // ファイルは存在しません
  if (idx == 52)
  {
    // xx は既に開いていますが、続行しますか？
    QString s = QObject::tr("%1 is already opened, proceed?");
    s.replace( "%1", man->StrParam() );
    return s;
  }
  if (idx == 54) return QObject::tr("Vanishing Point Snap");
  if (idx == 55) return QObject::tr("Open Image");
  if (idx == 56) return QObject::tr("Images");
  if (idx == 57) return QObject::tr("Circle Snap");
  if (idx == 58) return QObject::tr("Curve Snap");

  if (idx == 60) return QObject::tr("Expand");
  if (idx == 61) return QObject::tr("Contract");
  if (idx == 62) return QObject::tr("Initialize a window position?");
  if (idx == 63) return QObject::tr("Undo");
  if (idx == 64) return QObject::tr("Redo");
  if (idx == 65) return QObject::tr("Snap");
  if (idx == 66) return QObject::tr("In order to update the language setting, the program will be closed.  Please restart the program after closing.");
  if (idx == 67) return QObject::tr("Failed to open");
  if (idx == 68) return QObject::tr("Threshold");

  if (idx == 70) return QObject::tr("Failed to obtain the printer.");
  if (idx == 71) return QObject::tr("Soft Edge");
  if (idx == 72) return QObject::tr("Untitled");
  if (idx == 73) return QObject::tr("Select a layer at the clicked point");

  if (idx == 75) return QObject::tr("Parallel");
  if (idx == 76) return QObject::tr("Radial");
  if (idx == 77) return QObject::tr("Circle");
  if (idx == 78) return QObject::tr("Curve");
  if (idx == 79) return QObject::tr("Vanishing Point");

  if (idx == 80) return QObject::tr("Operation Tool");
  if (idx == 81) return QObject::tr("Divide Tool");
  if (idx == 82) return QObject::tr("Kerning");
  if (idx == 83) return QObject::tr("Leading");

  if (idx == 85) return QObject::tr("Select From Center");
  if (idx == 86) return QObject::tr("Constrain Proportions");

  if (idx == 87) return QObject::tr("In order to update the shortcut setting, the program will be closed.  Please restart the program after closing.");

  if (idx == 88) return QObject::tr("Others");
  if (idx == 89) return QObject::tr("Increase Brush Size");
  if (idx == 90) return QObject::tr("Decrease Brush Size");
  if (idx == 91) return QObject::tr("Invalid MDP file");
  if (idx == 92) return QObject::tr("%1 could not be opened because it isn’t a valid MDP file.");
  if (idx == 93) return QObject::tr("File already exists");
  if (idx == 94) return QObject::tr("Open \"AlpacaDouga\", the animated GIF convert service, in a browser?");
  if (idx == 95) return QObject::tr("Transparent the background?");
  if (idx == 96) return QObject::tr("Create a folder?");

  if (idx == 110) return QObject::tr("Freehand");
  if (idx == 111) return QObject::tr("Line");
  if (idx == 112) return QObject::tr("Polyline");
  if (idx == 113) return QObject::tr("Polygon");
  if (idx == 114) return QObject::tr("Rectangle");
  if (idx == 115) return QObject::tr("Ellipse");
  if (idx == 116) return QObject::tr("Curve");
  if (idx == 117) return QObject::tr("Shape");

  if (idx == 120) return QObject::tr("3D Perspective Snap");
  if (idx == 122) return QObject::tr("Deselect");
  if (idx == 123) return QObject::tr("Snap to grid");
  if (idx == 124) return QObject::tr("Ignore Layer Color");
  if (idx == 125) return QObject::tr("Ignore Draft Layer");

  if (idx == 130) return QObject::tr("Auto Saving...");
  if (idx == 131) return QObject::tr("Auto Save Done");
  if (idx == 132) return QObject::tr("Auto Save Disabled (Insufficient Memory)\n\nThe stability of the application is significantly reduced");
  if (idx == 133) return QObject::tr("Recover Auto Saved Image?");

  if (idx == 135) return QObject::tr("Failed to post to pixiv Sketch");

  if (idx == 140) return QObject::tr("Round a corner");

  if (idx == 150) return QObject::tr("Round a corner, Keep line width");

  if (idx == 160) return QObject::tr("Close the gap");
  if (idx == 162) return QObject::tr("Tolerance");
  if (idx == 163) return QObject::tr("Transparent-Foreground");
  if (idx == 164) return QObject::tr("Custom");

  if (idx == 170) return QObject::tr("Determine by Each Drag");
  if (idx == 171) return QObject::tr("Determine Position");
  if (idx == 172) return QObject::tr("Zero Pressure on Both Ends");

  if (idx == 180) return QObject::tr("Import Palette File");
  if (idx == 181) return QObject::tr("Export Palette File");
  if (idx == 182) return QObject::tr("FireAlpaca Palette (*.fap);;FireAlpaca Palette (*.fap)");

  if (idx == 190) return QObject::tr("Transform");
  if (idx == 191) return QObject::tr("Free Transform");
  if (idx == 192) return QObject::tr("Mesh Transform");

  if (idx == 200) return QObject::tr("Bilateral ");
  if (idx == 201) return QObject::tr("Vertical");
  if (idx == 202) return QObject::tr("Rotate");
  if (idx == 203) return QObject::tr(" (Mirror)");
  if (idx == 204) return QObject::tr("Tile");
  if (idx == 205) return QObject::tr("Symmetry");

  return "";
}
