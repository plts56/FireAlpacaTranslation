/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_resize.h"

///////////////////////////////////////////////////////////////////////////
// - キャンバスサイズの変更時に使われる文字列
// - A string used to change the canvas size.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrResize( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("左上");
    if (idx == 1) return QObject::tr("上中央");
    if (idx == 2) return QObject::tr("右上");
    if (idx == 3) return QObject::tr("左");
    if (idx == 4) return QObject::tr("中央");
    if (idx == 5) return QObject::tr("右");
    if (idx == 6) return QObject::tr("左下");
    if (idx == 7) return QObject::tr("下中央");
    if (idx == 8) return QObject::tr("右下");
    if (idx == 10) return QObject::tr("幅");
    if (idx == 11) return QObject::tr("高さ");
    if (idx == 13) return QObject::tr("キャンバスサイズ");

    if (idx == 15) return QObject::tr("現在のサイズ");
    if (idx == 16) return QObject::tr("キャンバス範囲外を削除する");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("左上");
    if (idx == 1) return QObject::tr("上中");
    if (idx == 2) return QObject::tr("右上");
    if (idx == 3) return QObject::tr("左");
    if (idx == 4) return QObject::tr("中央");
    if (idx == 5) return QObject::tr("右");
    if (idx == 6) return QObject::tr("左下");
    if (idx == 7) return QObject::tr("下中央");
    if (idx == 8) return QObject::tr("右下");
    if (idx == 10) return QObject::tr("宽度");
    if (idx == 11) return QObject::tr("高度");
    if (idx == 13) return QObject::tr("画布尺寸");

    if (idx == 15) return QObject::tr("当前大小");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("左上");
    if (idx == 1) return QObject::tr("上中");
    if (idx == 2) return QObject::tr("右上");
    if (idx == 3) return QObject::tr("左");
    if (idx == 4) return QObject::tr("中央");
    if (idx == 5) return QObject::tr("右");
    if (idx == 6) return QObject::tr("左下");
    if (idx == 7) return QObject::tr("下中");
    if (idx == 8) return QObject::tr("右下");
    if (idx == 10) return QObject::tr("寬度");
    if (idx == 11) return QObject::tr("高度");
    if (idx == 13) return QObject::tr("畫布尺寸");

    if (idx == 15) return QObject::tr("現在尺寸");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("좌상");
    if (idx == 1) return QObject::tr("상 중앙");
    if (idx == 2) return QObject::tr("우상");
    if (idx == 3) return QObject::tr("좌");
    if (idx == 4) return QObject::tr("중앙");
    if (idx == 5) return QObject::tr("우");
    if (idx == 6) return QObject::tr("좌하");
    if (idx == 7) return QObject::tr("하 중앙");
    if (idx == 8) return QObject::tr("우하");
    if (idx == 10) return QObject::tr("폭");
    if (idx == 11) return QObject::tr("높이");
    if (idx == 13) return QObject::tr("캔버스 사이즈");

    if (idx == 15) return QObject::tr("현재 사이즈");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Esquerda Superior");
    if (idx == 1) return QObject::tr("Central Superior");
    if (idx == 2) return QObject::tr("Direita Superior");
    if (idx == 3) return QObject::tr("Esquerda");
    if (idx == 4) return QObject::tr("Central");
    if (idx == 5) return QObject::tr("Direita");
    if (idx == 6) return QObject::tr("Esquerda Inferior");
    if (idx == 7) return QObject::tr("Central Inferior");
    if (idx == 8) return QObject::tr("Direita Inferior");
    if (idx == 10) return QObject::tr("Largura");
    if (idx == 11) return QObject::tr("Altura");
    if (idx == 13) return QObject::tr("Tamanho da Tela");

    if (idx == 15) return QObject::tr("Tamanho Atual");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Superior izquierda");
    if (idx == 1) return QObject::tr("Superior centro");
    if (idx == 2) return QObject::tr("Superior derecha");
    if (idx == 3) return QObject::tr("Izquierda");
    if (idx == 4) return QObject::tr("Centro");
    if (idx == 5) return QObject::tr("Derecha");
    if (idx == 6) return QObject::tr("Inferior izquierda");
    if (idx == 7) return QObject::tr("Inferior centro");
    if (idx == 8) return QObject::tr("Inferior derecha");
    if (idx == 10) return QObject::tr("Ancho");
    if (idx == 11) return QObject::tr("Altura");
    if (idx == 13) return QObject::tr("Tamaño del lienzo");

    if (idx == 15) return QObject::tr("Tamaño actual ");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Oben links");
    if (idx == 1) return QObject::tr("Oben in Mitte");
    if (idx == 2) return QObject::tr("Oben rechts");
    if (idx == 3) return QObject::tr("Links");
    if (idx == 4) return QObject::tr("Mitte");
    if (idx == 5) return QObject::tr("Rechts");
    if (idx == 6) return QObject::tr("Unten links");
    if (idx == 7) return QObject::tr("Unten in Mitte");
    if (idx == 8) return QObject::tr("Unten rechts");
    if (idx == 10) return QObject::tr("Weite");
    if (idx == 11) return QObject::tr("Höhe");
    if (idx == 13) return QObject::tr("Leinwandgröße");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Haut à gauche");
    if (idx == 1) return QObject::tr("Haut au centre");
    if (idx == 2) return QObject::tr("Haut à droite");
    if (idx == 3) return QObject::tr("Gauche");
    if (idx == 4) return QObject::tr("Centre");
    if (idx == 5) return QObject::tr("Droit");
    if (idx == 6) return QObject::tr("Bas à gauche");
    if (idx == 7) return QObject::tr("Bas au centre");
    if (idx == 8) return QObject::tr("Bas à droite");
    if (idx == 10) return QObject::tr("Largeur");
    if (idx == 11) return QObject::tr("Hauteur");
    if (idx == 13) return QObject::tr("Taille de la zone de travail");

    if (idx == 15) return QObject::tr("Taille actuelle");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Слева вверху");
    if (idx == 1) return QObject::tr("В центре вверху");
    if (idx == 2) return QObject::tr("Справа вверху");
    if (idx == 3) return QObject::tr("Слева");
    if (idx == 4) return QObject::tr("В центре");
    if (idx == 5) return QObject::tr("Справа");
    if (idx == 6) return QObject::tr("Слева внизу");
    if (idx == 7) return QObject::tr("В центре внизу");
    if (idx == 8) return QObject::tr("Справа внизу");
    if (idx == 10) return QObject::tr("Ширина");
    if (idx == 11) return QObject::tr("Высота");
    if (idx == 13) return QObject::tr("Размер холста");

    if (idx == 15) return QObject::tr("Текущий размер");
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
  if (idx == 0) return QObject::tr("Top Left"); // 左上
  if (idx == 1) return QObject::tr("Top Center"); // 上中央
  if (idx == 2) return QObject::tr("Top Right"); // 右上
  if (idx == 3) return QObject::tr("Left"); // 左
  if (idx == 4) return QObject::tr("Center"); // 中央
  if (idx == 5) return QObject::tr("Right"); // 右
  if (idx == 6) return QObject::tr("Bottom Left"); // 左下
  if (idx == 7) return QObject::tr("Bottom Center"); // 下中央
  if (idx == 8) return QObject::tr("Bottom Right"); // 右下
  if (idx == 10) return QObject::tr("Width"); // 幅 [キャンバスの幅]
  if (idx == 11) return QObject::tr("Height"); // 高さ [キャンバスの高さ]
  if (idx == 13) return QObject::tr("Canvas Size"); // キャンバスサイズ

  if (idx == 15) return QObject::tr("Current size"); // 現在のサイズ
  if (idx == 16) return QObject::tr("Delete Cropped Area"); // キャンバス範囲外を削除する

  return "";
}
