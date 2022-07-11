/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_snap.h"

///////////////////////////////////////////////////////////////////////////
// - スナップメニューで使用される文字列
// - A string used in the snap menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuSnap( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("スナップ(&N)"); // Snap
    if (idx == 1) return QObject::tr("オフ(&O)"); // Off
    if (idx == 2) return QObject::tr("並行(&P)"); // Parallel
    if (idx == 3) return QObject::tr("十字(&C)"); // Crisscross
    if (idx == 4) return QObject::tr("消失点(&V)"); // Vanish
    if (idx == 5) return QObject::tr("集中線(&R)"); // Radial
    if (idx == 6) return QObject::tr("同心円(&E)"); // Circle
    if (idx == 7) return QObject::tr("曲線(&K)"); // Curve
    if (idx == 8) return QObject::tr("スナップの保存(&S)..."); // Save Snap
    if (idx == 9) return QObject::tr("曲線の描画"); // Draw Curve
    if (idx == 10) return QObject::tr("曲線の描画 (入り抜き)"); // Draw Curve (Fade In/Out)
    if (idx == 12) return QObject::tr("3Dパース"); // 3D Perspective
    if (idx == 13) return QObject::tr("3Dパースを追加"); // Add 3D Perspective
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("捕捉(&N)"); // Snap
    if (idx == 1) return QObject::tr("关闭(&O)"); // Off
    if (idx == 2) return QObject::tr("平行(&P)"); // Parallel
    if (idx == 3) return QObject::tr("十字(&C)"); // Crisscross
    if (idx == 4) return QObject::tr("消失点(&V)"); // Vanish
    if (idx == 5) return QObject::tr("放射线(&R)"); // Radial
    if (idx == 6) return QObject::tr("同心圆"); // Circle
    if (idx == 7) return QObject::tr("曲线"); // Curve
    if (idx == 8) return QObject::tr("保存现有辅助(&S)..."); // Save Snap
    if (idx == 9) return QObject::tr("曲线描绘"); // Draw Curve
    if (idx == 10) return QObject::tr("曲线描绘（淡入淡出）"); // Draw Curve (Fade In/Out)
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("輔助(&N)"); // Snap
    if (idx == 1) return QObject::tr("關掉(&O)"); // Off
    if (idx == 2) return QObject::tr("並行(&P)"); // Parallel
    if (idx == 3) return QObject::tr("十字(&C)"); // Crisscross
    if (idx == 4) return QObject::tr("消失分(&V)"); // Vanish
    if (idx == 5) return QObject::tr("放射線(&R)"); // Radial
    if (idx == 6) return QObject::tr("同心圓"); // Circle
    if (idx == 7) return QObject::tr("曲線"); // Curve
    if (idx == 8) return QObject::tr("儲存輔助(&S)..."); // Save Snap
    if (idx == 9) return QObject::tr("繪製曲線"); // Draw Curve
    if (idx == 10) return QObject::tr("繪製曲線(起筆/收筆)"); // Draw Curve (Fade In/Out)
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("스냅(&N)"); // Snap
    if (idx == 1) return QObject::tr("Off(&O)"); // Off
    if (idx == 2) return QObject::tr("병행(&P)"); // Parallel
    if (idx == 3) return QObject::tr("십자(&C)"); // Crisscross
    if (idx == 4) return QObject::tr("소실점(&V)"); // Vanish
    if (idx == 5) return QObject::tr("집중선(&R)"); // Radial
    if (idx == 6) return QObject::tr("원형 스냅"); // Circle
    if (idx == 7) return QObject::tr("곡선 스냅"); // Curve
    if (idx == 8) return QObject::tr("스냅의 저장(&S)..."); // Save Snap
    if (idx == 9) return QObject::tr("곡선 그리기"); // Draw Curve
    if (idx == 10) return QObject::tr("곡선 그리기(페이드 인/아웃)"); // Draw Curve (Fade In/Out)
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Ajustar(&N)"); // Snap
    if (idx == 1) return QObject::tr("Desativar(&O)"); // Off
    if (idx == 2) return QObject::tr("Paralelo(&P)"); // Parallel
    if (idx == 3) return QObject::tr("Entrecruzado(&C)"); // Crisscross
    if (idx == 4) return QObject::tr("Ponto de Fuga(&V)"); // Vanish
    if (idx == 5) return QObject::tr("Radial(&R)"); // Radial
    if (idx == 6) return QObject::tr("Ajuste de círculo"); // Circle
    if (idx == 7) return QObject::tr("Ajuste de curva"); // Curve
    if (idx == 8) return QObject::tr("Gravar instantâneo(&S)..."); // Save Snap
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Ajustar(&N)"); // Snap
    if (idx == 1) return QObject::tr("Desativar(&O)"); // Off
    if (idx == 2) return QObject::tr("Paralelo(&P)"); // Parallel
    if (idx == 3) return QObject::tr("Entrecruzado(&C)"); // Crisscross
    if (idx == 4) return QObject::tr("Ponto de Fuga(&V)"); // Vanish
    if (idx == 5) return QObject::tr("Radial(&R)"); // Radial
    if (idx == 6) return QObject::tr("Ajuste de círculo(&E)"); // Circle
    if (idx == 7) return QObject::tr("Ajuste de curva(&K)"); // Curve
    if (idx == 8) return QObject::tr("Gravar instantâneo(&S)..."); // Save Snap
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Schnappfunktion(&N)"); // Snap
    if (idx == 1) return QObject::tr("Aus(&O)"); // Off
    if (idx == 2) return QObject::tr("Gleichlaufend(&P)"); // Parallel
    if (idx == 3) return QObject::tr("Kreuzschraffur(&C)"); // Crisscross
    if (idx == 4) return QObject::tr("Fluchtpunkt(&V)"); // Vanish
    if (idx == 5) return QObject::tr("Strahlenförmig(&R)"); // Radial
    if (idx == 6) return QObject::tr("Snap, Kreis"); // Circle
    if (idx == 7) return QObject::tr("Snap, Kurve"); // Curve
    if (idx == 8) return QObject::tr("Snap speichern(&S)..."); // Save Snap
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Aligner(&N)"); // Snap
    if (idx == 1) return QObject::tr("Inactif(&O)"); // Off
    if (idx == 2) return QObject::tr("Parallèle(&P)"); // Parallel
    if (idx == 3) return QObject::tr("Axes(&C)"); // Crisscross
    if (idx == 4) return QObject::tr("Point de fuite(&V)"); // Vanish
    if (idx == 5) return QObject::tr("Radial(&R)"); // Radial
    if (idx == 6) return QObject::tr("Magnétisme cercle"); // Circle
    if (idx == 7) return QObject::tr("Magnétisme courbe"); // Curve
    if (idx == 8) return QObject::tr("Enregistrement magnétisme(&S)..."); // Save Snap
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Линейка(&N)"); // Snap
    if (idx == 1) return QObject::tr("Отключить привязку(&O)"); // Off
    if (idx == 2) return QObject::tr("Параллельная(&P)"); // Parallel
    if (idx == 3) return QObject::tr("Перекрестная(&C)"); // Crisscross
    if (idx == 4) return QObject::tr("Перспектива(&V)"); // Vanish
    if (idx == 5) return QObject::tr("Радиальная(&R)"); // Radial
    if (idx == 6) return QObject::tr("Круговая"); // Circle
    if (idx == 7) return QObject::tr("Кривая"); // Curve
    if (idx == 8) return QObject::tr("Сохранить привязку(&S)..."); // Save Snap
    if (idx == 9) return QObject::tr("Отрисовать кривую");
    if (idx == 10) return QObject::tr("Отрисовать кривую (затухание)");
    if (idx == 12) return QObject::tr("3D Перспектива");
    if (idx == 13) return QObject::tr("Доб. 3D Перспективу");
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

  if (idx == 0) return QObject::tr("Snap(&N)");
  if (idx == 1) return QObject::tr("Off(&O)");
  if (idx == 2) return QObject::tr("Parallel(&P)");
  if (idx == 3) return QObject::tr("Crisscross(&C)");
  if (idx == 4) return QObject::tr("Vanishing Point(&V)");
  if (idx == 5) return QObject::tr("Radial(&R)");
  if (idx == 6) return QObject::tr("Circle(&E)");
  if (idx == 7) return QObject::tr("Curve(&K)");
  if (idx == 8) return QObject::tr("Save Snap(&S)...");
  if (idx == 9) return QObject::tr("Draw Curve");
  if (idx == 10) return QObject::tr("Draw Curve (Fade In/Out)");

  if (idx == 12) return QObject::tr("3D Perspective");
  if (idx == 13) return QObject::tr("Add 3D Perspective");

  return "";
}
