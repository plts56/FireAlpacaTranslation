/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_3d.h"

///////////////////////////////////////////////////////////////////////////
// - 3Dパースウィンドウ上で表示される文字列
// - String displayed on the 3D perspective window.
///////////////////////////////////////////////////////////////////////////
QString Trans_Str3D( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("3Dパースを編集");
    if (idx == 1) return QObject::tr("長辺の分割数");
    if (idx == 2) return QObject::tr("短辺の分割数");
    if (idx == 3) return QObject::tr("標準カメラ");
    if (idx == 4) return QObject::tr("更新");
    if (idx == 5) return QObject::tr("編集を適用しないで閉じますか？");
    if (idx == 6) return QObject::tr("画角");
    if (idx == 7) return QObject::tr("度");

    if (idx == 10) return QObject::tr("カメラモード");
    if (idx == 11) return QObject::tr("選択ツール");
    if (idx == 12) return QObject::tr("移動ツール");
    if (idx == 13) return QObject::tr("回転ツール");
    if (idx == 14) return QObject::tr("キャンバスを合成して表示");
    if (idx == 15) return QObject::tr("裏面を表示しない");
    if (idx == 16) return QObject::tr("オブジェクトを接地させる");

    if (idx == 20) return QObject::tr("ボックスを追加");
    if (idx == 21) return QObject::tr("板を追加");
    if (idx == 22) return QObject::tr("カメラを追加");
    if (idx == 23) return QObject::tr("削除");
    if (idx == 24) return QObject::tr("複製");

    if (idx == 30) return QObject::tr("クリックでアクティブなオブジェクトを選択");
    if (idx == 31) return QObject::tr("ドラッグでカメラ回転、右ドラッグでカメラ移動、マウスホイールでズーム");
    if (idx == 32) return QObject::tr("ドラッグでオブジェクトの移動、右ドラッグでオブジェクトを上下");
    if (idx == 33) return QObject::tr("スライダー操作でオブジェクトを回転 (右クリックでリセット)");
    if (idx == 34) return QObject::tr("ステージは操作できません");
    if (idx == 35) return QObject::tr("カメラは操作できません");

    if (idx == 40) return QObject::tr("3Dオブジェクト プロパティ");
    if (idx == 41) return QObject::tr("名前");
  }

  if (man->TranslateChineseSimp())
  {
  }

  if (man->TranslateChineseTrad())
  {
  }

  if (man->TranslateKorean())
  {
  }

  if (man->TranslatePortugues())
  {
  }

  if (man->TranslateSpanish())
  {
  }

  if (man->TranslateGerman())
  {
  }

  if (man->TranslateFrench())
  {
  }

  if (man->TranslateRussian())
  {
  if (idx == 0) return QObject::tr("Редактор 3D-перспективы"); // 3Dパースを編集
  if (idx == 1) return QObject::tr("Деления длинной стороны"); // 長辺の分割数
  if (idx == 2) return QObject::tr("Деления короткой стороны"); // 短辺の分割数
  if (idx == 3) return QObject::tr("Камера по умолчанию"); // 標準カメラ
  if (idx == 4) return QObject::tr("Обновить"); // 更新
  if (idx == 5) return QObject::tr("Закрыть без применения обновлений?"); // 編集を適用しないで閉じますか？
  if (idx == 6) return QObject::tr("FOV");
  if (idx == 7) return QObject::tr("град.");
 
  if (idx == 10) return QObject::tr("Режим камеры"); // カメラモード
  if (idx == 11) return QObject::tr("Инструмент Выбор"); // 選択ツール
  if (idx == 12) return QObject::tr("Инструмент Перемещение"); // 移動ツール
  if (idx == 13) return QObject::tr("Инструмент Поворот"); // 回転ツール
  if (idx == 14) return QObject::tr("Показать композицию холста"); // キャンバスを合成して表示
  if (idx == 15) return QObject::tr("Скрыть Back Side"); // 裏面を表示しない
  if (idx == 16) return QObject::tr("Приземлить объект"); // オブジェクトを接地させる

  if (idx == 20) return QObject::tr("Доб. коробку"); // ボックスを追加
  if (idx == 21) return QObject::tr("Доб. плоскость"); // 板を追加
  if (idx == 22) return QObject::tr("Доб. камеру"); // カメラを追加
  if (idx == 23) return QObject::tr("Удалить"); // 削除
  if (idx == 24) return QObject::tr("Дублировать");

  if (idx == 30) return QObject::tr("Кликните для выбора текущего объекта"); // クリックでアクティブなオブジェクトを選択
  if (idx == 31) return QObject::tr("ЛКМ - поворот камеры, ПКМ - перемещение, колесо мыши - масштаб"); // ドラッグでカメラ回転、右ドラッグでカメラ移動、マウスホイールでズーム
  if (idx == 32) return QObject::tr("ЛКМ - передвинуть объект, ПКМ - поднять/опустить объект"); // ドラッグでオブジェクトの移動、右ドラッグでオブジェクトを上下
  if (idx == 33) return QObject::tr("Исп. ползунки для вращения объекта(ПКМ - для сброса)"); // スライダー操作でオブジェクトを回転 (右クリックでリセット)
  if (idx == 34) return QObject::tr("Управление сценой невозможно"); // ステージは操作できません
  if (idx == 35) return QObject::tr("Управление камерой невозможно"); // カメラは操作できません

  if (idx == 40) return QObject::tr("Свойства 3D Объекта");
  if (idx == 41) return QObject::tr("Имя");
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslatePolish())
  {
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Edit 3D Perspective"); // 3Dパースを編集
  if (idx == 1) return QObject::tr("Div Num of Long Side"); // 長辺の分割数
  if (idx == 2) return QObject::tr("Div Num of Short Side"); // 短辺の分割数
  if (idx == 3) return QObject::tr("Default Camera"); // 標準カメラ
  if (idx == 4) return QObject::tr("Update"); // 更新
  if (idx == 5) return QObject::tr("Close without applying updates?"); // 編集を適用しないで閉じますか？
  if (idx == 6) return QObject::tr("FOV");
  if (idx == 7) return QObject::tr("deg");

  if (idx == 10) return QObject::tr("Camera Mode"); // カメラモード
  if (idx == 11) return QObject::tr("Select Tool"); // 選択ツール
  if (idx == 12) return QObject::tr("Move Tool"); // 移動ツール
  if (idx == 13) return QObject::tr("Rotation Tool"); // 回転ツール
  if (idx == 14) return QObject::tr("Show the Composite Canvas"); // キャンバスを合成して表示
  if (idx == 15) return QObject::tr("Hide the Back Side"); // 裏面を表示しない
  if (idx == 16) return QObject::tr("Ground an Object"); // オブジェクトを接地させる

  if (idx == 20) return QObject::tr("Add Box"); // ボックスを追加
  if (idx == 21) return QObject::tr("Add Plane"); // 板を追加
  if (idx == 22) return QObject::tr("Add Camera"); // カメラを追加
  if (idx == 23) return QObject::tr("Delete"); // 削除
  if (idx == 24) return QObject::tr("Duplicate");

  if (idx == 30) return QObject::tr("Click to select an active object"); // クリックでアクティブなオブジェクトを選択
  if (idx == 31) return QObject::tr("Drag to rotate a camera, Right-drag to move a camera, Use the mouse wheel to zoom"); // ドラッグでカメラ回転、右ドラッグでカメラ移動、マウスホイールでズーム
  if (idx == 32) return QObject::tr("Drag to move an object, Right-drag to move up/down an object"); // ドラッグでオブジェクトの移動、右ドラッグでオブジェクトを上下
  if (idx == 33) return QObject::tr("Use the slider control to rotate an object (Right-click to reset)"); // スライダー操作でオブジェクトを回転 (右クリックでリセット)
  if (idx == 34) return QObject::tr("Stage cannot be controlled"); // ステージは操作できません
  if (idx == 35) return QObject::tr("Camera cannot be controlled"); // カメラは操作できません

  if (idx == 40) return QObject::tr("3D Object Property");
  if (idx == 41) return QObject::tr("Name");

  return "";
}
