/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_print.h"

///////////////////////////////////////////////////////////////////////////
// - プリントダイアログで使用される文字列
// - String to be used in the print dialog
///////////////////////////////////////////////////////////////////////////
QString Trans_StrPrint( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("印刷");
    if (idx == 1) return QObject::tr("用紙いっぱいに印刷");
    if (idx == 2) return QObject::tr("画像解像度を適用");
    if (idx == 3) return QObject::tr("倍率");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("打印"); // 印刷
    if (idx == 1) return QObject::tr("按纸张大小打印");
    if (idx == 2) return QObject::tr("应用图像分辨率");
    if (idx == 3) return QObject::tr("倍率");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("列印");
    if (idx == 1) return QObject::tr("滿版列印");
    if (idx == 2) return QObject::tr("應用於圖片解析度");
    if (idx == 3) return QObject::tr("倍率");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("인쇄");
    if (idx == 1) return QObject::tr("용지에 가득차게 인쇄");
    if (idx == 2) return QObject::tr("이미지 해상도를 적용");
    if (idx == 3) return QObject::tr("배율");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Imprimir");
    if (idx == 1) return QObject::tr("Imprimir em Escala para Caber no Papel");
    if (idx == 2) return QObject::tr("Aplicar Resolução da Imagem");
    if (idx == 3) return QObject::tr("Fator da Escala");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Imprimir");
    if (idx == 1) return QObject::tr("Imprimir sin Margen");
    if (idx == 2) return QObject::tr("Aplicar Resolución de Imagen");
    if (idx == 3) return QObject::tr("Escala (aumento/reducción)");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Print");
    if (idx == 1) return QObject::tr("Print to Fit Paper");
    if (idx == 2) return QObject::tr("Use Image Resolution");
    if (idx == 3) return QObject::tr("Printing Scale");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Impression");
    if (idx == 1) return QObject::tr("Impression adaptée au format du papier");
    if (idx == 2) return QObject::tr("Appliquer la résolution de l'image");
    if (idx == 3) return QObject::tr("Facteur d'échelle");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Печать");
    if (idx == 1) return QObject::tr("Печать по ширине бумаги");
    if (idx == 2) return QObject::tr("Применить разрешение изображения");
    if (idx == 3) return QObject::tr("Кратность");
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
  if (idx == 0) return QObject::tr("Print");
  if (idx == 1) return QObject::tr("Print to Fit Paper");
  if (idx == 2) return QObject::tr("Use Image Resolution");
  if (idx == 3) return QObject::tr("Printing Scale");

  return "";
}
