/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_navi.h"

///////////////////////////////////////////////////////////////////////////
// - ナビゲータウィンドウで使用される文字列
// - A string used in the navigator window.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrNavi( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("ズームイン");
    if (idx == 1) return QObject::tr("ズームアウト");
    if (idx == 2) return QObject::tr("ウィンドウサイズに合わせる");
    if (idx == 3) return QObject::tr("左回転");
    if (idx == 4) return QObject::tr("回転解除");
    if (idx == 5) return QObject::tr("右回転");
    if (idx == 6) return QObject::tr("左右反転");
    if (idx == 7) return QObject::tr("ピクセル等倍");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("放大");
    if (idx == 1) return QObject::tr("缩小");
    if (idx == 2) return QObject::tr("配合窗口尺寸");
    if (idx == 3) return QObject::tr("左旋转");
    if (idx == 4) return QObject::tr("解除旋转");
    if (idx == 5) return QObject::tr("右旋转");
    if (idx == 6) return QObject::tr("左右翻转");
    if (idx == 7) return QObject::tr("实际像素");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("放大");
    if (idx == 1) return QObject::tr("縮小");
    if (idx == 2) return QObject::tr("配合窗口尺寸");
    if (idx == 3) return QObject::tr("左旋轉");
    if (idx == 4) return QObject::tr("解除旋轉");
    if (idx == 5) return QObject::tr("右旋轉");
    if (idx == 6) return QObject::tr("左右翻轉");
    if (idx == 7) return QObject::tr("實際大小");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("줌 인");
    if (idx == 1) return QObject::tr("줌 아웃");
    if (idx == 2) return QObject::tr("윈도우 사이즈에 맞춘다");
    if (idx == 3) return QObject::tr("좌회전");
    if (idx == 4) return QObject::tr("회전 해제");
    if (idx == 5) return QObject::tr("우회전");
    if (idx == 6) return QObject::tr("좌우 반전");
    if (idx == 7) return QObject::tr("픽셀 등배");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Aumentar Zoom");
    if (idx == 1) return QObject::tr("Diminuir Zoom");
    if (idx == 2) return QObject::tr("Ajustar ao Tamanho da Janela");
    if (idx == 3) return QObject::tr("Girar à Esquerda");
    if (idx == 4) return QObject::tr("Limpar Rotação");
    if (idx == 5) return QObject::tr("Girar à Direita");
    if (idx == 6) return QObject::tr("Inverter Horizontalmente");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Acercar");
    if (idx == 1) return QObject::tr("Alejar");
    if (idx == 2) return QObject::tr("Encajar en ventana");
    if (idx == 3) return QObject::tr("Girar a la izquierda");
    if (idx == 4) return QObject::tr("Borrar rotación");
    if (idx == 5) return QObject::tr("Girar a la derecha");
    if (idx == 6) return QObject::tr("Voltear horizontalmente");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Vergrößern");
    if (idx == 1) return QObject::tr("Verkleinern");
    if (idx == 2) return QObject::tr("An Fenstergröße anpassen");
    if (idx == 3) return QObject::tr("Nach links drehen");
    if (idx == 4) return QObject::tr("Drehung löschen");
    if (idx == 5) return QObject::tr("Nach rechts drehen");
    if (idx == 6) return QObject::tr("Horizontal umdrehen");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Zoom avant");
    if (idx == 1) return QObject::tr("Zoom arrière");
    if (idx == 2) return QObject::tr("Ajuster à la fenêtre");
    if (idx == 3) return QObject::tr("Faire pivoter à gauche");
    if (idx == 4) return QObject::tr("Supprimer la rotation");
    if (idx == 5) return QObject::tr("Faire pivoter à droite");
    if (idx == 6) return QObject::tr("Faire basculer l’image horizontalement");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Увеличить");
    if (idx == 1) return QObject::tr("Уменьшить");
    if (idx == 2) return QObject::tr("По размеру окна");
    if (idx == 3) return QObject::tr("Повернуть влево");
    if (idx == 4) return QObject::tr("Отменить поворот");
    if (idx == 5) return QObject::tr("Повернуть вправо");
    if (idx == 6) return QObject::tr("Отразить по горизонтали");
    if (idx == 7) return QObject::tr("Размер пикселя");
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
  if (idx == 0) return QObject::tr("Zoom In");
  if (idx == 1) return QObject::tr("Zoom Out");
  if (idx == 2) return QObject::tr("Fit to Window Size");
  if (idx == 3) return QObject::tr("Rotate Left");
  if (idx == 4) return QObject::tr("Clear Rotation");
  if (idx == 5) return QObject::tr("Rotate Right");
  if (idx == 6) return QObject::tr("Flip Horizontally");
  if (idx == 7) return QObject::tr("Actual Pixels");

  return "";
}
