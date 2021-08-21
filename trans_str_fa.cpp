/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_fa.h"

///////////////////////////////////////////////////////////////////////////
// - FireAlpaca固有の文字列
// - FireAlpaca-specific strings.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrFA( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("本当にブラシを初期化しますか？");

    // アルパカボタン
    if (idx == 10) return QObject::tr("アルパカゲット公開設定");
    if (idx == 11) return QObject::tr("公開期限");
    if (idx == 12) return QObject::tr("3分間");
    if (idx == 13) return QObject::tr("3時間");
    if (idx == 14) return QObject::tr("3日間");
    if (idx == 15) return QObject::tr("33日間");
    if (idx == 16) return QObject::tr("共有に必要なメモリが確保できません");
    if (idx == 17) return QObject::tr("背景を透過させる");
    if (idx == 20) return QObject::tr("画像をアルパカゲットに投稿中...");
    if (idx == 21) return QObject::tr("投稿完了");
    if (idx == 30) return QObject::tr("レイヤーをクリア (全消し)");
    if (idx == 31) return QObject::tr("アルパカゲットで画像を共有...");
    if (idx == 32) return QObject::tr("アルパカゲットのウェブサイトを開く...");
    if (idx == 33) return QObject::tr("前景色を適用");
    if (idx == 34) return QObject::tr("pixiv Sketch に投稿...");
    if (idx == 35) return QObject::tr("pixiv Sketch のウェブサイトを開く...");
    if (idx == 36) return QObject::tr("pixiv Sketch 投稿設定");
    if (idx == 37) return QObject::tr("以下のサイズ内に収めて投稿");
    if (idx == 38) return QObject::tr("投稿の準備が整っていません。ネットワーク接続を確認し、時間をおいて再度お試しください。　[firealpaca.com] に障害が発生している可能性もあります。");
    if (idx == 39) return QObject::tr("キャンバス画像を投稿する");
    if (idx == 40) return QObject::tr("ワークスペース画像を投稿する");
    if (idx == 41) return QObject::tr("ワークスペース画像を保存...");

    // 書き出し
    if (idx == 100) return QObject::tr("書き出し設定");
    if (idx == 101) return QObject::tr("以下のサイズ内に収めて保存");
    if (idx == 102) return QObject::tr("ファイル形式");
    if (idx == 103) return QObject::tr("画像の書き出し");
    if (idx == 104) return QObject::tr("ラスタライズして書き出します。");
    if (idx == 105) return QObject::tr("解像度を変更する");

    // カラーマネジメント設定
    if (idx == 800) return QObject::tr("カラーマネジメント設定");
    if (idx == 801) return QObject::tr("有効にする");
    if (idx == 802) return QObject::tr("CMYKソフトプルーフ");
    if (idx == 803) return QObject::tr("RGBプロファイル");
    if (idx == 804) return QObject::tr("CMYKプロファイル");
    if (idx == 805) return QObject::tr("RGBプロファイルを選択");
    if (idx == 806) return QObject::tr("CMYKプロファイルを選択");
    if (idx == 807) return QObject::tr("ディスプレイプロファイル");
    if (idx == 808) return QObject::tr("レンダリングインテント");
    if (idx == 809) return QObject::tr("知覚的");
    if (idx == 810) return QObject::tr("彩度");
    if (idx == 811) return QObject::tr("相対的な色域を保持");
    if (idx == 812) return QObject::tr("絶対的な色域を保持");
    if (idx == 813) return QObject::tr("黒点の補正");
    if (idx == 814) return QObject::tr("ICCプロファイル検索対象フォルダを開く (起動時に列挙します)");
    if (idx == 815) return QObject::tr("ディスプレイの色調整を行い、ディスプレイにICCプロファイルを結びつける必要があります");
    if (idx == 816) return QObject::tr("モニターのプロファイルを使用する");

    // ブラシサイズ
    if (idx == 900) return QObject::tr("ブラシサイズの編集");
    if (idx == 901) return QObject::tr("ブラシサイズの初期化");

    // PSD保存
    if (idx == 1700) return QObject::tr("PSD保存設定");
    if (idx == 1701) return QObject::tr("アルファチャンネルを保存しない (24bpp保存)");

    // グリッド設定
    if (idx == 1800) return QObject::tr("グリッド設定");
    if (idx == 1801) return QObject::tr("幅");
    if (idx == 1802) return QObject::tr("高さ");
    if (idx == 1803) return QObject::tr("分割数");

    // ブラシスクリプト編集
    if (idx == 2000) return QObject::tr("ブラシスクリプトエディタ");
    if (idx == 2001) return QObject::tr("サンプル読み込み");
    if (idx == 2002) return QObject::tr("現在のブラシをインポート");
    if (idx == 2003) return QObject::tr("名前を付けて保存 (実行可能スクリプトのみ)");
    if (idx == 2004) return QObject::tr("実行");
    if (idx == 2005) return QObject::tr("ファイルからインポート");
    if (idx == 2006) return QObject::tr("ファイルを選択");
    if (idx == 2007) return QObject::tr("");
    if (idx == 2008) return QObject::tr("");
    if (idx == 2009) return QObject::tr("");
    if (idx == 2010) return QObject::tr("サンプル 1 (シンプル)");
    if (idx == 2011) return QObject::tr("サンプル 2 (間隔)");
    if (idx == 2012) return QObject::tr("サンプル 3 (三角形)");
    if (idx == 2013) return QObject::tr("サンプル 4 (ペン)");
    if (idx == 2020) return QObject::tr("本当にスクリプトを読み込みますか？");
    if (idx == 2021) return QObject::tr("");
    if (idx == 2022) return QObject::tr("幅");
    if (idx == 2023) return QObject::tr("ブラシスクリプト (*.bs)");
    if (idx == 2024) return QObject::tr("ブラシスクリプトをファイルに保存");
    if (idx == 2025) return QObject::tr("サンプル 5 (デバッグ出力)");
    if (idx == 2026) return QObject::tr("サンプル 6 (last() 関数)");
    if (idx == 2027) return QObject::tr("サンプル 7 (インターバル)");

    // ブラシメニュー
    if (idx == 2100) return QObject::tr("ブラシ(&B)");
    if (idx == 2101) return QObject::tr("前のブラシ");
    if (idx == 2102) return QObject::tr("次のブラシ");
    if (idx == 2103) return QObject::tr("前のサイズ");
    if (idx == 2104) return QObject::tr("次のサイズ");
    if (idx == 2105) return QObject::tr("ブラシスクリプトエディタ..."); // Brush Script Editor
    if (idx == 2106) return QObject::tr("基点を初期化する");
    if (idx == 2107) return QObject::tr("ブラシストアからブラシを追加...");

    // その他
    if (idx == 2200) return QObject::tr("(全体設定)");
    if (idx == 2201) return QObject::tr("全体設定を使う");

    // カラーウィンドウ
    if (idx == 2300) return QObject::tr("コピー");
    if (idx == 2301) return QObject::tr("貼り付け");

    // 資料ウィンドウ
    if (idx == 2400) return QObject::tr("ファイルから取り込む...");
    if (idx == 2401) return QObject::tr("クリップボードから取り込む");

    // ブラシプリセット
    if (idx == 2500) return QObject::tr("プリセットブラシを選択");
    if (idx == 2501) return QObject::tr("名前");

    // オニオンスキン
    if (idx == 2600) return QObject::tr("高品質出力");
    if (idx == 2601) return QObject::tr("キャッシュ済み");
    if (idx == 2602) return QObject::tr("再生する");

    // APNG/アニメーションGIF
    if (idx == 2700) return QObject::tr("APNG設定");
    if (idx == 2701) return QObject::tr("背景を透過させる");
    if (idx == 2702) return QObject::tr("アニメーションGIF設定");
    if (idx == 2703) return QObject::tr("無限ループ");
    if (idx == 2704) return QObject::tr("ループ回数");

    // ブラシストア
    if (idx == 2800) return QObject::tr("ブラシストア");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 2200) return QObject::tr("(全局设置)");
    if (idx == 2201) return QObject::tr("使用全局设置");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 2200) return QObject::tr("(全局設置)");
    if (idx == 2201) return QObject::tr("使用全局設置");
  }

  if (man->TranslateKorean())
  {
    if (idx == 2200) return QObject::tr("(전체 설정)");
    if (idx == 2201) return QObject::tr("전체 설정을 사용");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 2200) return QObject::tr("(Configurações globais)");
    if (idx == 2201) return QObject::tr("Use configurações globais");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 2200) return QObject::tr("(Configuraciones globales)");
    if (idx == 2201) return QObject::tr("Usar configuraciones globales");
  }

  if (man->TranslateGerman())
  {
    if (idx == 2200) return QObject::tr("(Globale Einstellungen)");
    if (idx == 2201) return QObject::tr("Globale Einstellungen"); // 「を使う」を省略
  }

  if (man->TranslateFrench())
  {
    if (idx == 2200) return QObject::tr("(Paramètres globaux)");
    if (idx == 2201) return QObject::tr("Paramètres globaux"); // 「を使う」を省略
  }

  if (man->TranslateRussian())
  {
    if (idx == 2200) return QObject::tr("(Глобальные настройки)");
    if (idx == 2201) return QObject::tr("Глобальные настройки"); // 「を使う」を省略
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Are you sure you want to initialize the brush?");

  if (idx == 10) return QObject::tr("AlpacaGet Settings");
  if (idx == 11) return QObject::tr("Publication Duration");
  if (idx == 12) return QObject::tr("3 minutes");
  if (idx == 13) return QObject::tr("3 hours");
  if (idx == 14) return QObject::tr("3 days");
  if (idx == 15) return QObject::tr("33 days");
  if (idx == 16) return QObject::tr("Failed to allocate memory for share.");
  if (idx == 17) return QObject::tr("Transparent Background");
  if (idx == 20) return QObject::tr("Posting image to AlpacaGET...");
  if (idx == 21) return QObject::tr("Done");
  if (idx == 30) return QObject::tr("Clear Layer");
  if (idx == 31) return QObject::tr("Share Image on AlpacaGET ...");
  if (idx == 32) return QObject::tr("Open AlpacaGET\'s Website ...");
  if (idx == 33) return QObject::tr("Apply Foreground Color");
  if (idx == 34) return QObject::tr("Post to pixiv Sketch...");
  if (idx == 35) return QObject::tr("Open pixiv Sketch\'s Website ...");
  if (idx == 36) return QObject::tr("pixiv Sketch Post Settings");
  if (idx == 37) return QObject::tr("Fits in the following size");
  if (idx == 38) return QObject::tr("Your post is not ready. Please check your network connection and try again later. [firealpaca.com] may also be at fault.");
  if (idx == 39) return QObject::tr("Post a Canvas Image");
  if (idx == 40) return QObject::tr("Post a Workspace Image");
  if (idx == 41) return QObject::tr("Save a Workspace Image...");

  if (idx == 100) return QObject::tr("Export Settings");
  if (idx == 101) return QObject::tr("Fits in the following size");
  if (idx == 102) return QObject::tr("File Format");
  if (idx == 103) return QObject::tr("Export Image");
  if (idx == 104) return QObject::tr("Rasterizes and exports image.");
  if (idx == 105) return QObject::tr("Change Resolution");

  if (idx == 800) return QObject::tr("Color Management Settings");
  if (idx == 801) return QObject::tr("Enable");
  if (idx == 802) return QObject::tr("CMYK Soft Proof");
  if (idx == 803) return QObject::tr("RGB Profile");
  if (idx == 804) return QObject::tr("CMYK Profile");
  if (idx == 805) return QObject::tr("Select RGB Profile");
  if (idx == 806) return QObject::tr("Select CMYK Profile");
  if (idx == 807) return QObject::tr("Display Profile");
  if (idx == 808) return QObject::tr("Rendering Intent");
  if (idx == 809) return QObject::tr("Perceptual");
  if (idx == 810) return QObject::tr("Saturation");
  if (idx == 811) return QObject::tr("Relative Colormetric");
  if (idx == 812) return QObject::tr("Absolute Colormetric");
  if (idx == 813) return QObject::tr("Black Point Compensation");
  if (idx == 814) return QObject::tr("Open ICC Profile search target folder (Enumerate when launching)");
  if (idx == 815) return QObject::tr("It is necessary to adjust the color of the display and link the ICC profile to the display");
  if (idx == 816) return QObject::tr("Use Monitor Profile");

  if (idx == 900) return QObject::tr("Edit Brush Size");
  if (idx == 901) return QObject::tr("Initialize Brush Size");

  if (idx == 1700) return QObject::tr("Save PSD Settings");
  if (idx == 1701) return QObject::tr("Do not save alpha channel (24bpp)");

  if (idx == 1800) return QObject::tr("Grid Settings");
  if (idx == 1801) return QObject::tr("Width");
  if (idx == 1802) return QObject::tr("Height");
  if (idx == 1803) return QObject::tr("Subdivisions");

  if (idx == 2000) return QObject::tr("Brush Script Editor");
  if (idx == 2001) return QObject::tr("Sample script");
  if (idx == 2002) return QObject::tr("Import current brush");
  if (idx == 2003) return QObject::tr("Save as　(Executable script only)");
  if (idx == 2004) return QObject::tr("Execute");
  if (idx == 2005) return QObject::tr("Import from file");
  if (idx == 2006) return QObject::tr("Select File");
  if (idx == 2007) return QObject::tr("");
  if (idx == 2008) return QObject::tr("");
  if (idx == 2009) return QObject::tr("");
  if (idx == 2010) return QObject::tr("Sample 1 (Simple main)");
  if (idx == 2011) return QObject::tr("Sample 2 (Interval)");
  if (idx == 2012) return QObject::tr("Sample 3 (Triangle)");
  if (idx == 2013) return QObject::tr("Sample 4 (Pen)");
  if (idx == 2020) return QObject::tr("Are you sure to import script?");
  if (idx == 2021) return QObject::tr("");
  if (idx == 2022) return QObject::tr("Width");
  if (idx == 2023) return QObject::tr("Brush Script (*.bs)");
  if (idx == 2024) return QObject::tr("Save Brush Script File");
  if (idx == 2025) return QObject::tr("Sample 5 (Debug Output)");
  if (idx == 2026) return QObject::tr("Sample 6 (last() function)");
  if (idx == 2027) return QObject::tr("Sample 7 (Interval)");

  if (idx == 2100) return QObject::tr("Brush");
  if (idx == 2101) return QObject::tr("Previous Brush");
  if (idx == 2102) return QObject::tr("Next Brush");
  if (idx == 2103) return QObject::tr("Previous Size");
  if (idx == 2104) return QObject::tr("Next Size");
  if (idx == 2105) return QObject::tr("Brush Script Editor...");
  if (idx == 2106) return QObject::tr("Initialize Base Point");
  if (idx == 2107) return QObject::tr("Add a Brush from the Brush Store...");

  if (idx == 2200) return QObject::tr("(Global settings)");
  if (idx == 2201) return QObject::tr("Use global settings");

  if (idx == 2300) return QObject::tr("Copy");
  if (idx == 2301) return QObject::tr("Paste");

  if (idx == 2400) return QObject::tr("Import from File...");
  if (idx == 2401) return QObject::tr("Import from Clipboard");

  if (idx == 2500) return QObject::tr("Select Preset Brush");
  if (idx == 2501) return QObject::tr("Name");

  if (idx == 2600) return QObject::tr("High Quality Output");
  if (idx == 2601) return QObject::tr("Cached");
  if (idx == 2602) return QObject::tr("Play");

  if (idx == 2700) return QObject::tr("APNG Settings");
  if (idx == 2701) return QObject::tr("Make the background transparent");
  if (idx == 2702) return QObject::tr("Animated GIF Settings");
  if (idx == 2703) return QObject::tr("Infinite Loop");
  if (idx == 2704) return QObject::tr("Loop Count");

  if (idx == 2800) return QObject::tr("Brush Store");

  return "";
}
