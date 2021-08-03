/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_text.h"

///////////////////////////////////////////////////////////////////////////
// - テキストダイアログで使用される文字列
// - String used in text dialogs.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrText( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("テキスト編集");
    if (idx == 1) return QObject::tr("フォント名");
    if (idx == 2) return QObject::tr("文字サイズ");
    if (idx == 3) return QObject::tr("アンチエイリアス");
    if (idx == 4) return QObject::tr("文字間隔");
    if (idx == 5) return QObject::tr("行間隔");
    if (idx == 6) return QObject::tr("先頭で揃える");
    if (idx == 7) return QObject::tr("中央で揃える");
    if (idx == 8) return QObject::tr("末尾で揃える");
    if (idx == 9) return QObject::tr("太字");
    if (idx == 10) return QObject::tr("斜体");
    if (idx == 11) return QObject::tr("打ち消し");
    if (idx == 12) return QObject::tr("文字色");
    if (idx == 13) return QObject::tr("縦書き");

    if (idx == 16) return QObject::tr("ふち幅");
    if (idx == 17) return QObject::tr("ふち色");
    if (idx == 18) return QObject::tr("回転");

    if (idx == 30) return QObject::tr("回転角");
    if (idx == 31) return QObject::tr("度");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("文本编辑");
    if (idx == 1) return QObject::tr("字体名称");
    if (idx == 2) return QObject::tr("字体大小");
    if (idx == 3) return QObject::tr("边缘柔化抗锯齿");
    if (idx == 4) return QObject::tr("字符间隔");
    if (idx == 5) return QObject::tr("行距");
    if (idx == 6) return QObject::tr("左对齐");
    if (idx == 7) return QObject::tr("居中");
    if (idx == 8) return QObject::tr("右对齐");
    if (idx == 9) return QObject::tr("粗体");
    if (idx == 10) return QObject::tr("斜体");
    if (idx == 11) return QObject::tr("取消");
    if (idx == 12) return QObject::tr("字体颜色");
    if (idx == 13) return QObject::tr("竖写");

    if (idx == 16) return QObject::tr("边缘宽度");
    if (idx == 17) return QObject::tr("边缘色");
    if (idx == 18) return QObject::tr("旋转");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("編輯文本");
    if (idx == 1) return QObject::tr("字型名稱");
    if (idx == 2) return QObject::tr("字型大小");
    if (idx == 3) return QObject::tr("反鋸齒");
    if (idx == 4) return QObject::tr("文字間距");
    if (idx == 5) return QObject::tr("行距");
    if (idx == 6) return QObject::tr("靠左對齊");
    if (idx == 7) return QObject::tr("置中");
    if (idx == 8) return QObject::tr("靠右對齊");
    if (idx == 9) return QObject::tr("粗體");
    if (idx == 10) return QObject::tr("斜體");
    if (idx == 11) return QObject::tr("刪除");
    if (idx == 12) return QObject::tr("文字顏色");
    if (idx == 13) return QObject::tr("直書");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("텍스트 편집");
    if (idx == 1) return QObject::tr("폰트 명");
    if (idx == 2) return QObject::tr("글꼴 크기");
    if (idx == 3) return QObject::tr("안티 에일리어싱");
    if (idx == 4) return QObject::tr("글꼴 간격");
    if (idx == 5) return QObject::tr("줄 간격");
    if (idx == 6) return QObject::tr("왼쪽 맞춤");
    if (idx == 7) return QObject::tr("가운데 맞춤");
    if (idx == 8) return QObject::tr("오른쪽 맞춤");
    if (idx == 9) return QObject::tr("굵게");
    if (idx == 10) return QObject::tr("기울임꼴");
    if (idx == 11) return QObject::tr("취소선");
    if (idx == 12) return QObject::tr("글꼴 색");
    if (idx == 13) return QObject::tr("세로 쓰기");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Editar Texto");
    if (idx == 1) return QObject::tr("Nome da Fonte");
    if (idx == 2) return QObject::tr("Tamanho do Texto");
    if (idx == 3) return QObject::tr("Suavização");
    if (idx == 4) return QObject::tr("Espaçamento do Texto");
    if (idx == 5) return QObject::tr("Espaçamento da Linha");
    if (idx == 6) return QObject::tr("Texto Alinhado à Esquerda");
    if (idx == 7) return QObject::tr("Texto Centralizado");
    if (idx == 8) return QObject::tr("Texto Alinhado à Direita");
    if (idx == 9) return QObject::tr("Negrito");
    if (idx == 10) return QObject::tr("Itálico");
    if (idx == 11) return QObject::tr("Tachado");
    if (idx == 12) return QObject::tr("Cor do Texto");
    if (idx == 13) return QObject::tr("Vertical");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Editar Texto");
    if (idx == 1) return QObject::tr("Nombre de la Fuente");
    if (idx == 2) return QObject::tr("Tamaño de Fuente");
    if (idx == 3) return QObject::tr("Suavizado");
    if (idx == 4) return QObject::tr("Espacio entre Caracteres");
    if (idx == 5) return QObject::tr("Interlineado");
    if (idx == 6) return QObject::tr("Alineación del Texto a la Izquierda");
    if (idx == 7) return QObject::tr("Centrado del Texto");
    if (idx == 8) return QObject::tr("Alineación del Texto a la Derecha");
    if (idx == 9) return QObject::tr("Negrita");
    if (idx == 10) return QObject::tr("Cursiva");
    if (idx == 11) return QObject::tr("Tachado");
    if (idx == 12) return QObject::tr("Color de la Fuente");
    if (idx == 13) return QObject::tr("Vertical");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Text editieren");
    if (idx == 1) return QObject::tr("Fontname");
    if (idx == 2) return QObject::tr("Schriftgröße");
    if (idx == 3) return QObject::tr("Anti-Aliasing");
    if (idx == 4) return QObject::tr("Zeichenabstand");
    if (idx == 5) return QObject::tr("Zeilenabstand");
    if (idx == 6) return QObject::tr("Text linksbündig ausrichten");
    if (idx == 7) return QObject::tr("Text zentrieren");
    if (idx == 8) return QObject::tr("Text rechtsbündig ausrichten");
    if (idx == 9) return QObject::tr("Fett");
    if (idx == 10) return QObject::tr("Kursiv");
    if (idx == 11) return QObject::tr("Durchstreichen");
    if (idx == 12) return QObject::tr("Schriftfarbe");
    if (idx == 13) return QObject::tr("Vertikal");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Édition texte");
    if (idx == 1) return QObject::tr("Nom de police");
    if (idx == 2) return QObject::tr("Taille du texte");
    if (idx == 3) return QObject::tr("Anticrénelage");
    if (idx == 4) return QObject::tr("Espace entre les caractères");
    if (idx == 5) return QObject::tr("Interligne");
    if (idx == 6) return QObject::tr("Alignement à gauche");
    if (idx == 7) return QObject::tr("Alignement au centre");
    if (idx == 8) return QObject::tr("Alignement à droite");
    if (idx == 9) return QObject::tr("Gras");
    if (idx == 10) return QObject::tr("Italique");
    if (idx == 11) return QObject::tr("Barré");
    if (idx == 12) return QObject::tr("Couleur du texte");
    if (idx == 13) return QObject::tr("Vertical");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Редактировать текст");
    if (idx == 1) return QObject::tr("Имя шрифта");
    if (idx == 2) return QObject::tr("Размер текста");
    if (idx == 3) return QObject::tr("Устранение искажений");
    if (idx == 4) return QObject::tr("Интервал между символами");
    if (idx == 5) return QObject::tr("Интервал между строками");
    if (idx == 6) return QObject::tr("Выравнивать по левому краю");
    if (idx == 7) return QObject::tr("Выравнивать по центру");
    if (idx == 8) return QObject::tr("Выравнивать по правому краю");
    if (idx == 9) return QObject::tr("Жирный");
    if (idx == 10) return QObject::tr("Курсив");
    if (idx == 11) return QObject::tr("Зачеркивание");
    if (idx == 12) return QObject::tr("Цвет текста");
    if (idx == 13) return QObject::tr("Вертикальный");
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
  if (idx == 0) return QObject::tr("Edit Text");
  if (idx == 1) return QObject::tr("Font Name");
  if (idx == 2) return QObject::tr("Text Size");
  if (idx == 3) return QObject::tr("Anti-aliasing");
  if (idx == 4) return QObject::tr("Text Spacing");
  if (idx == 5) return QObject::tr("Line Spacing");
  if (idx == 6) return QObject::tr("Left Align Text");
  if (idx == 7) return QObject::tr("Center Text");
  if (idx == 8) return QObject::tr("Right Align Text");
  if (idx == 9) return QObject::tr("Bold");
  if (idx == 10) return QObject::tr("Italic");
  if (idx == 11) return QObject::tr("Strikethrough");
  if (idx == 12) return QObject::tr("Text Color");
  if (idx == 13) return QObject::tr("Vertical");

  if (idx == 16) return QObject::tr("Edge width");
  if (idx == 17) return QObject::tr("Edge color");
  if (idx == 18) return QObject::tr("Rotate");

  if (idx == 30) return QObject::tr("Angle of Rotation");
  if (idx == 31) return QObject::tr("deg.");

  return "";
}
