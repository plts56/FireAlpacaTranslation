/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_brush_list.h"

///////////////////////////////////////////////////////////////////////////
// - ブラシリストウィンドウや、ブラシプリセットで使用される文字列
// - A string used in the Brush List window and in brush presets.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrBrushList( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("ペン");
    if (idx == 1) return QObject::tr("鉛筆");
    if (idx == 2) return QObject::tr("エアブラシ");
    if (idx == 3) return QObject::tr("消しゴム");
    if (idx == 4) return QObject::tr("水彩");
    if (idx == 5) return QObject::tr("ぼかし");
    if (idx == 6) return QObject::tr("指先");
    if (idx == 7) return QObject::tr("不正なスクリプトです");
    if (idx == 8) return QObject::tr("グループ名の変更...");
    if (idx == 9) return QObject::tr("グループの削除");
    if (idx == 10) return QObject::tr("ペン (入り抜き)");
    if (idx == 11) return QObject::tr("グループを上に移動");
    if (idx == 12) return QObject::tr("グループを下に移動");

    if (idx == 15) return QObject::tr("葉っぱ");
    if (idx == 16) return QObject::tr("花");
    if (idx == 17) return QObject::tr("粒子");
    if (idx == 18) return QObject::tr("平筆");
    if (idx == 19) return QObject::tr("星");
    if (idx == 20) return QObject::tr("茎");
    if (idx == 21) return QObject::tr("矢印");
    if (idx == 22) return QObject::tr("雷文");

    if (idx == 30) return QObject::tr("FireAlpaca ブラシ形式 (*.mdb)");
    if (idx == 31) return QObject::tr("ブラシファイルの保存");
    if (idx == 32) return QObject::tr("ブラシファイルの読み込み");

    if (idx == 40) return QObject::tr(" (ハード)");
    if (idx == 41) return QObject::tr(" (ソフト)");
    if (idx == 42) return QObject::tr(" (キャンバス)");
    if (idx == 43) return QObject::tr(" (スケッチブック)");
    if (idx == 44) return QObject::tr(" (にじみ)");

    if (idx == 100) return QObject::tr("マーカー");
    if (idx == 101) return QObject::tr("もこもこ");
    if (idx == 102) return QObject::tr("左右対称");
    if (idx == 103) return QObject::tr("回転対称");
    if (idx == 104) return QObject::tr("とげ");
    if (idx == 105) return QObject::tr("カケアミ");
    if (idx == 106) return QObject::tr("水玉");
    if (idx == 107) return QObject::tr("アナログペン (c)宇河弘樹");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("笔刷");
    if (idx == 1) return QObject::tr("铅笔");
    if (idx == 2) return QObject::tr("喷枪");
    if (idx == 3) return QObject::tr("橡皮擦");
    if (idx == 4) return QObject::tr("水彩");
    if (idx == 5) return QObject::tr("模糊");
    if (idx == 6) return QObject::tr("指尖");
    if (idx == 7) return QObject::tr("脚本错误");
    if (idx == 8) return QObject::tr("更改组名...");
    if (idx == 9) return QObject::tr("删除组");
    if (idx == 10) return QObject::tr("笔刷 (淡入淡出)");
    if (idx == 11) return QObject::tr("将笔刷组向上移动");
    if (idx == 12) return QObject::tr("将笔刷组向下移动");

    if (idx == 15) return QObject::tr("叶子");
    if (idx == 16) return QObject::tr("花");
    if (idx == 17) return QObject::tr("粒子");
    if (idx == 18) return QObject::tr("平笔");
    if (idx == 19) return QObject::tr("星");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("畫筆");
    if (idx == 1) return QObject::tr("鉛筆");
    if (idx == 2) return QObject::tr("噴槍");
    if (idx == 3) return QObject::tr("橡皮擦");
    if (idx == 4) return QObject::tr("水彩");
    if (idx == 5) return QObject::tr("模糊");
    if (idx == 6) return QObject::tr("塗抹");
    if (idx == 7) return QObject::tr("腳本錯誤");
    if (idx == 8) return QObject::tr("變更群組名稱...");
    if (idx == 9) return QObject::tr("取消群組");
    if (idx == 10) return QObject::tr("畫筆(強迫淡入/淡出)");
    if (idx == 11) return QObject::tr("將群組向上移動");
    if (idx == 12) return QObject::tr("將群組向下移動");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("펜");
    if (idx == 1) return QObject::tr("연필");
    if (idx == 2) return QObject::tr("에어브러시");
    if (idx == 3) return QObject::tr("지우개");
    if (idx == 4) return QObject::tr("수채");
    if (idx == 5) return QObject::tr("블러");
    if (idx == 6) return QObject::tr("손가락");
    if (idx == 7) return QObject::tr("부정확한 스크립트입니다");
    if (idx == 8) return QObject::tr("그룹명 변경...");
    if (idx == 9) return QObject::tr("그룹 삭제");
    if (idx == 10) return QObject::tr("펜 (페이드 인/아웃)");
    if (idx == 11) return QObject::tr("그룹을 위로 이동");
    if (idx == 12) return QObject::tr("그룹을 아래로 이동");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Caneta");
    if (idx == 1) return QObject::tr("Lápis");
    if (idx == 2) return QObject::tr("Spray");
    if (idx == 3) return QObject::tr("Borracha");
    if (idx == 4) return QObject::tr("Aquarela");
    if (idx == 5) return QObject::tr("Borrar");
    if (idx == 6) return QObject::tr("Borrador");
    if (idx == 7) return QObject::tr("Erro de script");
    if (idx == 8) return QObject::tr("Editar nome de grupo...");
    if (idx == 9) return QObject::tr("Apagar grupo");
    if (idx == 10) return QObject::tr("Caneta (forçar fade in/out)");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Pluma");
    if (idx == 1) return QObject::tr("Lápiz");
    if (idx == 2) return QObject::tr("Aerógrafo");
    if (idx == 3) return QObject::tr("Borrador");
    if (idx == 4) return QObject::tr("Acuarela");
    if (idx == 5) return QObject::tr("Difuminar");
    if (idx == 6) return QObject::tr("Mancha");
    if (idx == 7) return QObject::tr("Error de script");
    if (idx == 8) return QObject::tr("Editar nombre del grupo...");
    if (idx == 9) return QObject::tr("Eliminar grupo");
    if (idx == 10) return QObject::tr("Lápiz (forzar difuminado/atenuación)");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Stift");
    if (idx == 1) return QObject::tr("Bleistift");
    if (idx == 2) return QObject::tr("Air-Brush");
    if (idx == 3) return QObject::tr("Radierer");
    if (idx == 4) return QObject::tr("Wasserfarbe");
    if (idx == 5) return QObject::tr("Weichzeichnen");
    if (idx == 6) return QObject::tr("Verwischen");
    if (idx == 7) return QObject::tr("Script-Fehler");
    if (idx == 8) return QObject::tr("Gruppenname bearbeiten...");
    if (idx == 9) return QObject::tr("Gruppe löschen");
    if (idx == 10) return QObject::tr("Stift (Ein-/Ausblenden erzwingen)");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Crayon");
    if (idx == 1) return QObject::tr("Crayon");
    if (idx == 2) return QObject::tr("Aérographe");
    if (idx == 3) return QObject::tr("Gomme");
    if (idx == 4) return QObject::tr("Aquarelle");
    if (idx == 5) return QObject::tr("Flou");
    if (idx == 6) return QObject::tr("Doigt");
    if (idx == 7) return QObject::tr("Erreur de script");
    if (idx == 8) return QObject::tr("Modification du nom de groupe...");
    if (idx == 9) return QObject::tr("Effacer le groupe");
    if (idx == 10) return QObject::tr("Plume (forcer le fondu enchaîné)");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Перо");
    if (idx == 1) return QObject::tr("Карандаш");
    if (idx == 2) return QObject::tr("Аэрограф");
    if (idx == 3) return QObject::tr("Ластик");
    if (idx == 4) return QObject::tr("Акварель");
    if (idx == 5) return QObject::tr("Размытие");
    if (idx == 6) return QObject::tr("Растушевка");
    if (idx == 7) return QObject::tr("Ошибка сценария");
    if (idx == 8) return QObject::tr("Редактировать название группы...");
    if (idx == 9) return QObject::tr("Удалить группу");
    if (idx == 10) return QObject::tr("Перо (Принудительное затухание или усиление)");
  }

  if (man->TranslateHindi())
  {
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Pen"); // ペン [ブラシの種類]
  if (idx == 1) return QObject::tr("Pencil"); // 鉛筆 [ブラシの種類]
  if (idx == 2) return QObject::tr("AirBrush"); // エアブラシ [ブラシの種類]
  if (idx == 3) return QObject::tr("Eraser"); // 消しゴム [ブラシの種類]
  if (idx == 4) return QObject::tr("Watercolor"); // 水彩 [ブラシの種類]
  if (idx == 5) return QObject::tr("Blur"); // ぼかし [ブラシの種類]
  if (idx == 6) return QObject::tr("Smudge"); // 指先 [ブラシの種類]
  if (idx == 7) return QObject::tr("Script Error"); // 不正なスクリプトです
  if (idx == 8) return QObject::tr("Edit Group Name..."); // グループ名の変更...
  if (idx == 9) return QObject::tr("Delete Group"); // グループの削除...
  if (idx == 10) return QObject::tr("Pen (Fade In/Out)"); // ペン (入り抜き)
  if (idx == 11) return QObject::tr("Move Upper"); // グループを上に移動
  if (idx == 12) return QObject::tr("Move Lower"); // グループを下に移動

  if (idx == 15) return QObject::tr("Leaf");
  if (idx == 16) return QObject::tr("Flower");
  if (idx == 17) return QObject::tr("Particle");
  if (idx == 18) return QObject::tr("Flat Brush");
  if (idx == 19) return QObject::tr("Star");
  if (idx == 20) return QObject::tr("Stalk");
  if (idx == 21) return QObject::tr("Arrow");
  if (idx == 22) return QObject::tr("Raimon");

  if (idx == 30) return QObject::tr("FireAlpaca Brush Format (*.mdb)");
  if (idx == 31) return QObject::tr("Export Brush File");
  if (idx == 32) return QObject::tr("Import Brush Files");

  if (idx == 40) return QObject::tr(" (Hard)");
  if (idx == 41) return QObject::tr(" (Soft)");
  if (idx == 42) return QObject::tr(" (Canvas)");
  if (idx == 43) return QObject::tr(" (Sketchbook)");
  if (idx == 44) return QObject::tr(" (Bleeding)");

  if (idx == 100) return QObject::tr("Marker");
  if (idx == 101) return QObject::tr("Fluffy");
  if (idx == 102) return QObject::tr("Symmetry");
  if (idx == 103) return QObject::tr("Symmetry Rotate");
  if (idx == 104) return QObject::tr("Thorn");
  if (idx == 105) return QObject::tr("Kakeami");
  if (idx == 106) return QObject::tr("Polka Dot");
  if (idx == 107) return QObject::tr("Analog (c)Hiroki Ugawa)");

  return "";
}
