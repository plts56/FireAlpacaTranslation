/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_tool.h"

///////////////////////////////////////////////////////////////////////////
// - ツールメニューで使用される文字列
// - A string used in the tool menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuTool( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("ツール(&T)"); // Tool
    if (idx == 1) return QObject::tr("ブラシ"); // Brush
    if (idx == 2) return QObject::tr("消しゴム"); // Eraser
    if (idx == 3) return QObject::tr("ドット"); // DotBrush
    if (idx == 4) return QObject::tr("移動"); // Move
    if (idx == 5) return QObject::tr("図形塗りつぶし"); // Fill
    if (idx == 6) return QObject::tr("バケツ"); // Bucket
    if (idx == 7) return QObject::tr("グラデーション"); // Gradient
    if (idx == 8) return QObject::tr("選択"); // Select
    if (idx == 9) return QObject::tr("自動選択"); // Magicwand
    if (idx == 10) return QObject::tr("選択ペン"); // SelectPen
    if (idx == 11) return QObject::tr("選択消し"); // SelectEraser
    if (idx == 12) return QObject::tr("スポイト"); // Eyedropper
    if (idx == 13) return QObject::tr("手のひら"); // Hand
    if (idx == 14) return QObject::tr("テキスト"); // Text
    if (idx == 15) return QObject::tr("オブジェクト操作"); // Object
    if (idx == 16) return QObject::tr("投げなわ選択"); // Lasso
    if (idx == 17) return QObject::tr("コマ分割"); // Panel Divide
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("工具(&T)"); // Tool
    if (idx == 1) return QObject::tr("笔刷"); // Brush
    if (idx == 2) return QObject::tr("橡皮擦"); // Eraser
    if (idx == 3) return QObject::tr("点刷"); // DotBrush
    if (idx == 4) return QObject::tr("移动"); // Move
    if (idx == 5) return QObject::tr("填充图形"); // Fill
    if (idx == 6) return QObject::tr("油漆桶"); // Bucket
    if (idx == 7) return QObject::tr("渐变"); // Gradient
    if (idx == 8) return QObject::tr("选择"); // Select
    if (idx == 9) return QObject::tr("自动选择"); // Magicwand
    if (idx == 10) return QObject::tr("选择笔"); // SelectPen
    if (idx == 11) return QObject::tr("取消选择"); // SelectEraser
    if (idx == 12) return QObject::tr("吸管"); // Eyedropper
    if (idx == 13) return QObject::tr("手掌"); // Hand
    if (idx == 14) return QObject::tr("文本"); // Text
    if (idx == 15) return QObject::tr("对象操作"); // Object
    if (idx == 16) return QObject::tr("套索选择"); // Lasso
    if (idx == 17) return QObject::tr("框格分割"); // Panel Divide
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("工具(&T)"); // Tool
    if (idx == 1) return QObject::tr("筆刷"); // Brush
    if (idx == 2) return QObject::tr("橡皮擦"); // Eraser
    if (idx == 3) return QObject::tr("點刷"); // DotBrush
    if (idx == 4) return QObject::tr("移動"); // Move
    if (idx == 5) return QObject::tr("圖形填充"); // Fill
    if (idx == 6) return QObject::tr("油漆桶"); // Bucket
    if (idx == 7) return QObject::tr("漸層"); // Gradient
    if (idx == 8) return QObject::tr("選擇"); // Select
    if (idx == 9) return QObject::tr("魔術棒"); // Magicwand
    if (idx == 10) return QObject::tr("選擇筆"); // SelectPen
    if (idx == 11) return QObject::tr("選擇消除"); // SelectEraser
    if (idx == 12) return QObject::tr("滴管"); // Eyedropper
    if (idx == 13) return QObject::tr("手掌"); // Hand
    if (idx == 14) return QObject::tr("文本"); // Text
    if (idx == 15) return QObject::tr("物件操作"); // Object
    if (idx == 16) return QObject::tr("套索選擇"); // Lasso
    if (idx == 17) return QObject::tr("框格分割"); // Panel Divide
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("툴(&T)"); // Tool
    if (idx == 1) return QObject::tr("브러시"); // Brush
    if (idx == 2) return QObject::tr("지우개"); // Eraser
    if (idx == 3) return QObject::tr("도트"); // DotBrush
    if (idx == 4) return QObject::tr("이동"); // Move
    if (idx == 5) return QObject::tr("채우기");  // Fill
    if (idx == 6) return QObject::tr("버킷"); // Bucket
    if (idx == 7) return QObject::tr("그라데이션"); // Gradient
    if (idx == 8) return QObject::tr("선택"); // Select
    if (idx == 9) return QObject::tr("자동선택"); // Magicwand
    if (idx == 10) return QObject::tr("선택 펜"); // SelectPen
    if (idx == 11) return QObject::tr("선택 지우개"); // SelectEraser
    if (idx == 12) return QObject::tr("스포이트"); // Eyedropper
    if (idx == 13) return QObject::tr("손바닥"); // Hand
    if (idx == 14) return QObject::tr("텍스트"); // Text
    if (idx == 15) return QObject::tr("조작"); // Object
    if (idx == 16) return QObject::tr("올가미"); // Lasso
    if (idx == 17) return QObject::tr("분할"); // Panel Divide
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Ferramenta(&T)"); // Tool
    if (idx == 1) return QObject::tr("Pincel"); // Brush
    if (idx == 2) return QObject::tr("Borracha"); // Eraser
    if (idx == 3) return QObject::tr("Pincel de Ponto"); // DotBrush
    if (idx == 4) return QObject::tr("Mover"); // Move
    if (idx == 5) return QObject::tr("Preencher Figura"); // Fill
    if (idx == 6) return QObject::tr("Balde"); // Bucket
    if (idx == 7) return QObject::tr("Gradiente"); // Gradient
    if (idx == 8) return QObject::tr("Selecionar"); // Select
    if (idx == 9) return QObject::tr("Varinha Mágica"); // Magicwand
    if (idx == 10) return QObject::tr("Selecionar Caneta"); // SelectPen
    if (idx == 11) return QObject::tr("Selecionar Borracha"); // SelectEraser
    if (idx == 12) return QObject::tr("Conta-gotas"); // Eyedropper
    if (idx == 13) return QObject::tr("Mão"); // Hand
    if (idx == 14) return QObject::tr("Texto"); // Text
    if (idx == 15) return QObject::tr("Objeto"); // Object
    if (idx == 16) return QObject::tr("Laço"); // Lasso
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Herramienta(&T)"); // Tool
    if (idx == 1) return QObject::tr("Pincel"); // Brush
    if (idx == 2) return QObject::tr("Borrador"); // Eraser
    if (idx == 3) return QObject::tr("Pincel de puntos"); // DotBrush
    if (idx == 4) return QObject::tr("Mover"); // Move
    if (idx == 5) return QObject::tr("Rellenar figura"); // Fill
    if (idx == 6) return QObject::tr("Cubo"); // Bucket
    if (idx == 7) return QObject::tr("Degradado"); // Gradient
    if (idx == 8) return QObject::tr("Seleccionar"); // Select
    if (idx == 9) return QObject::tr("Varita mágica"); // Magicwand
    if (idx == 10) return QObject::tr("Seleccionar pluma"); // SelectPen
    if (idx == 11) return QObject::tr("Seleccionar borrador"); // SelectEraser
    if (idx == 12) return QObject::tr("Cuentagotas"); // Eyedropper
    if (idx == 13) return QObject::tr("Mano"); // Hand
    if (idx == 14) return QObject::tr("Texto"); // Text
    if (idx == 15) return QObject::tr("Objeto"); // Object
    if (idx == 16) return QObject::tr("Lazo"); // Lasso
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Tool(&T)"); // Tool
    if (idx == 1) return QObject::tr("Pinsel"); // Brush
    if (idx == 2) return QObject::tr("Radierer"); // Eraser
    if (idx == 3) return QObject::tr("Pünktchen-Pinsel"); // DotBrush
    if (idx == 4) return QObject::tr("Verschieben"); // Move
    if (idx == 5) return QObject::tr("Figur ausfüllen"); // Fill
    if (idx == 6) return QObject::tr("Eimer"); // Bucket
    if (idx == 7) return QObject::tr("Verlauf"); // Gradient
    if (idx == 8) return QObject::tr("Auswählen"); // Select
    if (idx == 9) return QObject::tr("Zauberstab"); // Magicwand
    if (idx == 10) return QObject::tr("Stift wählen"); // SelectPen
    if (idx == 11) return QObject::tr("Radierer wählen "); // SelectEraser
    if (idx == 12) return QObject::tr("Pipette"); // Eyedropper
    if (idx == 13) return QObject::tr("Hand"); // Hand
    if (idx == 14) return QObject::tr("Text"); // Text
    if (idx == 15) return QObject::tr("Objekt"); // Object
    if (idx == 16) return QObject::tr("Lasso  "); // Lasso
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Outil(&T)"); // Tool
    if (idx == 1) return QObject::tr("Pinceau"); // Brush
    if (idx == 2) return QObject::tr("Gomme"); // Eraser
    if (idx == 3) return QObject::tr("Pinceau à points"); // DotBrush
    if (idx == 4) return QObject::tr("Déplacer"); // Move
    if (idx == 5) return QObject::tr("Remplir la figure"); // Fill
    if (idx == 6) return QObject::tr("Pot de peinture"); // Bucket
    if (idx == 7) return QObject::tr("Dégradé"); // Gradient
    if (idx == 8) return QObject::tr("Sélectionner"); // Select
    if (idx == 9) return QObject::tr("Baguette magique"); // Magicwand
    if (idx == 10) return QObject::tr("Sélectionner l'outil Plume"); // SelectPen
    if (idx == 11) return QObject::tr("Sélectionner l'outil Gomme"); // SelectEraser
    if (idx == 12) return QObject::tr("Pipette"); // Eyedropper
    if (idx == 13) return QObject::tr("Main"); // Hand
    if (idx == 14) return QObject::tr("Texte"); // Text
    if (idx == 15) return QObject::tr("Objet"); // Object
    if (idx == 16) return QObject::tr("Lasso"); // Lasso
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Инструмент(&T)"); // Tool
    if (idx == 1) return QObject::tr("Кисть"); // Brush
    if (idx == 2) return QObject::tr("Ластик"); // Eraser
    if (idx == 3) return QObject::tr("Точечная кисть"); // DotBrush
    if (idx == 4) return QObject::tr("Переместить"); // Move
    if (idx == 5) return QObject::tr("Залить фигуру"); // Fill
    if (idx == 6) return QObject::tr("Ведро"); // Bucket
    if (idx == 7) return QObject::tr("Градиент"); // Gradient
    if (idx == 8) return QObject::tr("Выделить"); // Select
    if (idx == 9) return QObject::tr("Волшебная палочка"); // Magicwand
    if (idx == 10) return QObject::tr("Выбрать перо"); // SelectPen
    if (idx == 11) return QObject::tr("Выбрать ластик"); // SelectEraser
    if (idx == 12) return QObject::tr("Пипетка"); // Eyedropper
    if (idx == 13) return QObject::tr("Рука"); // Hand
    if (idx == 14) return QObject::tr("Текст"); // Text
    if (idx == 15) return QObject::tr("Объект"); // Object
    if (idx == 16) return QObject::tr("Лассо"); // Lasso
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  if (idx == 0) return QObject::tr("Tool(&T)");
  if (idx == 1) return QObject::tr("Brush");
  if (idx == 2) return QObject::tr("Eraser");
  if (idx == 3) return QObject::tr("Dot Brush");
  if (idx == 4) return QObject::tr("Move");
  if (idx == 5) return QObject::tr("Fill");
  if (idx == 6) return QObject::tr("Bucket");
  if (idx == 7) return QObject::tr("Gradient");
  if (idx == 8) return QObject::tr("Select");
  if (idx == 9) return QObject::tr("MagicWand");
  if (idx == 10) return QObject::tr("Select Pen");
  if (idx == 11) return QObject::tr("Select Eraser");
  if (idx == 12) return QObject::tr("Eyedropper");
  if (idx == 13) return QObject::tr("Hand");
  if (idx == 14) return QObject::tr("Text");
  if (idx == 15) return QObject::tr("Object");
  if (idx == 16) return QObject::tr("Lasso");
  if (idx == 17) return QObject::tr("Panel Divide");

  return "";
}
