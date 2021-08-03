/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_child.h"

///////////////////////////////////////////////////////////////////////////
// - キャンバスウィンドウで使用される文字列
// - A string used in the canvas window.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrChild( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("閉じる前に保存しますか？");
    if (idx == 2) return QObject::tr("画像の保存");
    if (idx == 3) return QObject::tr("保存に失敗しました\n\n(別名で保存できる可能性があります)");
    if (idx == 4) return QObject::tr("この形式ではレイヤーが保存されませんが、よろしいですか？");
    if (idx == 5) return QObject::tr("保存に必要なメモリが不足しています。\n画像が大きすぎる可能性があります。");
    if (idx == 6) return QObject::tr("この形式ではレイヤーが結合されて保存され、下書きレイヤーの内容は表示されなくなります。よろしいですか？");
    if (idx == 7) return QObject::tr("変形を適用しますか？");
    if (idx == 8) return QObject::tr("画像の書き出し (CMYK形式 PSD)");
    if (idx == 9) return QObject::tr("「表示」メニューからCMYKソフトプルーフを有効にし、CMYKプレビューを行ってください");
    if (idx == 10) return QObject::tr("キャンバス範囲外を削除しますか？");
    if (idx == 11) return QObject::tr("レイヤーデータが欠落しています");
    if (idx == 12) return QObject::tr("画像を新規レイヤーとして読み込む");
    if (idx == 13) return QObject::tr("テキストレイヤーはラスタライズされますがよろしいですか？\n\n(テキストレイヤーを再編集可能な状態で保存するには、MDP形式で保存してください)");
    if (idx == 14) return QObject::tr("非表示レイヤーにも適用しますか？");
    if (idx == 15) return QObject::tr("画像の書き出し (APNG)");
    if (idx == 16) return QObject::tr("画像の書き出し (アニメーションGIF)");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("关闭前保存吗？");
    if (idx == 2) return QObject::tr("保存图像");
    if (idx == 3) return QObject::tr("保存失败");
    if (idx == 4) return QObject::tr("此格式无法保存图层，确定保存吗？");
    if (idx == 5) return QObject::tr("保存所需空间不足");
    if (idx == 6) return QObject::tr("此格式将合并图层后进行保存，草稿图层的内容将不会显示。确认继续吗？");
    if (idx == 7) return QObject::tr("确认适用变形吗？");
    if (idx == 14) return QObject::tr("您是否还要将其应用于隐藏图层？");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("關閉前是否儲存？");
    if (idx == 2) return QObject::tr("儲存圖像");
    if (idx == 3) return QObject::tr("儲存失敗");
    if (idx == 4) return QObject::tr("此格式無法儲存圖層，確定要儲存嗎？");
    if (idx == 5) return QObject::tr("記憶體不足，無法儲存");
    if (idx == 6) return QObject::tr("此格式將會在圖層合併後進行儲存，草稿圖層的內容將不會顯示在檔案中。確定要儲存嗎？");
    if (idx == 7) return QObject::tr("確定要適用變形嗎？");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("닫기 전에 저장합니까?");
    if (idx == 2) return QObject::tr("이미지의 저장");
    if (idx == 3) return QObject::tr("저장에 실패했습니다");
    if (idx == 4) return QObject::tr("이 형식으로는 레이어가 저장되지 않습니다. 진행하시겠습니까?");
    if (idx == 5) return QObject::tr("저장에 필요한 메모리가 부족합니다.");
    if (idx == 6) return QObject::tr("이 형식으로는 레이어가 통합된 상태로 저장되어, 밑그림(드래프트)레이어의 내용은 표시되지 않게 됩니다. 계속하시겠습니까?");
    if (idx == 7) return QObject::tr("변형을 적용할까요?");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Salvar os dados antes de fechar?");
    if (idx == 2) return QObject::tr("Salvar Imagem");
    if (idx == 3) return QObject::tr("Falha ao Salvar");
    if (idx == 4) return QObject::tr("As camadas não podem ser gravadas neste formato. Deseja proceder?");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("¿Desea guardar los datos antes de cerrar?");
    if (idx == 2) return QObject::tr("Guardar imagen");
    if (idx == 3) return QObject::tr("No se pudo guardar");
    if (idx == 4) return QObject::tr("No se pueden guardar las capas con este formato. ¿Quieres continuar?");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Daten vor Speichern schließen?");
    if (idx == 2) return QObject::tr("Bild speichern");
    if (idx == 3) return QObject::tr("Speichern fehlgeschlagen");
    if (idx == 4) return QObject::tr("Ebenen können in diesem Format nicht gespeichert werden. Fortfahren?");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Voulez-vous enregistrer les données avant de quitter");
    if (idx == 2) return QObject::tr("Enregistrer l'image");
    if (idx == 3) return QObject::tr("Impossible d'enregistrer");
    if (idx == 4) return QObject::tr("Les calques ne peuvent pas être sauvegardés dans ce format. Voulez-vous continuer ?");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Сохранить данные перед закрытем?");
    if (idx == 2) return QObject::tr("Сохранить изображение");
    if (idx == 3) return QObject::tr("Не удалось сохранить");
    if (idx == 4) return QObject::tr("Слои не могут быть сохранены с этим форматом. Хотите продолжить?");
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
  if (idx == 0) return QObject::tr("Save data before closing?");
  if (idx == 2) return QObject::tr("Save Image");
  if (idx == 3) return QObject::tr("Failed to save\n\n(There is a possibility to be saved under a different name)");
  if (idx == 4) return QObject::tr("Layers cannot be saved with this format. Do you want to proceed?");
  if (idx == 5) return QObject::tr("Memory Error (lack of memory).\nThere is a possibility the image is too large.");
  if (idx == 6) return QObject::tr("Saving as this file type will flatter the layers in this image. Draft layer contents will not be displayed. Would you like to continue? ");
  if (idx == 7) return QObject::tr("Apply transformation?");
  if (idx == 8) return QObject::tr("Export Image (CMYK format PSD)");
  if (idx == 9) return QObject::tr("Please activate \"CMYK Soft Proof\" from the \"View\" menu and perform CMYK preview");
  if (idx == 10) return QObject::tr("Delete Cropped Area?");
  if (idx == 11) return QObject::tr("Layer data is missing");
  if (idx == 12) return QObject::tr("Import an image as a new layer");
  if (idx == 13) return QObject::tr("The text layer will be rasterized, is that correct?\n\n(To save the text layer in a re-editable state, please save it in MDP format)");
  if (idx == 14) return QObject::tr("Does it apply to hidden layers?");
  if (idx == 15) return QObject::tr("Export Image (APNG)");
  if (idx == 16) return QObject::tr("Export Image (Animated GIF)");

  return "";
}
