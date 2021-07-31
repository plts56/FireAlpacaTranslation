/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_help.h"

///////////////////////////////////////////////////////////////////////////
// - ヘルプメニューで使用される文字列
// - A string used in the help menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuHelp( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("設定フォルダを開く(&C)...");
    if (idx == 1) return QObject::tr("プリセットブラシを復元...");
    if (idx == 2) return QObject::tr("マルチスレッド処理による高速化");
    if (idx == 3) return QObject::tr("ブラシ処理を独立したスレッドで行う (ベータ)");
    if (idx == 4) return QObject::tr("ブラシ描画時の表示更新の最適化");
    if (idx == 5) return QObject::tr("MDPファイルの高速保存");

    if (idx == 114) return QObject::tr("公式サポートサイト");
    if (idx == 115) return QObject::tr("使い方講座");
    if (idx == 116) return QObject::tr("お問い合わせ");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("打开设定档案(&C)...");
    if (idx == 1) return QObject::tr("恢复笔刷默认值...");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("打開設定檔案(&C)...");
    if (idx == 1) return QObject::tr("復原為筆刷預設值...");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("설정 폴더 열기(&C)...");
    if (idx == 1) return QObject::tr("프리셋 브러시를 복원...");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Abrir Pasta de Config(&C)...");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Abrir carpeta de configuración(&C)...");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Einstellungsdatei öffnen(&C)...");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Ouvrir le dossier de configuration(&C)...");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Открыть папку с настройками(&C)...");
  }

  if (idx == 0) return QObject::tr("Open Config Folder(&C)...");
  if (idx == 1) return QObject::tr("Restore Preset Brushes...");
  if (idx == 2) return QObject::tr("Optimize with Multi-Thread Processing");
  if (idx == 3) return QObject::tr("Brushing in a separate thread (Beta)"); //
  if (idx == 4) return QObject::tr("Optimizing Brush Display Updates"); //
  if (idx == 5) return QObject::tr("Fast Saving of MDP Files"); //

  if (idx == 114) return QObject::tr("Official Support Website");
  if (idx == 115) return QObject::tr("Tutorials");
  if (idx == 116) return QObject::tr("Contact Us");

  return "";
}
