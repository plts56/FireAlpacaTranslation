/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_border.h"

///////////////////////////////////////////////////////////////////////////
// - 選択境界描画ウィンドウで表示される文字列
// - The string displayed in the Selective Boundary Drawing window.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrBorder( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("選択境界の描画");
    if (idx == 1) return QObject::tr("内側");
    if (idx == 2) return QObject::tr("外側");
    if (idx == 3) return QObject::tr("境界線上");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("选择境界的描绘");
    if (idx == 1) return QObject::tr("内侧");
    if (idx == 2) return QObject::tr("外侧");
    if (idx == 3) return QObject::tr("境界线上");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("選擇境界的描繪");
    if (idx == 1) return QObject::tr("內側");
    if (idx == 2) return QObject::tr("外側");
    if (idx == 3) return QObject::tr("境界線上");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("선택 경계 그리기");
    if (idx == 1) return QObject::tr("내측");
    if (idx == 2) return QObject::tr("외측");
    if (idx == 3) return QObject::tr("경계선상");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Desenhar Borda de Seleção");
    if (idx == 1) return QObject::tr("Interna");
    if (idx == 2) return QObject::tr("Externa");
    if (idx == 3) return QObject::tr("No limite");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Dibujar límite de la selección");
    if (idx == 1) return QObject::tr("Interior");
    if (idx == 2) return QObject::tr("Exterior");
    if (idx == 3) return QObject::tr("Sobre el límite");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Auswahlrahmen zeichnen");
    if (idx == 1) return QObject::tr("Innen");
    if (idx == 2) return QObject::tr("Außen");
    if (idx == 3) return QObject::tr("An der Grenze");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Tracer une bordure de sélection");
    if (idx == 1) return QObject::tr("À l'intérieur");
    if (idx == 2) return QObject::tr("À l'extérieur");
    if (idx == 3) return QObject::tr("À la limite");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Нарисовать границы выделения");
    if (idx == 1) return QObject::tr("Внутри");
    if (idx == 2) return QObject::tr("Снаружи");
    if (idx == 3) return QObject::tr("На границе");
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Draw Selection Border"); // 選択境界の描画
  if (idx == 1) return QObject::tr("Inside");  // 内側
  if (idx == 2) return QObject::tr("Outside"); // 外側
  if (idx == 3) return QObject::tr("On Boundary"); // 境界線上

  return "";
}
