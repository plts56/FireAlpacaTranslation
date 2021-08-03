/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_palette.h"

///////////////////////////////////////////////////////////////////////////
// - パレットウィンドウで使用される文字列
// - A string used in the Palette window.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrPalette( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("色の追加");
    if (idx == 1) return QObject::tr("色の削除");
    if (idx == 2) return QObject::tr("削除しますか？");
    if (idx == 3) return QObject::tr("グループ内のパレットは全て削除されますが、よろしいですか？");

    if (idx == 100) return QObject::tr("色の追加");
    if (idx == 101) return QObject::tr("色の編集");
    if (idx == 102) return QObject::tr("名前");
    if (idx == 103) return QObject::tr("元の色");
    if (idx == 104) return QObject::tr("現在の色");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("添加颜色");
    if (idx == 1) return QObject::tr("删除颜色");
    if (idx == 2) return QObject::tr("是否删除？");

    if (idx == 100) return QObject::tr("追加颜色");
    if (idx == 101) return QObject::tr("编辑颜色");
    if (idx == 102) return QObject::tr("名称");
    if (idx == 103) return QObject::tr("原本色");
    if (idx == 104) return QObject::tr("现在色");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("顏色的追加");
    if (idx == 1) return QObject::tr("顏色的刪除");
    if (idx == 2) return QObject::tr("是否刪除？");

    if (idx == 100) return QObject::tr("追加顏色");
    if (idx == 101) return QObject::tr("編輯顏色");
    if (idx == 102) return QObject::tr("名字");
    if (idx == 103) return QObject::tr("原本色");
    if (idx == 104) return QObject::tr("現在色");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("색의 추가");
    if (idx == 1) return QObject::tr("색의 삭제");
    if (idx == 2) return QObject::tr("삭제합니까?");

    if (idx == 100) return QObject::tr("색 추가");
    if (idx == 101) return QObject::tr("색 편집");
    if (idx == 102) return QObject::tr("이름");
    if (idx == 103) return QObject::tr("원래 색");
    if (idx == 104) return QObject::tr("현재 색");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Adicionar Cor");
    if (idx == 1) return QObject::tr("Excluir Cor");
    if (idx == 2) return QObject::tr("Excluir esta cor?");

    if (idx == 100) return QObject::tr("Adicionar Cor");
    if (idx == 101) return QObject::tr("Editar Cor");
    if (idx == 102) return QObject::tr("Nome");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Agregar color");
    if (idx == 1) return QObject::tr("Borrar color");
    if (idx == 2) return QObject::tr("¿Desea borrar este color?");

    if (idx == 100) return QObject::tr("Agregar color");
    if (idx == 101) return QObject::tr("Editar color");
    if (idx == 102) return QObject::tr("Nombre");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Farbe hinzufügen");
    if (idx == 1) return QObject::tr("Farbe löschen");
    if (idx == 2) return QObject::tr("Diese Farbe löschen?");

    if (idx == 100) return QObject::tr("Farbe hinzufügen");
    if (idx == 101) return QObject::tr("Farbe editieren");
    if (idx == 102) return QObject::tr("Name");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Ajouter une couleur");
    if (idx == 1) return QObject::tr("Supprimer une couleur");
    if (idx == 2) return QObject::tr("Voulez-vous supprimer cette couleur?");

    if (idx == 100) return QObject::tr("Ajouter une couleur");
    if (idx == 101) return QObject::tr("Modifier une couleur");
    if (idx == 102) return QObject::tr("Nom");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Добавить цвет");
    if (idx == 1) return QObject::tr("Удалить цвет");
    if (idx == 2) return QObject::tr("Удалите этот цвет?");

    if (idx == 100) return QObject::tr("Добавить цвет");
    if (idx == 101) return QObject::tr("Изменить цвет");
    if (idx == 102) return QObject::tr("Имя");
    if (idx == 103) return QObject::tr("Предыдущий цвет");
    if (idx == 104) return QObject::tr("Текущий цвет");
  }

  if (man->TranslateHindi())
  {
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Add Color");
  if (idx == 1) return QObject::tr("Delete Color");
  if (idx == 2) return QObject::tr("Delete this color?");
  if (idx == 3) return QObject::tr("All palettes in the group will be deleted. Are you sure?");

  if (idx == 100) return QObject::tr("Add Color");
  if (idx == 101) return QObject::tr("Edit Color");
  if (idx == 102) return QObject::tr("Name");
  if (idx == 103) return QObject::tr("Previous Color");
  if (idx == 104) return QObject::tr("Current Color");

  return "";
}
