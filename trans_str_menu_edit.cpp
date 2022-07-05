/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_edit.h"

///////////////////////////////////////////////////////////////////////////
// - 編集メニューで使用される文字列
// - A string used in the edit menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuEdit( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
#if defined(__NEET_QT_MAC__)
    // Mountain Lion のメニュー増殖回避
    if (idx == 0) return QObject::tr(" 編集(&E)"); // Edit
#else
    if (idx == 0) return QObject::tr("編集(&E)"); // Edit
#endif
    if (idx == 1) return QObject::tr("取り消し(&Z)"); // Undo
    if (idx == 2) return QObject::tr("やり直し(&Y)"); // Redo
    if (idx == 3) return QObject::tr("切り取り(&T)"); // Cut
    if (idx == 4) return QObject::tr("コピー(&C)"); // Copy
    if (idx == 5) return QObject::tr("貼り付け(&V)"); // Paste
    if (idx == 6) return QObject::tr("トリミング(&M)"); // Trim
    if (idx == 7) return QObject::tr("左回転(&L)"); // Rotate Left
    if (idx == 8) return QObject::tr("右回転(&R)"); // Rotate Right
    if (idx == 9) return QObject::tr("左右反転(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("画像解像度(&I)..."); // Image Size
    if (idx == 11) return QObject::tr("キャンバスサイズ(&S)..."); // Canvas Size
  }

  if (man->TranslateChineseSimp())
  {
#if defined(__NEET_QT_MAC__)
    if (idx == 0) return QObject::tr(" 编辑(&E)"); // Edit
#else
    if (idx == 0) return QObject::tr("编辑(&E)"); // Edit
#endif
    if (idx == 1) return QObject::tr("取消(&Z)"); // Undo
    if (idx == 2) return QObject::tr("还原(&Y)"); // Redo
    if (idx == 3) return QObject::tr("剪切(&T)"); // Cut
    if (idx == 4) return QObject::tr("复制(&C)"); // Copy
    if (idx == 5) return QObject::tr("粘贴(&V)"); // Paste
    if (idx == 6) return QObject::tr("修整(&M)"); // Trim
    if (idx == 7) return QObject::tr("左旋转(&L)"); // Rotate Left
    if (idx == 8) return QObject::tr("右旋转(&R)"); // Rotate Right
    if (idx == 9) return QObject::tr("左右翻转(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("图像分辨率(&I)..."); // Image Size
    if (idx == 11) return QObject::tr("画布尺寸(&S)..."); // Canvas Size
  }

  if (man->TranslateChineseTrad())
  {
#if defined(__NEET_QT_MAC__)
    if (idx == 0) return QObject::tr(" 編輯(&E)"); // Edit
#else
    if (idx == 0) return QObject::tr("編輯(&E)"); // Edit
#endif
    if (idx == 1) return QObject::tr("取消(&Z)"); // Undo
    if (idx == 2) return QObject::tr("還原(&Y)"); // Redo
    if (idx == 3) return QObject::tr("剪下(&T)"); // Cut
    if (idx == 4) return QObject::tr("複製(&C)"); // Copy
    if (idx == 5) return QObject::tr("黏貼(&V)"); // Paste
    if (idx == 6) return QObject::tr("修整(&M)"); // Trim
    if (idx == 7) return QObject::tr("左旋轉(&L)"); // Rotate Left
    if (idx == 8) return QObject::tr("右旋轉(&R)"); // Rotate Right
    if (idx == 9) return QObject::tr("左右翻轉(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("圖像解析度(&I)..."); // Image Size
    if (idx == 11) return QObject::tr("畫布尺寸(&S)..."); // Canvas Size
  }

  if (man->TranslateKorean())
  {
#if defined(__NEET_QT_MAC__)
    if (idx == 0) return QObject::tr(" 편집(&E)"); // Edit
#else
    if (idx == 0) return QObject::tr("편집(&E)"); // Edit
#endif
    if (idx == 1) return QObject::tr("취소(&Z)"); // Undo
    if (idx == 2) return QObject::tr("다시 하기(&Y)"); // Redo
    if (idx == 3) return QObject::tr("잘라내기(&T)"); // Cut
    if (idx == 4) return QObject::tr("복사(&C)"); // Copy
    if (idx == 5) return QObject::tr("붙여넣기(&V)"); // Paste
    if (idx == 6) return QObject::tr("트리밍(&M)"); // Trim
    if (idx == 7) return QObject::tr("좌회전(&L)"); // Rotate Left
    if (idx == 8) return QObject::tr("우회전(&R)"); // Rotate Right
    if (idx == 9) return QObject::tr("좌우 반전(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("이미지 해상도(&I)..."); // Image Size
    if (idx == 11) return QObject::tr("캔버스 사이즈(&S)..."); // Canvas Size
  }

  if (man->TranslatePortugues())
  {
#if defined(__NEET_QT_MAC__)
    if (idx == 0) return QObject::tr(" Editar(&E)"); // Edit
#else
    if (idx == 0) return QObject::tr("Editar(&E)"); // Edit
#endif
    if (idx == 1) return QObject::tr("Desfazer(&Z)"); // Undo
    if (idx == 2) return QObject::tr("Refazer(&Y)"); // Redo
    if (idx == 3) return QObject::tr("Recortar(&T)"); // Cut
    if (idx == 4) return QObject::tr("Copiar(&C)"); // Copy
    if (idx == 5) return QObject::tr("Colar(&V)"); // Paste
    if (idx == 6) return QObject::tr("Aparar(&M)"); // Trim
    if (idx == 7) return QObject::tr("Girar à Esquerda(&L)"); // Rotate Left
    if (idx == 8) return QObject::tr("Girar à Direita(&R)"); // Rotate Right
    if (idx == 9) return QObject::tr("Inverter Horizontalmente(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Tamanho da Imagem(&I)..."); // Image Size
    if (idx == 11) return QObject::tr("Tamanho da Tela(&S)..."); // Canvas Size
  }

  if (man->TranslateSpanish())
  {
#if defined(__NEET_QT_MAC__)
    if (idx == 0) return QObject::tr(" Editar(&E)"); // Edit
#else
    if (idx == 0) return QObject::tr("Editar(&E)"); // Edit
#endif
    if (idx == 1) return QObject::tr("Deshacer(&Z)"); // Undo
    if (idx == 2) return QObject::tr("Rehacer(&Y)"); // Redo
    if (idx == 3) return QObject::tr("Cortar(&T)"); // Cut
    if (idx == 4) return QObject::tr("Copiar(&C)"); // Copy
    if (idx == 5) return QObject::tr("Pegar(&V)"); // Paste
    if (idx == 6) return QObject::tr("Recortar(&M)"); // Trim
    if (idx == 7) return QObject::tr("Girar a la izquierda(&L)"); // Rotate Left
    if (idx == 8) return QObject::tr("Girar a la derecha(&R)"); // Rotate Right
    if (idx == 9) return QObject::tr("Voltear horizontalmente(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Tamaño de imagen(&I)..."); // Image Size
    if (idx == 11) return QObject::tr("Tamaño del lienzo(&S)..."); // Canvas Size
  }

  if (man->TranslateGerman())
  {
#if defined(__NEET_QT_MAC__)
    if (idx == 0) return QObject::tr(" Bearbeiten(&E)"); // Edit
#else
    if (idx == 0) return QObject::tr("Bearbeiten(&E)"); // Edit
#endif
    if (idx == 1) return QObject::tr("Rückgängig machen(&Z)"); // Undo
    if (idx == 2) return QObject::tr("Wiederholen(&Y)"); // Redo
    if (idx == 3) return QObject::tr("Ausschneiden(&T)"); // Cut
    if (idx == 4) return QObject::tr("Kopien(&C)"); // Copy
    if (idx == 5) return QObject::tr("Einfügen(&V)"); // Paste
    if (idx == 6) return QObject::tr("Trimmen(&M)"); // Trim
    if (idx == 7) return QObject::tr("Nach links drehen(&L)"); // Rotate Left
    if (idx == 8) return QObject::tr("Nach rechts drehen(&R)"); // Rotate Right
    if (idx == 9) return QObject::tr("Horizontal umdrehen(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Bildgröße(&I)..."); // Image Size
    if (idx == 11) return QObject::tr("Leinwandgröße(&S)..."); // Canvas Size
  }

  if (man->TranslateFrench())
  {
#if defined(__NEET_QT_MAC__)
    if (idx == 0) return QObject::tr(" Modifier(&E)"); // Edit
#else
    if (idx == 0) return QObject::tr("Modifier(&E)"); // Edit
#endif
    if (idx == 1) return QObject::tr("Annuler(&Z)"); // Undo
    if (idx == 2) return QObject::tr("Rétablir(&Y)"); // Redo
    if (idx == 3) return QObject::tr("Couper(&T)"); // Cut
    if (idx == 4) return QObject::tr("Copier(&C)"); // Copy
    if (idx == 5) return QObject::tr("Coller(&V)"); // Paste
    if (idx == 6) return QObject::tr("Recadrer(&M)"); // Trim
    if (idx == 7) return QObject::tr("Faire pivoter à gauche(&L)"); // Rotate Left
    if (idx == 8) return QObject::tr("Faire pivoter à droite(&R)"); // Rotate Right
    if (idx == 9) return QObject::tr("Faire basculer l’image horizontalement(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Taille de l'image(&I)..."); // Image Size
    if (idx == 11) return QObject::tr("Taille de la zone de travail(&S)..."); // Canvas Size
  }

  if (man->TranslateRussian())
  {
#if defined(__NEET_QT_MAC__)
    if (idx == 0) return QObject::tr(" Редактировать(&E)"); // Edit
#else
    if (idx == 0) return QObject::tr("Редактировать(&E)"); // Edit
#endif
    if (idx == 1) return QObject::tr("Отменить(&Z)"); // Undo
    if (idx == 2) return QObject::tr("Повторить(&Y)"); // Redo
    if (idx == 3) return QObject::tr("Вырезать(&T)"); // Cut
    if (idx == 4) return QObject::tr("Копировать(&C)"); // Copy
    if (idx == 5) return QObject::tr("Вставить(&V)"); // Paste
    if (idx == 6) return QObject::tr("Обрезать(&M)"); // Trim
    if (idx == 7) return QObject::tr("Повернуть влево(&L)"); // Rotate Left
    if (idx == 8) return QObject::tr("Повернуть вправо(&R)"); // Rotate Right
    if (idx == 9) return QObject::tr("Отразить по горизонтали(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Размер изображения(&I)..."); // Image Size
    if (idx == 11) return QObject::tr("Размер холста(&S)..."); // Canvas Size
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


#if defined(__NEET_QT_MAC__)
  // Mountain Lion のメニュー増殖回避
  if (idx == 0) return QObject::tr(" Edit(&E)");
#else
  if (idx == 0) return QObject::tr("Edit(&E)");
#endif
  if (idx == 1) return QObject::tr("Undo(&Z)");
  if (idx == 2) return QObject::tr("Redo(&Y)");
  if (idx == 3) return QObject::tr("Cut(&T)");
  if (idx == 4) return QObject::tr("Copy(&C)");
  if (idx == 5) return QObject::tr("Paste(&V)");
  if (idx == 6) return QObject::tr("Crop(&M)");
  if (idx == 7) return QObject::tr("Rotate Left(&L)");
  if (idx == 8) return QObject::tr("Rotate Right(&R)");
  if (idx == 9) return QObject::tr("Flip Horizontally(&H)");
  if (idx == 10) return QObject::tr("Image Size(&I)...");
  if (idx == 11) return QObject::tr("Canvas Size(&S)...");

  return "";
}
