/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_raster.h"

///////////////////////////////////////////////////////////////////////////
// - ラスタライズで使用される文字列
// - String to be used for rasterization
///////////////////////////////////////////////////////////////////////////
QString Trans_StrRaster( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("ラスタライズオプション");
    if (idx == 1) return QObject::tr("出力");
    if (idx == 2) return QObject::tr("カラー (32bpp)");
    if (idx == 3) return QObject::tr("グレースケール (8bpp)");
    if (idx == 4) return QObject::tr("レイヤーカラーを黒か白に強制する");
    if (idx == 5) return QObject::tr("出力範囲");
    if (idx == 6) return QObject::tr("外枠まで");
    if (idx == 7) return QObject::tr("塗り足しまで");
    if (idx == 8) return QObject::tr("トンボまで");
    if (idx == 9) return QObject::tr("テキストレイヤーを除外する");
    if (idx == 10) return QObject::tr("モノクロ2階調 (1bpp)");
    if (idx == 11) return QObject::tr("ハーフトーン処理をしない");

    if (idx == 20) return QObject::tr("キャンバス");
    if (idx == 21) return QObject::tr("トンボまで拡張");
    if (idx == 22) return QObject::tr("外枠");
    if (idx == 23) return QObject::tr("内枠");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("点阵化选项");
    if (idx == 1) return QObject::tr("输出");
    if (idx == 2) return QObject::tr("色彩 (32bpp)");
    if (idx == 3) return QObject::tr("灰阶 (8bpp)");
    if (idx == 4) return QObject::tr("强制设定图层颜色为黑或白色");
    if (idx == 5) return QObject::tr("输出范围");
    if (idx == 6) return QObject::tr("外框 (装订尺寸)");
    if (idx == 7) return QObject::tr("出血框");
    if (idx == 8) return QObject::tr("裁切线");
    if (idx == 9) return QObject::tr("排除文字图层");
    if (idx == 10) return QObject::tr("黑白(1bpp)");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("點陣化選項");
    if (idx == 1) return QObject::tr("輸出");
    if (idx == 2) return QObject::tr("彩色(32bpp)");
    if (idx == 3) return QObject::tr("灰階(8bpp)");
    if (idx == 4) return QObject::tr("強制設定圖層顏色為黑或白色");
    if (idx == 5) return QObject::tr("輸出範圍");
    if (idx == 6) return QObject::tr("外框(裝訂尺寸)");
    if (idx == 7) return QObject::tr("出血框");
    if (idx == 8) return QObject::tr("裁切線");
    if (idx == 9) return QObject::tr("排除文字圖層");
    if (idx == 10) return QObject::tr("黑白 (1bpp)");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("래스터라이즈 옵션");
    if (idx == 1) return QObject::tr("출력");
    if (idx == 2) return QObject::tr("컬러 (32bpp)");
    if (idx == 3) return QObject::tr("그레이 스케일 (8bpp)");
    if (idx == 4) return QObject::tr("레이어 컬러를 강제로 흑이나 백으로 함");
    if (idx == 5) return QObject::tr("출력 범위");
    if (idx == 6) return QObject::tr("외부 라인 (제본 사이즈)");
    if (idx == 7) return QObject::tr("도련");
    if (idx == 8) return QObject::tr("크롭까지");
    if (idx == 9) return QObject::tr("텍스트 레이어를 제외 함");
    if (idx == 10) return QObject::tr("모노크롬2계조(1bpp)");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Opção de rasterizar");
    if (idx == 1) return QObject::tr("Saída");
    if (idx == 2) return QObject::tr("Cor (32 bpp)");
    if (idx == 3) return QObject::tr("Escala de cinzas (8bpp)");
    if (idx == 4) return QObject::tr("Forçar preto ou branco como cor de camada");
    if (idx == 5) return QObject::tr("Rasterizar área");
    if (idx == 6) return QObject::tr("Linha de término (encapamento)");
    if (idx == 7) return QObject::tr("Sangrar");
    if (idx == 8) return QObject::tr("Aparar marcas");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Opción de rasterizar");
    if (idx == 1) return QObject::tr("Salida");
    if (idx == 2) return QObject::tr("Color (32 bpp)");
    if (idx == 3) return QObject::tr("Escala de grises (8 bpp)");
    if (idx == 4) return QObject::tr("Forzar blanco o negro como color de capa");
    if (idx == 5) return QObject::tr("Rasterizar área ");
    if (idx == 6) return QObject::tr("Marco exterior (encuadernación)");
    if (idx == 7) return QObject::tr("Sangrado");
    if (idx == 8) return QObject::tr("Marcas de recorte");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Rasteroptionen");
    if (idx == 1) return QObject::tr("Ausgabe");
    if (idx == 2) return QObject::tr("Farbe (32bpp)");
    if (idx == 3) return QObject::tr("Graustufen (8bpp)");
    if (idx == 4) return QObject::tr("Schwarz oder Weiß als Ebenenfarbe erzwingen");
    if (idx == 5) return QObject::tr("Rasterbereich");
    if (idx == 6) return QObject::tr("Schlusslinie (Buchbinden)");
    if (idx == 7) return QObject::tr("Beschnitt");
    if (idx == 8) return QObject::tr("Schnittmarken");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Options de pixellisation");
    if (idx == 1) return QObject::tr("Sortie");
    if (idx == 2) return QObject::tr("Couleur (32bbp)");
    if (idx == 3) return QObject::tr("Niveaux de gris (8bbp)");
    if (idx == 4) return QObject::tr("Imposer noir ou blanc en couleur de calque");
    if (idx == 5) return QObject::tr("Zone de pixellisation");
    if (idx == 6) return QObject::tr("Cadre extérieur (reliure)");
    if (idx == 7) return QObject::tr("Marge perdue");
    if (idx == 8) return QObject::tr("Traits de coupe");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Опция растрирования");
    if (idx == 1) return QObject::tr("Вывод");
    if (idx == 2) return QObject::tr("Цвет (32bpp)");
    if (idx == 3) return QObject::tr("Градации серого (8bpp)");
    if (idx == 4) return QObject::tr("Принудительная установка черного или белого цветом слоя");
    if (idx == 5) return QObject::tr("Зона растрирования");
    if (idx == 6) return QObject::tr("Финишная черта (Переплет)");
    if (idx == 7) return QObject::tr("Поле под обрез");
    if (idx == 8) return QObject::tr("Метка обрезки");
  }

  if (man->TranslateHindi())
  {
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Rasterize Option");
  if (idx == 1) return QObject::tr("Output");
  if (idx == 2) return QObject::tr("Color (32bpp)");
  if (idx == 3) return QObject::tr("Grayscale (8bpp)");
  if (idx == 4) return QObject::tr("Force black or white as a layer color");
  if (idx == 5) return QObject::tr("Rasterize Area");
  if (idx == 6) return QObject::tr("Finish Line");
  if (idx == 7) return QObject::tr("Bleed");
  if (idx == 8) return QObject::tr("Trim Marks");
  if (idx == 9) return QObject::tr("Exclude Text Layers");
  if (idx == 10) return QObject::tr("Monochrome 2 tone (1bpp)");
  if (idx == 11) return QObject::tr("Do not apply Halftoning");

  if (idx == 20) return QObject::tr("Canvas");
  if (idx == 21) return QObject::tr("Extended to Tombo");
  if (idx == 22) return QObject::tr("Outer Frame");
  if (idx == 23) return QObject::tr("Inner Frame");

  return "";
}
