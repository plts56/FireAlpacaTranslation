/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_color.h"

///////////////////////////////////////////////////////////////////////////
// - カラーメニューで使用される文字列
// - A string used in the color menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuColor( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("カラー(&C)"); // Color
    if (idx == 1) return QObject::tr("前景色・背景色入れ替え(&S)"); // Swap
    if (idx == 2) return QObject::tr("初期化(&I)"); // Initialize
    if (idx == 3) return QObject::tr("色相バー(&B)"); // Color Bar
    if (idx == 4) return QObject::tr("色相環(&W)"); // Color Wheel
    if (idx == 5) return QObject::tr("透明色(&A)"); // Transparent
    if (idx == 6) return QObject::tr("パレットのロック(&L)"); // Lock Palette
    if (idx == 7) return QObject::tr("グループ内のパレットを全てクリア(&G)..."); // Clear All Palettes in Group
    if (idx == 8) return QObject::tr("パレットを大きく表示(&V)"); // Large Display of Palette
    if (idx == 9) return QObject::tr("パレットグループを読み込み(&O)..."); // Import Palette Group
    if (idx == 10) return QObject::tr("パレットグループを書き出し(&S)..."); // Export Palette Group
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("颜色(&C)");
    if (idx == 1) return QObject::tr("置换(&S)");
    if (idx == 2) return QObject::tr("初始化(&I)");
    if (idx == 3) return QObject::tr("色相条(&B)");
    if (idx == 4) return QObject::tr("色相环(&W)");
    if (idx == 5) return QObject::tr("透明色(&A)");
    if (idx == 6) return QObject::tr("锁定色板(&L)");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("顏色(&C)");
    if (idx == 1) return QObject::tr("置換(&S)");
    if (idx == 2) return QObject::tr("初始化(&I)");
    if (idx == 3) return QObject::tr("色相條(&B)");
    if (idx == 4) return QObject::tr("色相環(&W)");
    if (idx == 5) return QObject::tr("透明色(&A)");
    if (idx == 6) return QObject::tr("鎖定色板(&L)");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("컬러(&C)");
    if (idx == 1) return QObject::tr("전경색・배경색 교체(&S)");
    if (idx == 2) return QObject::tr("초기화(&I)");
    if (idx == 3) return QObject::tr("색상 바(&B)");
    if (idx == 4) return QObject::tr("색상 휠(&W)");
    if (idx == 5) return QObject::tr("투명색(&A)");
    if (idx == 6) return QObject::tr("팔레트 잠금(&L)");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Cor(&C)");
    if (idx == 1) return QObject::tr("Trocar(&S)");
    if (idx == 2) return QObject::tr("Inicializar(&I)");
    if (idx == 3) return QObject::tr("Barra de cor(&B)");
    if (idx == 4) return QObject::tr("Círculo cromático(&W)");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Color(&C)");
    if (idx == 1) return QObject::tr("Intercambiar(&S)");
    if (idx == 2) return QObject::tr("Inicializar(&I)");
    if (idx == 3) return QObject::tr("Barra de color(&B)");
    if (idx == 4) return QObject::tr("Círculo de color(&W)");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Farbe(&C)");
    if (idx == 1) return QObject::tr("Austauschen(&S)");
    if (idx == 2) return QObject::tr("Initialisieren(&I)");
    if (idx == 3) return QObject::tr("Farbleiste(&B)");
    if (idx == 4) return QObject::tr("Farbkreis(&W)");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Couleur(&C)");
    if (idx == 1) return QObject::tr("Permuter(&S)");
    if (idx == 2) return QObject::tr("Initialiser(&I)");
    if (idx == 3) return QObject::tr("Nuancier(&B)");
    if (idx == 4) return QObject::tr("Roue chromatique(&W)");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Цвет(&C)");
    if (idx == 1) return QObject::tr("Замещение(&S)");
    if (idx == 2) return QObject::tr("Инициализация(&I)");
    if (idx == 3) return QObject::tr("Цветовая шкала(&B)");
    if (idx == 4) return QObject::tr("Цветовая гамма(&W)");
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  if (idx == 0) return QObject::tr("Color(&C)");
  if (idx == 1) return QObject::tr("Swap Fore/BG(&S)");
  if (idx == 2) return QObject::tr("Initialize(&I)");
  if (idx == 3) return QObject::tr("Color Bar(&B)");
  if (idx == 4) return QObject::tr("Color Wheel(&W)");
  if (idx == 5) return QObject::tr("Transparent(&A)");
  if (idx == 6) return QObject::tr("&Lock Palette");
  if (idx == 7) return QObject::tr("Clear All Palettes in &Group");
  if (idx == 8) return QObject::tr("&Large Display of Palette");
  if (idx == 9) return QObject::tr("Import Palette Group...");
  if (idx == 10) return QObject::tr("Export Palette Group...");

  return "";
}
