/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_png.h"

///////////////////////////////////////////////////////////////////////////
// - PNG保存時に使用される文字列
// - String to be used when saving PNG.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrPng( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("保存設定");
    if (idx == 1) return QObject::tr("透過PNG");
    if (idx == 2) return QObject::tr("24-bit PNG");
    if (idx == 3) return QObject::tr("品質");
    if (idx == 4) return QObject::tr("JPEG形式は、劣化の伴うフォーマットです");
    if (idx == 5) return QObject::tr("高品質で保存する場合、PNG形式を推奨します");
    if (idx == 14) return QObject::tr("グレースケール PNG");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("保存设定");
    if (idx == 1) return QObject::tr("透过PNG");
    if (idx == 2) return QObject::tr("24-bit PNG");
    if (idx == 3) return QObject::tr("品质");
    if (idx == 4) return QObject::tr("JPEG是会出现劣化的格式");
    if (idx == 5) return QObject::tr("如想高品质保存时，推荐PNG格式");
    if (idx == 14) return QObject::tr("灰阶 PNG");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("儲存設定");
    if (idx == 1) return QObject::tr("透明PNG");
    if (idx == 2) return QObject::tr("24-bit PNG");
    if (idx == 3) return QObject::tr("品質");
    if (idx == 4) return QObject::tr("JPEG是會劣化的圖檔格式。");
    if (idx == 5) return QObject::tr("若欲儲存為高品質圖檔，建議選擇PNG格式。");
    if (idx == 14) return QObject::tr("灰階 PNG");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("저장설정");
    if (idx == 1) return QObject::tr("투과 PNG");
    if (idx == 2) return QObject::tr("24-bit PNG");
    if (idx == 3) return QObject::tr("품질");
    if (idx == 4) return QObject::tr("JPEG 형식은, 열화를 동반하는 형식입니다.");
    if (idx == 5) return QObject::tr("고품질로 저장 할 경우에는, PNG형식을 권장합니다");
    if (idx == 14) return QObject::tr("그레이스케일 PNG");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Gravar configurações");
    if (idx == 1) return QObject::tr("PNG transparente");
    if (idx == 2) return QObject::tr("24-bit PNG");
    if (idx == 3) return QObject::tr("Qualidade");
    if (idx == 4) return QObject::tr("O formato JPEG se deteriora.");
    if (idx == 5) return QObject::tr("Se quiser salvar um arquivo em alta qualidade, recomendamos o formato PNG.");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Ajustes de guardado");
    if (idx == 1) return QObject::tr("PNG transparente");
    if (idx == 2) return QObject::tr("24-bit PNG");
    if (idx == 3) return QObject::tr("Calidad");
    if (idx == 4) return QObject::tr("El formato JPEG se deteriorará.");
    if (idx == 5) return QObject::tr("Si quieres guardar un archivo en alta calidad, recomendamos el formato PNG.");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Einstellungen speichern");
    if (idx == 1) return QObject::tr("Transparentes PNG");
    if (idx == 2) return QObject::tr("24-bit PNG");
    if (idx == 3) return QObject::tr("Calidad");
    if (idx == 4) return QObject::tr("El formato JPEG se deteriora.");
    if (idx == 5) return QObject::tr("Si quieres guardar un archivo en alta calidad, te recomendamos el formato PNG.");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Mémoriser les paramètres");
    if (idx == 1) return QObject::tr("Transparent PNG");
    if (idx == 2) return QObject::tr("24-bit PNG");
    if (idx == 3) return QObject::tr("Qualität");
    if (idx == 4) return QObject::tr("JPEG-Format erleidet Qualitätsverlust.");
    if (idx == 5) return QObject::tr("Wenn Sie die Datei in hoher Qualität speichern möchten, empfehlen wir das PNG-Format.");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Сохранить настройки");
    if (idx == 1) return QObject::tr("Прозрачный PNG");
    if (idx == 2) return QObject::tr("24-bit PNG");
    if (idx == 3) return QObject::tr("Qualité");
    if (idx == 4) return QObject::tr("Сохранение в формате JPEG приведет к потери качества.");
    if (idx == 5) return QObject::tr("Если вы хотите сохранить файл в высоком качестве, предлагаем использовать PNG формат.");
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Save Settings");
  if (idx == 1) return QObject::tr("Transparent PNG");
  if (idx == 2) return QObject::tr("24-bit PNG");
  if (idx == 3) return QObject::tr("Quality");
  if (idx == 4) return QObject::tr("JPEG format deteriorates.");
  if (idx == 5) return QObject::tr("If you want to save a file with high quality, we recommend saving as a PNG.");
  if (idx == 14) return QObject::tr("Grayscale PNG");

  return "";
}
