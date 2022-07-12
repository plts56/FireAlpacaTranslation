/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_rotate.h"

///////////////////////////////////////////////////////////////////////////
// - レイヤーの回転時に使用される文字列
// - String to be used when rotating layers.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrRotate( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("回転角度を指定");
    if (idx == 1) return QObject::tr("角度");
    if (idx == 2) return QObject::tr("度");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("指定旋转角度");
    if (idx == 1) return QObject::tr("角度");
    if (idx == 2) return QObject::tr("度");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("指定旋轉角度");
    if (idx == 1) return QObject::tr("角度");
    if (idx == 2) return QObject::tr("度");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("회전 각도를 지정");
    if (idx == 1) return QObject::tr("각도");
    if (idx == 2) return QObject::tr("도");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Designar Grau de Rotação");
    if (idx == 1) return QObject::tr("Ângulo");
    if (idx == 2) return QObject::tr("Grau");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Indicar ángulo de rotación");
    if (idx == 1) return QObject::tr("Ángulo");
    if (idx == 2) return QObject::tr("Grado");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Drehgrad bestimmen");
    if (idx == 1) return QObject::tr("Achse");
    if (idx == 2) return QObject::tr("Grad");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Spécifier le degré de rotation");
    if (idx == 1) return QObject::tr("Angle");
    if (idx == 2) return QObject::tr("Degré");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Указать градус поворота");
    if (idx == 1) return QObject::tr("Угол");
    if (idx == 2) return QObject::tr("Град.");
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
  if (idx == 0) return QObject::tr("Designate Rotate Degree"); // 回転角度を指定
  if (idx == 1) return QObject::tr("Angle"); // 角度
  if (idx == 2) return QObject::tr("Degree"); // 度

  return "";
}
