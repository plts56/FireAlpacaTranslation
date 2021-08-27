/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_reso.h"

///////////////////////////////////////////////////////////////////////////
// - 画像解像度の変更時に使用される文字列
// - String used when changing the image resolution.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrReso( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("幅");
    if (idx == 1) return QObject::tr("高さ");
    if (idx == 4) return QObject::tr("比率の保持");
    if (idx == 5) return QObject::tr("画像解像度");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("宽度");
    if (idx == 1) return QObject::tr("高度");
    if (idx == 4) return QObject::tr("保持等比例");
    if (idx == 5) return QObject::tr("图像分辨率");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("寬度");
    if (idx == 1) return QObject::tr("高度");
    if (idx == 4) return QObject::tr("保持等比例");
    if (idx == 5) return QObject::tr("圖像解析度");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("폭");
    if (idx == 1) return QObject::tr("높이");
    if (idx == 4) return QObject::tr("비율의 유지");
    if (idx == 5) return QObject::tr("이미지 해상도");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Largura");
    if (idx == 1) return QObject::tr("Altura");
    if (idx == 4) return QObject::tr("Restringir Proporções");
    if (idx == 5) return QObject::tr("Tamanho da Imagem");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Ancho");
    if (idx == 1) return QObject::tr("Altura");
    if (idx == 4) return QObject::tr("Restringir proporciones");
    if (idx == 5) return QObject::tr("Tamaño de imagen");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Weite");
    if (idx == 1) return QObject::tr("Höhe");
    if (idx == 4) return QObject::tr("Proportionen beschränken");
    if (idx == 5) return QObject::tr("Bildgröße");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Largeur");
    if (idx == 1) return QObject::tr("Hauteur");
    if (idx == 4) return QObject::tr("Conserver les proportions");
    if (idx == 5) return QObject::tr("Taille de l'image");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Ширина");
    if (idx == 1) return QObject::tr("Высота");
    if (idx == 4) return QObject::tr("Пропорции ограничений");
    if (idx == 5) return QObject::tr("Размер изображения");
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
  if (idx == 0) return QObject::tr("Width"); // 幅 [キャンバスの幅]
  if (idx == 1) return QObject::tr("Height"); // 高さ [キャンバスの高さ]
  if (idx == 4) return QObject::tr("Constrain Proportions"); // 比率の保持 [画像の比率を保持する]
  if (idx == 5) return QObject::tr("Image Size"); // 画像サイズ [画像解像度の変更ダイアログのキャプション]

  return "";
}
