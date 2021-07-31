/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_brush_folder.h"

///////////////////////////////////////////////////////////////////////////
// - ブラシフォルダ （ブラシグループ）で使用される文字列
// - The string used in the brush folder (brush group).
///////////////////////////////////////////////////////////////////////////
QString Trans_StrBrushFolder( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("ブラシグループ");
    if (idx == 1) return QObject::tr("名前");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("笔刷组");
    if (idx == 1) return QObject::tr("名字");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("筆刷群組");
    if (idx == 1) return QObject::tr("名字");
  }

  if (man->TranslateKorean())
  {
  if (idx == 0) return QObject::tr("브러시 그룹");
  if (idx == 1) return QObject::tr("이름");
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

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Brush Group"); // ブラシグループ
  if (idx == 1) return QObject::tr("Name"); // 名前
  return "";
}
