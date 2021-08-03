/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_anime.h"

///////////////////////////////////////////////////////////////////////////
// - 表示メニューで使用される文字列
// - A string used in the view menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuAnime( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("アニメーション(&A)"); // Animation
    if (idx == 15) return QObject::tr("アニメーションモード(&A)"); // Animation Mode
    if (idx == 16) return QObject::tr("次の (上の) フレームを選択"); // Select Next (Upper) Frame
    if (idx == 17) return QObject::tr("前の (下の) フレームを選択"); // Select Prev (Lower) Frame
    if (idx == 18) return QObject::tr("自動再生..."); // AutoPlay
    if (idx == 19) return QObject::tr("最初のフレームは常に表示する"); // Always Display the First Frame
    if (idx == 20) return QObject::tr("前後のフレームを表示する (オニオンスキン)"); // Display the Next/Prev Frame
    if (idx == 30) return QObject::tr("オニオンスキン設定..."); // Onion Skin Settings...
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("动画(&A)"); // Animation
    if (idx == 15) return QObject::tr("动画模式(&A)"); // Animation Mode
    if (idx == 16) return QObject::tr("选择下一个（上方图层）"); // Select Next (Upper) Frame
    if (idx == 17) return QObject::tr("选择前一个 （下方图层）"); // Select Prev (Lower) Frame
    if (idx == 18) return QObject::tr("自动播放..."); // AutoPlay
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("動畫片(&A)"); // Animation
    if (idx == 15) return QObject::tr("動畫模式(&A)"); // Animation Mode
    if (idx == 16) return QObject::tr("選擇下一禎（上方圖層）"); // Select Next (Upper) Frame
    if (idx == 17) return QObject::tr("選擇前一禎 (下方圖層) "); // Select Prev (Lower) Frame
    if (idx == 18) return QObject::tr("自動播放..."); // AutoPlay
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("생기(&A)"); // Animation
    if (idx == 15) return QObject::tr("애니메이션 모드(&F)"); // Animation Mode
    if (idx == 16) return QObject::tr("다음(위) 프레임을 선택"); // Select Next (Upper) Frame
    if (idx == 17) return QObject::tr("이전(아래) 프레임을 선택"); // Select Prev (Lower) Frame
    if (idx == 18) return QObject::tr("자동재생..."); // AutoPlay
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Animação(&A)"); // Animation
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Animación(&A)"); // Animation
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Animation(&A)"); // Animation
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Animation(&A)"); // Animation
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Анимация(&A)"); // Animation
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  if (idx == 0) return QObject::tr("Animation(&A)"); // Animation
  if (idx == 15) return QObject::tr("Animation Mode(&A)");
  if (idx == 16) return QObject::tr("Select Next (Upper) Frame");
  if (idx == 17) return QObject::tr("Select Prev (Lower) Frame");
  if (idx == 18) return QObject::tr("AutoPlay...");
  if (idx == 19) return QObject::tr("Always Display the First Frame");
  if (idx == 20) return QObject::tr("Display the Next/Prev Frame (Onion Skin)");
  if (idx == 30) return QObject::tr("Onion Skin Settings...)");

  return "";
}
