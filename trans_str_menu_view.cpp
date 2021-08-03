/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_view.h"

///////////////////////////////////////////////////////////////////////////
// - 表示メニューで使用される文字列
// - A string used in the view menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuView( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("表示(&V)"); // View
    if (idx == 1) return QObject::tr("拡大表示(&I)"); // Zoom In
    if (idx == 2) return QObject::tr("縮小表示(&O)"); // Zoom Out
    if (idx == 3) return QObject::tr("ウィンドウサイズに合わせる(&F)"); // Fit to Window Size
    if (idx == 4) return QObject::tr("左回転(&L)"); // Rotate Left
    if (idx == 5) return QObject::tr("回転・反転を解除(&S)"); // Release Rotate/Flip
    if (idx == 6) return QObject::tr("右回転(&R)"); // Rotate Right
    if (idx == 7) return QObject::tr("左右反転(&H)"); // Flip Horizontally
    if (idx == 8) return QObject::tr("グリッド(&G)"); // Grid
    if (idx == 9) return QObject::tr("透明背景(&T)"); // Transparent Background
    if (idx == 10) return QObject::tr("ブラシサイズ(&B)"); // Brush Size
    if (idx == 11) return QObject::tr("ピクセル単位のグリッド(&P)"); // Pixel Grid
    if (idx == 12) return QObject::tr("背景色の指定(&D)..."); // Background Color
    if (idx == 13) return QObject::tr("漫画原稿ガイドの表示(&M)"); // Show Comic Guide Lines
    if (idx == 14) return QObject::tr("漫画原稿ガイド設定(&S)..."); // Comic Guide Lines Settings
    if (idx == 21) return QObject::tr("カラープロファイルを適用して表示"); // Display with Applying Color Profile
    if (idx == 22) return QObject::tr("CMYKソフトプルーフ"); // CMYK Soft Proof
    if (idx == 23) return QObject::tr("カラーマネジメント設定..."); // Color Management Settings...
    if (idx == 24) return QObject::tr("ガイド線"); // Guides
    if (idx == 25) return QObject::tr("漫画原稿ガイドの表示(&M)"); // Show Comic Guide Lines
    if (idx == 26) return QObject::tr("漫画原稿ガイド設定(&S)..."); // Comic Guide Lines Settings
    if (idx == 27) return QObject::tr("グリッド設定..."); // Grid Settings
    if (idx == 28) return QObject::tr("100%"); // 100%
    if (idx == 29) return QObject::tr("200%"); // 200%
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("表示(&V)"); // View
    if (idx == 1) return QObject::tr("放大(&I)"); // Zoom In
    if (idx == 2) return QObject::tr("缩小(&O)"); // Zoom Out
    if (idx == 3) return QObject::tr("配合窗口尺寸(&F)"); // Fit to Window Size
    if (idx == 4) return QObject::tr("左旋转(&L)"); // Rotate Left
    if (idx == 5) return QObject::tr("旋转初始化(&S)"); // Release Rotate/Flip
    if (idx == 6) return QObject::tr("右旋转(&R)"); // Rotate Right
    if (idx == 7) return QObject::tr("左右反转(&H)"); // Flip Horizontally
    if (idx == 8) return QObject::tr("网格(&G)"); // Grid
    if (idx == 9) return QObject::tr("透明背景(&T)"); // Transparent Background
    if (idx == 10) return QObject::tr("笔刷尺寸(&B)"); // Brush Size
    if (idx == 11) return QObject::tr("像素网格(&P)"); // Pixel Grid
    if (idx == 12) return QObject::tr("背景色(&D)..."); // Background Color
    if (idx == 13) return QObject::tr("显示漫画原稿指南(&M)"); // Show Comic Guide Lines
    if (idx == 14) return QObject::tr("漫画原稿指南设定(&S)..."); // Comic Guide Lines Settings
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("表示(&V)"); // View
    if (idx == 1) return QObject::tr("放大(&I)"); // Zoom In
    if (idx == 2) return QObject::tr("縮小(&O)"); // Zoom Out
    if (idx == 3) return QObject::tr("配合視窗尺寸(&F)"); // Fit to Window Size
    if (idx == 4) return QObject::tr("向左旋轉(&L)"); // Rotate Left
    if (idx == 5) return QObject::tr("解除旋轉(&S)"); // Release Rotate/Flip
    if (idx == 6) return QObject::tr("向右旋轉(&R)"); // Rotate Right
    if (idx == 7) return QObject::tr("水平翻轉(&H)"); // Flip Horizontally
    if (idx == 8) return QObject::tr("網格(&G)"); // Grid
    if (idx == 9) return QObject::tr("透明背景(&T)"); // Transparent Background
    if (idx == 10) return QObject::tr("筆刷大小(&B)"); // Brush Size
    if (idx == 11) return QObject::tr("像素網格(&P)"); // Pixel Grid
    if (idx == 12) return QObject::tr("背景顏色(&D)..."); // Background Color
    if (idx == 13) return QObject::tr("顯示漫畫原稿導覽(&M)"); // Show Comic Guide Lines
    if (idx == 14) return QObject::tr("漫畫原稿導覽設定(&S)..."); // Comic Guide Lines Settings
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("표시(&V)"); // View
    if (idx == 1) return QObject::tr("확대표시(&I)"); // Zoom In
    if (idx == 2) return QObject::tr("축소표시(&O)"); // Zoom Out
    if (idx == 3) return QObject::tr("윈도우 사이즈에 맞추기(&F)"); // Fit to Window Size
    if (idx == 4) return QObject::tr("좌회전(&L)"); // Rotate Left
    if (idx == 5) return QObject::tr("회전을 초기화(&S)"); // Release Rotate/Flip
    if (idx == 6) return QObject::tr("우회전(&R)"); // Rotate Right
    if (idx == 7) return QObject::tr("좌우 반전(&H)"); // Flip Horizontally
    if (idx == 8) return QObject::tr("그리드(&G)"); // Grid
    if (idx == 9) return QObject::tr("투명 배경(&T)"); // Transparent Background
    if (idx == 10) return QObject::tr("브러시 사이즈(&B)"); // Brush Size
    if (idx == 11) return QObject::tr("픽셀 단위의 그리드(&P)"); // Pixel Grid
    if (idx == 12) return QObject::tr("배경색(&D)..."); // Background Color
    if (idx == 13) return QObject::tr("만화원고 가이드 표시(&M)"); // Show Comic Guide Lines
    if (idx == 14) return QObject::tr("만화원고 가이드 설정(&S)..."); // Comic Guide Lines Settings
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Visualizar(&V)"); // View
    if (idx == 1) return QObject::tr("Aumentar Zoom(&I)"); // Zoom In
    if (idx == 2) return QObject::tr("Diminuir Zoom(&O)"); // Zoom Out
    if (idx == 3) return QObject::tr("Ajustar ao Tamanho da Janela(&F)"); // Fit to Window Size
    if (idx == 4) return QObject::tr("Girar à Esquerda(&L)"); // Rotate Left
    if (idx == 5) return QObject::tr("Liberar Girar/Inverter(&S)"); // Release Rotate/Flip
    if (idx == 6) return QObject::tr("Girar à Direita(&R)"); // Rotate Right
    if (idx == 7) return QObject::tr("Inverter Horizontalmente(&H)"); // Flip Horizontally
    if (idx == 8) return QObject::tr("Grade(&G)"); // Grid
    if (idx == 9) return QObject::tr("Plano de Fundo Transparente(&T)"); // Transparent Background
    if (idx == 10) return QObject::tr("Tamanho do pincel(&B)"); // Brush Size
    if (idx == 11) return QObject::tr("Grade de pincel(&P)"); // Pixel Grid
    if (idx == 12) return QObject::tr("Cor de plano de fundo(&D)..."); // Background Color
    if (idx == 13) return QObject::tr("Mostrar linhas-guia cômicas(&M)"); // Show Comic Guide Lines
    if (idx == 14) return QObject::tr("Configurações do guia de quadrinhos(&S)..."); // Comic Guide Lines Settings
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Ver(&V)"); // View
    if (idx == 1) return QObject::tr("Acercar(&I)"); // Zoom In
    if (idx == 2) return QObject::tr("Alejar(&O)"); // Zoom Out
    if (idx == 3) return QObject::tr("Ajustar al tamaño de la ventana(&F)"); // Fit to Window Size
    if (idx == 4) return QObject::tr("Girar imagen a la izquierda(&L)"); // Rotate Left
    if (idx == 5) return QObject::tr("Restaurar rotación/voltear(&S)"); // Release Rotate/Flip
    if (idx == 6) return QObject::tr("Girar imagen a la derecha(&R)"); // Rotate Right
    if (idx == 7) return QObject::tr("Voltear(&H)"); // Flip Horizontally
    if (idx == 8) return QObject::tr("Grilla(&G)"); // Grid
    if (idx == 9) return QObject::tr("Fondo transparente(&T)"); // Transparent Background
    if (idx == 10) return QObject::tr("Tamaño del pincel(&B)"); // Brush Size
    if (idx == 11) return QObject::tr("Cuadrícula píxel(&P)"); // Pixel Grid
    if (idx == 12) return QObject::tr("Color de fondo(&D)..."); // Background Color
    if (idx == 13) return QObject::tr("Mostrar líneas de guía para cómic(&M)"); // Show Comic Guide Lines
    if (idx == 14) return QObject::tr("Ajustes de líneas para guía cómic(&S)..."); // Comic Guide Lines Settings
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Ansicht(&V)"); // View
    if (idx == 1) return QObject::tr("Vergrößern(&I)"); // Zoom In
    if (idx == 2) return QObject::tr("Verkleinern(&O)"); // Zoom Out
    if (idx == 3) return QObject::tr("An Fenstergröße anpassen(&F)"); // Fit to Window Size
    if (idx == 4) return QObject::tr("Nach links drehen(&L)"); // Rotate Left
    if (idx == 5) return QObject::tr("Drehung freigeben/umdrehen(&S)"); // Release Rotate/Flip
    if (idx == 6) return QObject::tr("Rechtsdrehung(&R)"); // Rotate Right
    if (idx == 7) return QObject::tr("Umdrehen(&H)"); // Flip Horizontally
    if (idx == 8) return QObject::tr("Raster(&G)"); // Grid
    if (idx == 9) return QObject::tr("Transparenter Hintergrund(&T)"); // Transparent Background
    if (idx == 10) return QObject::tr("Pinselgröße(&B)"); // Brush Size
    if (idx == 11) return QObject::tr("Pixelgitter(&P)"); // Pixel Grid
    if (idx == 12) return QObject::tr("Hintergrundfarbe(&D)..."); // Background Color
    if (idx == 13) return QObject::tr("Comic-Guides anzeigen(&M)"); // Show Comic Guide Lines
    if (idx == 14) return QObject::tr("Einstellung der Comic-Richtlinien(&S)..."); // Comic Guide Lines Settings
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Afficher(&V)"); // View
    if (idx == 1) return QObject::tr("Zoom avant(&I)"); // Zoom In
    if (idx == 2) return QObject::tr("Zoom arrière(&O)"); // Zoom Out
    if (idx == 3) return QObject::tr("Ajuster à la fenêtre(&F)"); // Fit to Window Size
    if (idx == 4) return QObject::tr("Faire pivoter à gauche(&L)"); // Rotate Left
    if (idx == 5) return QObject::tr("Libérer la rotation/Faire basculer(&S)"); // Release Rotate/Flip
    if (idx == 6) return QObject::tr("Faire pivoter à droite(&R)"); // Rotate Right
    if (idx == 7) return QObject::tr("Faire basculer(&H)"); // Flip Horizontally
    if (idx == 8) return QObject::tr("Grille(&G)"); // Grid
    if (idx == 9) return QObject::tr("Arrière-plan transparent(&T)"); // Transparent Background
    if (idx == 10) return QObject::tr("Taille du pinceau(&B)"); // Brush Size
    if (idx == 11) return QObject::tr("Grille de pixels(&P)"); // Pixel Grid
    if (idx == 12) return QObject::tr("Couleur d'arrière-plan(&D)..."); // Background Color
    if (idx == 13) return QObject::tr("Afficher les lignes du guide manga(&M)"); // Show Comic Guide Lines
    if (idx == 14) return QObject::tr("Paramètres lignes du guide manga(&S)..."); // Comic Guide Lines Settings
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Вид(&V)"); // View
    if (idx == 1) return QObject::tr("Увеличить(&I)"); // Zoom In
    if (idx == 2) return QObject::tr("Уменьшить(&O)"); // Zoom Out
    if (idx == 3) return QObject::tr("Подогнать к размеру окна(&F)"); // Fit to Window Size
    if (idx == 4) return QObject::tr("Повернуть влево(&L)"); // Rotate Left
    if (idx == 5) return QObject::tr("Отменить поворот/отражение(&S)"); // Release Rotate/Flip
    if (idx == 6) return QObject::tr("Повернуть вправо(&R)"); // Rotate Right
    if (idx == 7) return QObject::tr("Отразить(&H)"); // Flip Horizontally
    if (idx == 8) return QObject::tr("Сетка(&G)"); // Grid
    if (idx == 9) return QObject::tr("Прозрачный фон(&T)"); // Transparent Background
    if (idx == 10) return QObject::tr("Размер кисти(&B)"); // Brush Size
    if (idx == 11) return QObject::tr("Пиксельная сетка(&P)"); // Pixel Grid
    if (idx == 12) return QObject::tr("Цвет фона(&D)..."); // Background Color
    if (idx == 13) return QObject::tr("Показать разметочные линии комикса(&M)"); // Show Comic Guide Lines
    if (idx == 14) return QObject::tr("Настройки направляющих линий комикса(&S)..."); // Comic Guide Lines Settings
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  if (idx == 0) return QObject::tr("View(&V)");
  if (idx == 1) return QObject::tr("Zoom In(&I)");
  if (idx == 2) return QObject::tr("Zoom Out(&O)");
  if (idx == 3) return QObject::tr("Fit to Window Size(&F)");
  if (idx == 4) return QObject::tr("Rotate Left(&L)");
  if (idx == 5) return QObject::tr("Release Rotate/Flip(&S)");
  if (idx == 6) return QObject::tr("Rotate Right(&R)");
  if (idx == 7) return QObject::tr("Flip Horizontally(&H)");
  if (idx == 8) return QObject::tr("Grid(&G)");
  if (idx == 9) return QObject::tr("Transparent Background(&T)");
  if (idx == 10) return QObject::tr("Brush Size(&B)");
  if (idx == 11) return QObject::tr("Pixel Grid(&P)");
  if (idx == 12) return QObject::tr("Background Color(&D)...");
  if (idx == 13) return QObject::tr("Show Comic Guide Lines(&M)");
  if (idx == 14) return QObject::tr("Comic Guide Lines Settings(&S)...");
  if (idx == 21) return QObject::tr("Display with Applying Color Profile");
  if (idx == 22) return QObject::tr("CMYK Soft Proof");
  if (idx == 23) return QObject::tr("Color Management Settings...");
  if (idx == 24) return QObject::tr("Guides");
  if (idx == 25) return QObject::tr("Show Manga Guide Lines(&M)");
  if (idx == 26) return QObject::tr("Manga Guide Lines Settings(&S)...");
  if (idx == 27) return QObject::tr("Grid Settings...");
  if (idx == 28) return QObject::tr("100%");
  if (idx == 29) return QObject::tr("200%");

  return "";
}
