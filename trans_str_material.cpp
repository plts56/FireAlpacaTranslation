/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_material.h"

///////////////////////////////////////////////////////////////////////////
// - 素材機能で使用される文字列
// - A string used in the material function.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMaterial( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("コマの分割");
    if (idx == 1) return QObject::tr("縦方向の分割数");
    if (idx == 2) return QObject::tr("横方向の分割数");

    if (idx == 1300) return QObject::tr("コマのプロパティ");
    if (idx == 1301) return QObject::tr("線の幅");
    if (idx == 1302) return QObject::tr("線の色");
    if (idx == 1303) return QObject::tr("黒");
    if (idx == 1304) return QObject::tr("前景色");
    if (idx == 1305) return QObject::tr("位置");
    if (idx == 1306) return QObject::tr("未指定");
    if (idx == 1307) return QObject::tr("内枠");
    if (idx == 1308) return QObject::tr("外枠");
  }

  if (man->TranslateChineseSimp())
  {
  }

  if (man->TranslateChineseTrad())
  {
  }

  if (man->TranslateKorean())
  {
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
  if (idx == 0) return QObject::tr("Divide Comic Panel");
  if (idx == 1) return QObject::tr("Number of vertical divisions");
  if (idx == 2) return QObject::tr("Number of horizontal divisions");

  if (idx == 1300) return QObject::tr("Comic Panel Property");
  if (idx == 1301) return QObject::tr("Line Width");
  if (idx == 1302) return QObject::tr("Border Color");
  if (idx == 1303) return QObject::tr("Black");
  if (idx == 1304) return QObject::tr("Foreground Color");
  if (idx == 1305) return QObject::tr("Position");
  if (idx == 1306) return QObject::tr("Unspecified");
  if (idx == 1307) return QObject::tr("Inner Frame");
  if (idx == 1308) return QObject::tr("Outer Frame");

  return "";
}
