/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_brush_bottom.h"

///////////////////////////////////////////////////////////////////////////
// - ブラシウィンドウ下部のボタンで使用される文字列
// - The string used by the button at the bottom of the brush window.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrBrushBottom( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("ブラシの追加");
    if (idx == 1) return QObject::tr("ブラシの複製");
    if (idx == 2) return QObject::tr("ブラシの削除");
    if (idx == 3) return QObject::tr("このブラシを削除しますか？");
    if (idx == 4) return QObject::tr("ブラシの追加 (ビットマップ)");
    if (idx == 5) return QObject::tr("ブラシの追加 (スクリプト)");
    if (idx == 6) return QObject::tr("高負荷なスクリプトのため、追加を中止します");
    if (idx == 7) return QObject::tr("ブラシグループの追加");
    if (idx == 8) return QObject::tr("キャンバスから追加");
    if (idx == 9) return QObject::tr("ファイルから追加");
    if (idx == 20) return QObject::tr("プリセットブラシを追加");
    if (idx == 21) return QObject::tr("ブラシストアを表示 (ブラシを入手する)");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("添加笔刷");
    if (idx == 1) return QObject::tr("复制笔刷");
    if (idx == 2) return QObject::tr("删除笔刷");
    if (idx == 3) return QObject::tr("确认删除此笔刷？");
    if (idx == 4) return QObject::tr("添加笔刷 (点阵)");
    if (idx == 5) return QObject::tr("添加笔刷 (脚本)");
    if (idx == 6) return QObject::tr("由于脚本档案过大，中止添加。");
    if (idx == 7) return QObject::tr("添加笔刷组");
    if (idx == 8) return QObject::tr("从画布追加");
    if (idx == 9) return QObject::tr("从文件夹追加");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("添加筆刷");
    if (idx == 1) return QObject::tr("複製筆刷");
    if (idx == 2) return QObject::tr("刪除筆刷");
    if (idx == 3) return QObject::tr("確定要刪除此筆刷？");
    if (idx == 4) return QObject::tr("添加筆刷(點陣)");
    if (idx == 5) return QObject::tr("添加筆刷(腳本)");
    if (idx == 6) return QObject::tr("因腳本檔案過大，中止追加。");
    if (idx == 7) return QObject::tr("新增筆刷群組");
    if (idx == 8) return QObject::tr("從畫布追加");
    if (idx == 9) return QObject::tr("從檔案追加");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("브러시 추가");
    if (idx == 1) return QObject::tr("브러시 복제");
    if (idx == 2) return QObject::tr("브러시 삭제");
    if (idx == 3) return QObject::tr("이 브러시를 삭제합니까?");
    if (idx == 4) return QObject::tr("브러시 추가(비트맵)");
    if (idx == 5) return QObject::tr("브러시 추가(스크립트)");
    if (idx == 6) return QObject::tr("고부하의 스크립트이기 때문에, 추가를 중지합니다");
    if (idx == 7) return QObject::tr("브러시그룹 추가");
    if (idx == 8) return QObject::tr("캔버스에서 추가");
    if (idx == 9) return QObject::tr("파일로 추가");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Adicionar Pincel");
    if (idx == 1) return QObject::tr("Duplicar Pincel");
    if (idx == 2) return QObject::tr("Excluir Pincel");
    if (idx == 3) return QObject::tr("Excluir este pincel?");
    if (idx == 4) return QObject::tr("Adicionar pincel (bitmap)");
    if (idx == 5) return QObject::tr("Adicionar pincel (script)");
    if (idx == 6) return QObject::tr("A adição de um arquivo será cancelada devido a um arquivo de script de alta carga.");
    if (idx == 7) return QObject::tr("Adicionar grupo de pincéis");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Agregar pincel");
    if (idx == 1) return QObject::tr("Duplicar pincel");
    if (idx == 2) return QObject::tr("Borrar pincel");
    if (idx == 3) return QObject::tr("¿Desea borrar este pincel?");
    if (idx == 4) return QObject::tr("Añadir pincel (mapa de bits)");
    if (idx == 5) return QObject::tr("Añadir pincel (script)");
    if (idx == 6) return QObject::tr("El archivo script es demasiado grande, por lo que se cancelará la adición del archivo.");
    if (idx == 7) return QObject::tr("Añadir grupo de pinceles");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Pinsel hinzufügen");
    if (idx == 1) return QObject::tr("Pinsel duplizieren");
    if (idx == 2) return QObject::tr("Pinsel löschen");
    if (idx == 3) return QObject::tr("Diesen Pinsel löschen?");
    if (idx == 4) return QObject::tr("Pinsel hinzufügen (Bitmap)");
    if (idx == 5) return QObject::tr("Pinsel hinzufügen (Script)");
    if (idx == 6) return QObject::tr("Script-Datei zu groß. Hinzufügen abgebrochen. ");
    if (idx == 7) return QObject::tr("Pinselgruppe hinzufügen");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Ajouter un pinceau");
    if (idx == 1) return QObject::tr("Dupliquer le pinceau");
    if (idx == 2) return QObject::tr("Supprimer le pinceau");
    if (idx == 3) return QObject::tr("Voulez-vous supprimer le pinceau?");
    if (idx == 4) return QObject::tr("Ajouter un pinceau (Bitmap)");
    if (idx == 5) return QObject::tr("Ajouter un pinceau (Script)");
    if (idx == 6) return QObject::tr("Annulation de l'ajout de fichier pour cause de surcharge de script.");
    if (idx == 7) return QObject::tr("Ajouter un groupe de pinceaux");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Добавить кисть");
    if (idx == 1) return QObject::tr("Дубликат кисти");
    if (idx == 2) return QObject::tr("Удалить кисть");
    if (idx == 3) return QObject::tr("Удалить эту кисть?");
    if (idx == 4) return QObject::tr("Добавить кисть (Битовая карта)");
    if (idx == 5) return QObject::tr("Добавить кисть (Сценарий)");
    if (idx == 6) return QObject::tr("Добавление файла будет отменено из-за высоконагруженного файла сценария. ");
    if (idx == 7) return QObject::tr("Добавить группу кистей");
    if (idx == 8) return QObject::tr("Из холста");
    if (idx == 9) return QObject::tr("Из файла");
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Add Brush"); // ブラシの追加
  if (idx == 1) return QObject::tr("Duplicate Brush"); // ブラシの複製
  if (idx == 2) return QObject::tr("Delete Brush"); // ブラシの削除
  if (idx == 3) return QObject::tr("Delete this brush?"); // このブラシを削除しますか？
  if (idx == 4) return QObject::tr("Add Brush (Bitmap)"); // ブラシの追加 (ビットマップ)
  if (idx == 5) return QObject::tr("Add Brush (Script)"); // ブラシの追加 (スクリプト)
  if (idx == 6) return QObject::tr("Adding a file will be canceled due to high-load script file."); // 高負荷なスクリプトのため、追加を中止します
  if (idx == 7) return QObject::tr("Add Brush Group"); // ブラシグループの追加
  if (idx == 8) return QObject::tr("From Canvas");  // キャンバスから追加
  if (idx == 9) return QObject::tr("From File");  // ファイルから追加
  if (idx == 20) return QObject::tr("Add Preset Brush");
  if (idx == 21) return QObject::tr("Show Brush Store (Get a brush)");
  return "";
}
