/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_select.h"

///////////////////////////////////////////////////////////////////////////
// - 選択メニューで使用される文字列
// - A string used in the select menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuSelect( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("選択範囲(&S)"); // Select
    if (idx == 1) return QObject::tr("全て選択(&A)"); // Add
    if (idx == 2) return QObject::tr("解除(&D)"); // Deselect
    if (idx == 3) return QObject::tr("反転(&I)"); // Inverse
    if (idx == 4) return QObject::tr("拡張(&E)..."); // Expand
    if (idx == 5) return QObject::tr("収縮(&C)..."); // Contract
    if (idx == 6) return QObject::tr("レイヤーを元に作成 / 不透明度(&O)"); // Create Selection from Layer (Opacity)
    if (idx == 7) return QObject::tr("レイヤーを元に作成 / 輝度(&B)"); // Create Selection from Layer (Brightness)
    if (idx == 8) return QObject::tr("変形(&T)"); // Transform
    if (idx == 9) return QObject::tr("選択境界の描画(&B)..."); // Draw Selection Border
    if (idx == 10) return QObject::tr("メッシュ変形(&M)"); // Mesh Transform
    if (idx == 11) return QObject::tr("選択範囲外をハイライト(&H)"); // Highlight Outside
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("选择(&S)"); // Select
    if (idx == 1) return QObject::tr("全部选择(&A)"); // Add
    if (idx == 2) return QObject::tr("解除(&D)"); // Deselect
    if (idx == 3) return QObject::tr("反转(&I)"); // Inverse
    if (idx == 4) return QObject::tr("扩张(&E)..."); // Expand
    if (idx == 5) return QObject::tr("收缩(&C)..."); // Contract
    if (idx == 6) return QObject::tr("创建选择层/不透明度(&O)"); // Create Selection from Layer (Opacity)
    if (idx == 7) return QObject::tr("创建选择层/亮度(&B)"); // Create Selection from Layer (Brightness)
    if (idx == 8) return QObject::tr("变形(&T)"); // Transform
    if (idx == 9) return QObject::tr("选择境界的描绘(&B)..."); // Draw Selection Border
    if (idx == 10) return QObject::tr("网格变换(&M)"); // Mesh Transform
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("選擇(&S)"); // Select
    if (idx == 1) return QObject::tr("全部選擇(&A)"); // Add
    if (idx == 2) return QObject::tr("解除(&D)"); // Deselect
    if (idx == 3) return QObject::tr("反轉(&I)"); // Inverse
    if (idx == 4) return QObject::tr("擴張(&E)..."); // Expand
    if (idx == 5) return QObject::tr("收縮(&C)..."); // Contract
    if (idx == 6) return QObject::tr("創建選擇層/不透明度(&O)"); // Create Selection from Layer (Opacity)
    if (idx == 7) return QObject::tr("創建選擇層/亮度(&B)"); // Create Selection from Layer (Brightness)
    if (idx == 8) return QObject::tr("變形(&T)"); // Transform
    if (idx == 9) return QObject::tr("選擇境界的描繪(&B)..."); // Draw Selection Border
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("선택(&S)"); // Select
    if (idx == 1) return QObject::tr("모두 선택(&A)"); // Add
    if (idx == 2) return QObject::tr("해제(&D)"); // Deselect
    if (idx == 3) return QObject::tr("반전(&I)"); // Inverse
    if (idx == 4) return QObject::tr("확장(&E)..."); // Expand
    if (idx == 5) return QObject::tr("수축(&C)..."); // Contract
    if (idx == 6) return QObject::tr("레이어를 바탕으로 작성/불투명도(&O)"); // Create Selection from Layer (Opacity)
    if (idx == 7) return QObject::tr("레이어를 바탕으로 작성/휘도(&B)"); // Create Selection from Layer (Brightness)
    if (idx == 8) return QObject::tr("변형(&T)"); // Transform
    if (idx == 9) return QObject::tr("선택 경계 그리기(&B)..."); // Draw Selection Border
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Selecionar(&S)"); // Select
    if (idx == 1) return QObject::tr("Todos(&A)"); // Add
    if (idx == 2) return QObject::tr("Cancelar Seleção(&D)"); // Deselect
    if (idx == 3) return QObject::tr("Inverso(&I)"); // Inverse
    if (idx == 4) return QObject::tr("Expandir(&E)..."); // Expand
    if (idx == 5) return QObject::tr("Encolher(&C)..."); // Contract
    if (idx == 6) return QObject::tr("Criar seleção a partir da camada / Opacidade(&O)"); // Create Selection from Layer (Opacity)
    if (idx == 7) return QObject::tr("Criar seleção a partir da camada / Brilho(&B)"); // Create Selection from Layer (Brightness)
    if (idx == 8) return QObject::tr("Transformar(&T)"); // Transform
    if (idx == 9) return QObject::tr("Desenhar Borda de Seleção(&B)..."); // Draw Selection Border
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Seleccionar(&S)"); // Select
    if (idx == 1) return QObject::tr("Todo(&A)"); // Add
    if (idx == 2) return QObject::tr("Quitar selección(&D)"); // Deselect
    if (idx == 3) return QObject::tr("Invertir(&I)"); // Inverse
    if (idx == 4) return QObject::tr("Expandir(&E)..."); // Expand
    if (idx == 5) return QObject::tr("Contraer(&C)..."); // Contract
    if (idx == 6) return QObject::tr("Crear selección desde Capa / Opacidad(&O)"); // Create Selection from Layer (Opacity)
    if (idx == 7) return QObject::tr("Crear selección desde Capa / Brillo(&B)"); // Create Selection from Layer (Brightness)
    if (idx == 8) return QObject::tr("Transformar(&T)"); // Transform
    if (idx == 9) return QObject::tr("Dibujar borde de la selección(&B)..."); // Draw Selection Border
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Auswählen(&S)"); // Select
    if (idx == 1) return QObject::tr("Alles(&A)"); // Add
    if (idx == 2) return QObject::tr("Deaktivieren(&D)"); // Deselect
    if (idx == 3) return QObject::tr("Invertieren(&I)"); // Inverse
    if (idx == 4) return QObject::tr("Erweitern(&E)..."); // Expand
    if (idx == 5) return QObject::tr("Kontakt(&C)..."); // Contract
    if (idx == 6) return QObject::tr("Ebene / Deckkraft aus Selektion wählen(&O)"); // Create Selection from Layer (Opacity)
    if (idx == 7) return QObject::tr("Ebene / Helligkeit aus Selektion wählen(&B)"); // Create Selection from Layer (Brightness)
    if (idx == 8) return QObject::tr("Umwandeln(&T)"); // Transform
    if (idx == 9) return QObject::tr("Auswahlrahmen zeichnen(&B)..."); // Draw Selection Border
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Sélectionner(&S)"); // Select
    if (idx == 1) return QObject::tr("Tout(&A)"); // Add
    if (idx == 2) return QObject::tr("Désélectionner(&D)"); // Deselect
    if (idx == 3) return QObject::tr("Intervertir(&I)"); // Inverse
    if (idx == 4) return QObject::tr("Dilater(&E)..."); // Expand
    if (idx == 5) return QObject::tr("Contracter(&C)..."); // Contract
    if (idx == 6) return QObject::tr("Créer une sélection d’après un calque / Opacité(&O)"); // Create Selection from Layer (Opacity)
    if (idx == 7) return QObject::tr("Créer une sélection d’après un calque / Luminosité(&B)"); // Create Selection from Layer (Brightness)
    if (idx == 8) return QObject::tr("Transformer(&T)"); // Transform
    if (idx == 9) return QObject::tr("Tracer une bordure de sélection(&B)..."); // Draw Selection Border
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Выделить(&S)"); // Select
    if (idx == 1) return QObject::tr("Все(&A)"); // Add
    if (idx == 2) return QObject::tr("Отменить(&D)"); // Deselect
    if (idx == 3) return QObject::tr("Инверсия(&I)"); // Inverse
    if (idx == 4) return QObject::tr("Расширить(&E)..."); // Expand
    if (idx == 5) return QObject::tr("Сжать(&C)..."); // Contract
    if (idx == 6) return QObject::tr("Выделить на слое / непрозрачность(&O)"); // Create Selection from Layer (Opacity)
    if (idx == 7) return QObject::tr("Выделить на слое / яркость(&B)"); // Create Selection from Layer (Brightness)
    if (idx == 8) return QObject::tr("Преобразовать(&T)"); // Transform
    if (idx == 9) return QObject::tr("Нарисовать границы выделения(&B)..."); // Draw Selection Border
  }

  if (idx == 0) return QObject::tr("Select(&S)");
  if (idx == 1) return QObject::tr("Add(&A)");
  if (idx == 2) return QObject::tr("Deselect(&D)");
  if (idx == 3) return QObject::tr("Inverse(&I)");
  if (idx == 4) return QObject::tr("Expand(&E)...");
  if (idx == 5) return QObject::tr("Contract(&C)...");
  if (idx == 6) return QObject::tr("Create Selection from Layer (&Opacity)");
  if (idx == 7) return QObject::tr("Create Selection from Layer (&Brightness)");
  if (idx == 8) return QObject::tr("Transform(&T)"); //
  if (idx == 9) return QObject::tr("Draw Selection Border(&B)...");
  if (idx == 10) return QObject::tr("Mesh Transform(&M)");
  if (idx == 11) return QObject::tr("Highlight Outside(&H)");

  return "";
}
