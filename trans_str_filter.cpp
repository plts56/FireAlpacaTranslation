/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_filter.h"

///////////////////////////////////////////////////////////////////////////
// - 各種フィルタダイアログで使用される文字列
// - Strings used in various filter dialogs.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrFilter( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    // レベル補正・線画抽出
    if (idx == 0) return QObject::tr("入力");
    if (idx == 1) return QObject::tr("出力");
    if (idx == 2) return QObject::tr("レベル補正");
    if (idx == 3) return QObject::tr("線画抽出");

    // 色相
    if (idx == 100) return QObject::tr("色相");
    if (idx == 101) return QObject::tr("彩度");
    if (idx == 102) return QObject::tr("明度");
    if (idx == 103) return QObject::tr("色相・彩度・明度");

    // トーンカーブ
    if (idx == 200) return QObject::tr("トーンカーブ");
    if (idx == 201) return QObject::tr("リセット");

    // チャンネル操作
    if (idx == 300) return QObject::tr("チャンネル操作");
    if (idx == 301) return QObject::tr("RGB平均");
    if (idx == 302) return QObject::tr("255 - RGB平均");
    if (idx == 303) return QObject::tr("リセット");

    // 色収差
    if (idx == 400) return QObject::tr("色収差/RGBずらし");

    // アンシャープマスク
    if (idx == 500) return QObject::tr("アンシャープマスク");
    if (idx == 501) return QObject::tr("半径");
    if (idx == 502) return QObject::tr("適用量");
    if (idx == 503) return QObject::tr("プレビュー");

    // ガウスぼかし
    if (idx == 600) return QObject::tr("ガウスぼかし");
    if (idx == 601) return QObject::tr("値");
    if (idx == 602) return QObject::tr("プレビュー");

    // 移動ぼかし
    if (idx == 700) return QObject::tr("移動ぼかし");
    if (idx == 701) return QObject::tr("強度");
    if (idx == 702) return QObject::tr("プレビュー");

    // レンズぼかし
    if (idx == 800) return QObject::tr("レンズぼかし");
    if (idx == 801) return QObject::tr("半径");
    if (idx == 802) return QObject::tr("プレビュー");
    if (idx == 803) return QObject::tr("明るさ");

    // モザイク
    if (idx == 900) return QObject::tr("モザイク");
    if (idx == 901) return QObject::tr("サイズ");

    // 和柄
    if (idx == 1000) return QObject::tr("青海波");
    if (idx == 1001) return QObject::tr("菱青海波");
    if (idx == 1002) return QObject::tr("七宝");
    if (idx == 1003) return QObject::tr("七宝 2");
    if (idx == 1004) return QObject::tr("算木崩し");
    if (idx == 1005) return QObject::tr("矢絣");
    if (idx == 1006) return QObject::tr("矢絣 2");
    if (idx == 1007) return QObject::tr("鱗");
    if (idx == 1008) return QObject::tr("千鳥格子");
    if (idx == 1009) return QObject::tr("水玉");
    if (idx == 1010) return QObject::tr("摺疋田");
    if (idx == 1011) return QObject::tr("亀甲");
    if (idx == 1012) return QObject::tr("市松");
    if (idx == 1013) return QObject::tr("麻の葉");
    if (idx == 1014) return QObject::tr("立涌");
    if (idx == 1015) return QObject::tr("分銅繋ぎ");
    if (idx == 1016) return QObject::tr("紗綾形");
    if (idx == 1017) return QObject::tr("檜垣");
    if (idx == 1050) return QObject::tr("和柄");
    if (idx == 1051) return QObject::tr("名称");
    if (idx == 1052) return QObject::tr("サイズ");
    if (idx == 1053) return QObject::tr("透明背景");
    if (idx == 1054) return QObject::tr("色の入れ替え");
    if (idx == 1055) return QObject::tr("ランダム色指定");
    if (idx == 1056) return QObject::tr("密度");
    if (idx == 1057) return QObject::tr("角度");
    if (idx == 1058) return QObject::tr("度");

    // 集中線
    if (idx == 1100) return QObject::tr("集中線");
    if (idx == 1101) return QObject::tr("長さ");
    if (idx == 1102) return QObject::tr("長さ (ランダム)");
    if (idx == 1103) return QObject::tr("線の太さ");
    if (idx == 1104) return QObject::tr("密度");
    if (idx == 1105) return QObject::tr("密度 (ランダム)");
    if (idx == 1106) return QObject::tr("縦横の比率");
    if (idx == 1107) return QObject::tr("正方形");
    if (idx == 1108) return QObject::tr("横長");
    if (idx == 1109) return QObject::tr("縦長");
    if (idx == 1110) return QObject::tr("リセット");
    if (idx == 1111) return QObject::tr("ランダム値の更新");
    if (idx == 1112) return QObject::tr("中心の指定");

    // 流線
    if (idx == 1200) return QObject::tr("流線");
    if (idx == 1201) return QObject::tr("長さ");
    if (idx == 1202) return QObject::tr("長さ (ランダム)");
    if (idx == 1203) return QObject::tr("線の太さ");
    if (idx == 1204) return QObject::tr("密度");
    if (idx == 1205) return QObject::tr("密度 (ランダム)");
    if (idx == 1206) return QObject::tr("リセット");
    if (idx == 1207) return QObject::tr("ランダム値の更新");
    if (idx == 1208) return QObject::tr("方向の指定");

    // ウニフラッシュ
    if (idx == 1300) return QObject::tr("ウニフラッシュ");
    if (idx == 1301) return QObject::tr("長さ");
    if (idx == 1302) return QObject::tr("長さ (ランダム)");
    if (idx == 1303) return QObject::tr("線の太さ");
    if (idx == 1304) return QObject::tr("密度");
    if (idx == 1305) return QObject::tr("密度 (ランダム)");
    if (idx == 1306) return QObject::tr("オフセット (ランダム)");
    if (idx == 1307) return QObject::tr("入り抜き位置");
    if (idx == 1308) return QObject::tr("リセット");
    if (idx == 1309) return QObject::tr("ランダム値の更新");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("输入");
    if (idx == 1) return QObject::tr("输出");
    if (idx == 2) return QObject::tr("色阶");
    if (idx == 3) return QObject::tr("提取线稿");

    if (idx == 100) return QObject::tr("色相");
    if (idx == 101) return QObject::tr("彩度");
    if (idx == 102) return QObject::tr("明度");
    if (idx == 103) return QObject::tr("色相·彩度·明度");

    if (idx == 600) return QObject::tr("高斯模糊");
    if (idx == 601) return QObject::tr("值");

    if (idx == 900) return QObject::tr("马赛克");
    if (idx == 901) return QObject::tr("尺寸");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("輸入");
    if (idx == 1) return QObject::tr("輸出");
    if (idx == 2) return QObject::tr("色階");
    if (idx == 3) return QObject::tr("提取線稿");

    if (idx == 100) return QObject::tr("色相");
    if (idx == 101) return QObject::tr("彩度");
    if (idx == 102) return QObject::tr("明度");
    if (idx == 103) return QObject::tr("色相·彩度·明度");

    if (idx == 600) return QObject::tr("高斯模糊");
    if (idx == 601) return QObject::tr("值");

    if (idx == 900) return QObject::tr("馬賽克");
    if (idx == 901) return QObject::tr("尺寸");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("입력");
    if (idx == 1) return QObject::tr("출력");
    if (idx == 2) return QObject::tr("레벨 보정");
    if (idx == 3) return QObject::tr("선화 추출");

    if (idx == 100) return QObject::tr("색상");
    if (idx == 101) return QObject::tr("채도");
    if (idx == 102) return QObject::tr("명도");
    if (idx == 103) return QObject::tr("색상·채도·명도");

    if (idx == 600) return QObject::tr("가우시안 블러");
    if (idx == 601) return QObject::tr("값");

    if (idx == 900) return QObject::tr("모자이크");
    if (idx == 901) return QObject::tr("사이즈");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Entrada");
    if (idx == 1) return QObject::tr("Saída");
    if (idx == 2) return QObject::tr("Níveis");
    if (idx == 3) return QObject::tr("Extraindo linhas");

    if (idx == 100) return QObject::tr("Matiz");
    if (idx == 101) return QObject::tr("Saturação");
    if (idx == 102) return QObject::tr("Brilho");
    if (idx == 103) return QObject::tr("Matiz/Saturação/Brilho");

    if (idx == 600) return QObject::tr("Desfoque Gaussiano");
    if (idx == 601) return QObject::tr("Valor");

    if (idx == 900) return QObject::tr("Mosaico");
    if (idx == 901) return QObject::tr("Tamanho");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Entrada");
    if (idx == 1) return QObject::tr("Salida");
    if (idx == 2) return QObject::tr("Niveles");
    if (idx == 3) return QObject::tr("Extraer líneas");

    if (idx == 100) return QObject::tr("Matiz");
    if (idx == 101) return QObject::tr("Saturación");
    if (idx == 102) return QObject::tr("Brillo");
    if (idx == 103) return QObject::tr("Matiz/Saturación/Brillo");

    if (idx == 600) return QObject::tr("Desenfoque gausiano");
    if (idx == 601) return QObject::tr("Valor");

    if (idx == 900) return QObject::tr("Mosaico");
    if (idx == 901) return QObject::tr("Tamaño");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Eingabe");
    if (idx == 1) return QObject::tr("Ausgabe");
    if (idx == 2) return QObject::tr("Ebenen");
    if (idx == 3) return QObject::tr("Umrisse extrahieren");

    if (idx == 100) return QObject::tr("Farbton");
    if (idx == 101) return QObject::tr("Sättigung");
    if (idx == 102) return QObject::tr("Helligkeit");
    if (idx == 103) return QObject::tr("Farbton/Sättigung/Helligkeit");

    if (idx == 600) return QObject::tr("Gaußscher Weichzeichner");
    if (idx == 601) return QObject::tr("Wert");

    if (idx == 900) return QObject::tr("Mosaik");
    if (idx == 901) return QObject::tr("Größe");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Entrée");
    if (idx == 1) return QObject::tr("Sortie");
    if (idx == 2) return QObject::tr("Niveaux");
    if (idx == 3) return QObject::tr("Extraction de lignes");

    if (idx == 100) return QObject::tr("Teinte");
    if (idx == 101) return QObject::tr("Saturation");
    if (idx == 102) return QObject::tr("Luminosité");
    if (idx == 103) return QObject::tr("Teinte/Saturation/Luminosité");

    if (idx == 600) return QObject::tr("Flou gaussien");
    if (idx == 601) return QObject::tr("Valeur");

    if (idx == 900) return QObject::tr("Mosaïque");
    if (idx == 901) return QObject::tr("Taille");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Вводные");
    if (idx == 1) return QObject::tr("Выводные");
    if (idx == 2) return QObject::tr("Уровни");
    if (idx == 3) return QObject::tr("Извлекаемые линии");

    if (idx == 100) return QObject::tr("Тон");
    if (idx == 101) return QObject::tr("Насыщенность");
    if (idx == 102) return QObject::tr("Яркость");
    if (idx == 103) return QObject::tr("Тон Насыщенность Яркость");

    if (idx == 600) return QObject::tr("Гауссово размытие");
    if (idx == 601) return QObject::tr("Значение");

    if (idx == 900) return QObject::tr("Мозаика");
    if (idx == 901) return QObject::tr("Размер");
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Input");
  if (idx == 1) return QObject::tr("Output");
  if (idx == 2) return QObject::tr("Levels");
  if (idx == 3) return QObject::tr("Extracting Lines");

  if (idx == 100) return QObject::tr("Hue");
  if (idx == 101) return QObject::tr("Saturation");
  if (idx == 102) return QObject::tr("Brightness");
  if (idx == 103) return QObject::tr("Hue Saturation Brightness");

  if (idx == 200) return QObject::tr("Tone Curve");
  if (idx == 201) return QObject::tr("Reset");

  if (idx == 300) return QObject::tr("Channel Operation");
  if (idx == 301) return QObject::tr("RGB Average");
  if (idx == 302) return QObject::tr("255 - (RGB Average)");
  if (idx == 303) return QObject::tr("Reset");

  if (idx == 400) return QObject::tr("Chromatic Aberration");

  if (idx == 500) return QObject::tr("Unsharp Mask");
  if (idx == 501) return QObject::tr("Radius");
  if (idx == 502) return QObject::tr("Amount");
  if (idx == 503) return QObject::tr("Preview");

  if (idx == 600) return QObject::tr("Gaussian Blur");
  if (idx == 601) return QObject::tr("Value");
  if (idx == 602) return QObject::tr("Preview");

  if (idx == 700) return QObject::tr("Motion Blur");
  if (idx == 701) return QObject::tr("Intensity");
  if (idx == 702) return QObject::tr("Preview");

  if (idx == 800) return QObject::tr("Lens Blur");
  if (idx == 801) return QObject::tr("Radius");
  if (idx == 802) return QObject::tr("Preview");
  if (idx == 803) return QObject::tr("Brightness");

  if (idx == 900) return QObject::tr("Mosaic");
  if (idx == 901) return QObject::tr("Size");

  if (idx == 1000) return QObject::tr("Sea (Seigaiha)");
  if (idx == 1001) return QObject::tr("Sea (Hishi Seigaiha)");
  if (idx == 1002) return QObject::tr("Sippou");
  if (idx == 1003) return QObject::tr("Sippou 2");
  if (idx == 1004) return QObject::tr("Sanki Kuzushi");
  if (idx == 1005) return QObject::tr("Arrow (Yagasuri)");
  if (idx == 1006) return QObject::tr("Arrow 2 (Yagasuri)");
  if (idx == 1007) return QObject::tr("Scale (Uroko)");
  if (idx == 1008) return QObject::tr("Hound's Tooth");
  if (idx == 1009) return QObject::tr("Polka Dot");
  if (idx == 1010) return QObject::tr("Suri Bitta");
  if (idx == 1011) return QObject::tr("Turtle (Kikkou)");
  if (idx == 1012) return QObject::tr("Checker Board");
  if (idx == 1013) return QObject::tr("Asanoha");
  if (idx == 1014) return QObject::tr("Tatewaku");
  if (idx == 1015) return QObject::tr("Hundou Tsunagi");
  if (idx == 1016) return QObject::tr("Sayagata");
  if (idx == 1017) return QObject::tr("Higaki");
  if (idx == 1050) return QObject::tr("Japanese Pattern");
  if (idx == 1051) return QObject::tr("Name");
  if (idx == 1052) return QObject::tr("Size");
  if (idx == 1053) return QObject::tr("Transparent Background");
  if (idx == 1054) return QObject::tr("Color Exchange");
  if (idx == 1055) return QObject::tr("Random Color");
  if (idx == 1056) return QObject::tr("Density");
  if (idx == 1057) return QObject::tr("Angle");
  if (idx == 1058) return QObject::tr("deg");

  if (idx == 1100) return QObject::tr("Concentrated Line");
  if (idx == 1101) return QObject::tr("Length");
  if (idx == 1102) return QObject::tr("Length (Random)");
  if (idx == 1103) return QObject::tr("Line Width");
  if (idx == 1104) return QObject::tr("Density");
  if (idx == 1105) return QObject::tr("Density (Random)");
  if (idx == 1106) return QObject::tr("Aspect Ratio");
  if (idx == 1107) return QObject::tr("Square");
  if (idx == 1108) return QObject::tr("Landscape");
  if (idx == 1109) return QObject::tr("Portrait");
  if (idx == 1110) return QObject::tr("Reset");
  if (idx == 1111) return QObject::tr("Update Randomness");
  if (idx == 1112) return QObject::tr("Specify Center");

  if (idx == 1200) return QObject::tr("Parallel Lines");
  if (idx == 1201) return QObject::tr("Length");
  if (idx == 1202) return QObject::tr("Length (Random)");
  if (idx == 1203) return QObject::tr("Line Width");
  if (idx == 1204) return QObject::tr("Density");
  if (idx == 1205) return QObject::tr("Density (Random)");
  if (idx == 1206) return QObject::tr("Reset");
  if (idx == 1207) return QObject::tr("Update Randomness");
  if (idx == 1208) return QObject::tr("Specify Direction");

  if (idx == 1300) return QObject::tr("Sea Urchin Flash");
  if (idx == 1301) return QObject::tr("Length");
  if (idx == 1302) return QObject::tr("Length (Random)");
  if (idx == 1303) return QObject::tr("Line Width");
  if (idx == 1304) return QObject::tr("Density");
  if (idx == 1305) return QObject::tr("Density (Random)");
  if (idx == 1306) return QObject::tr("Offset (Random)");
  if (idx == 1307) return QObject::tr("Fade In/Out Pos");
  if (idx == 1308) return QObject::tr("Reset");
  if (idx == 1309) return QObject::tr("Update Randomness");

  return "";
}
