/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_shortcut.h"

///////////////////////////////////////////////////////////////////////////
// - キーボードショートカットウィンドウで使用される文字列
// - String used in the keyboard shortcut window.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrShortcut( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("ショートカット設定");
    if (idx == 1) return QObject::tr("ショートカットキーを入力してください");
    if (idx == 2) return QObject::tr("キーが重複しています");
    if (idx == 3) return QObject::tr("優先して上書き");
    if (idx == 4) return QObject::tr("編集");
    if (idx == 5) return QObject::tr("クリア");
    if (idx == 6) return QObject::tr("初期化");
    if (idx == 7) return QObject::tr("アクション");
    if (idx == 8) return QObject::tr("ショートカット");
    if (idx == 9) return QObject::tr("上書きする");
    if (idx == 10) return QObject::tr("全てのショートカットを初期化しますが、よろしいですか？");
  }
  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("设定快捷键");
    if (idx == 1) return QObject::tr("请输入快捷键内容");
    if (idx == 2) return QObject::tr("快捷键重复");
    if (idx == 3) return QObject::tr("优先覆盖原有内容");
    if (idx == 4) return QObject::tr("编辑");
    if (idx == 5) return QObject::tr("删除");
    if (idx == 6) return QObject::tr("初始化");
    if (idx == 7) return QObject::tr("启动");
    if (idx == 8) return QObject::tr("快捷方式");
    if (idx == 9) return QObject::tr("覆盖原有内容");
    if (idx == 10) return QObject::tr("要将所有的快捷键初始化吗？");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("設定快捷鍵");
    if (idx == 1) return QObject::tr("請輸入快捷鍵");
    if (idx == 2) return QObject::tr("此快捷鍵已存在");
    if (idx == 3) return QObject::tr("以此為優先覆蓋儲存");
    if (idx == 4) return QObject::tr("編輯");
    if (idx == 5) return QObject::tr("清除");
    if (idx == 6) return QObject::tr("初始化");
    if (idx == 7) return QObject::tr("動作");
    if (idx == 8) return QObject::tr("快捷鍵");
    if (idx == 9) return QObject::tr("覆蓋儲存");
    if (idx == 10) return QObject::tr("所有快捷鍵設定將初始化，確定要執行嗎？");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("단축키 설정");
    if (idx == 1) return QObject::tr("단축키를 입력해 주세요");
    if (idx == 2) return QObject::tr("키가 중복하고 있습니다");
    if (idx == 3) return QObject::tr("우선적으로 덮어쓰기");
    if (idx == 4) return QObject::tr("편집");
    if (idx == 5) return QObject::tr("클리어");
    if (idx == 6) return QObject::tr("초기화");
    if (idx == 7) return QObject::tr("액션");
    if (idx == 8) return QObject::tr("단축키");
    if (idx == 9) return QObject::tr("덮어쓰기");
    if (idx == 10) return QObject::tr("모든 단축키를 초기화 합니다, 계속할까요?");
  }

  if (man->TranslatePortugues())
  {
  }

  if (man->TranslateSpanish())
  {
  }

  if (man->TranslateGerman())
  {
  }

  if (man->TranslateFrench())
  {
  }

  if (man->TranslateRussian())
  {
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  if (man->TranslatePolish())
  {
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Shortcut Settings"); // ショートカット設定
  if (idx == 1) return QObject::tr("Enter the shortcut key"); // ショートカットキーを入力してください
  if (idx == 2) return QObject::tr("The key exists already"); // キーが重複しています
  if (idx == 3) return QObject::tr("Prioritize to overwrite"); // 優先して上書き
  if (idx == 4) return QObject::tr("Edit"); // 編集
  if (idx == 5) return QObject::tr("Clear"); // クリア
  if (idx == 6) return QObject::tr("Initialize"); // 初期化
  if (idx == 7) return QObject::tr("Action"); // アクション
  if (idx == 8) return QObject::tr("Shortcut"); // ショートカット
  if (idx == 9) return QObject::tr("Overwrite"); // 上書きする
  if (idx == 10) return QObject::tr("Restore default settings?"); // 全てのショートカットを初期化しますが、よろしいですか？

  return "";
}
