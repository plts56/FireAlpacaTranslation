/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_transform.h"

///////////////////////////////////////////////////////////////////////////
// - 変形パネルで使用される文字列
// - String used in the Transformation panel.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrTransform( int idx )
{
  CTranslationManager* man = &Trans();
  QString res;

  if (idx == 0) res = QObject::tr("Transform Image (Apply Free Transform by moving a vertex while holding down the Ctrl key.)");
  if (idx == 1) res = QObject::tr("Ok");
  if (idx == 2) res = QObject::tr("Cancel");
  if (idx == 3) res = QObject::tr("Filtering");
  if (idx == 4) res = QObject::tr("Perspective");
  if (idx == 5) res = QObject::tr("Nearest neighbor (Jaggies)");
  if (idx == 6) res = QObject::tr("Bilinear (Smooth)");
  if (idx == 7) res = QObject::tr("Bicubic (Sharp)");
  if (idx == 10) res = QObject::tr("Column");
  if (idx == 11) res = QObject::tr("Row");
  if (idx == 12) res = QObject::tr("Vertical Link");
  if (idx == 13) res = QObject::tr("Horizontal Link");
  if (idx == 14) res = QObject::tr("Flip");
  if (idx == 15) res = QObject::tr("Fix Center");
  if (idx == 16) res = QObject::tr("Fix Diagonal");

  if (man->TranslateJapanese())
  {
    if (idx == 0) res = QObject::tr("画像の変形 (Ctrlキーを押しながら頂点操作で自由変形)");
    if (idx == 1) res = QObject::tr("Ok");
    if (idx == 2) res = QObject::tr("キャンセル");
    if (idx == 3) res = QObject::tr("フィルタリング");
    if (idx == 4) res = QObject::tr("パース補正");
    if (idx == 5) res = QObject::tr("ニアレストネイバー (ジャギー)");
    if (idx == 6) res = QObject::tr("バイリニア (なめらか)");
    if (idx == 7) res = QObject::tr("バイキュービック (シャープ)");
    if (idx == 10) res = QObject::tr("縦分割");
    if (idx == 11) res = QObject::tr("横分割");
    if (idx == 12) res = QObject::tr("縦連動");
    if (idx == 13) res = QObject::tr("横連動");
    if (idx == 14) res = QObject::tr("左右反転");
    if (idx == 15) res = QObject::tr("中心を固定");
    if (idx == 16) res = QObject::tr("対角を固定");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) res = QObject::tr("图像的变形 (按住Ctrl键的同时调节顶点来将图像自由变形)");
    if (idx == 1) res = QObject::tr("确定");
    if (idx == 2) res = QObject::tr("取消");
    if (idx == 3) res = QObject::tr("过滤");
    if (idx == 4) res = QObject::tr("透视校正");
    if (idx == 5) res = QObject::tr("邻近（锯齿）");
    if (idx == 6) res = QObject::tr("两次线性（顺滑）");
    if (idx == 7) res = QObject::tr("两次立方（锐利）");
    if (idx == 10) res = QObject::tr("纵向分割");
    if (idx == 11) res = QObject::tr("横向分割");
    if (idx == 12) res = QObject::tr("纵向连动");
    if (idx == 13) res = QObject::tr("横向连动");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) res = QObject::tr("圖像的變形 (按住Ctrl鍵操作頂點即可自由變形)");
    if (idx == 1) res = QObject::tr("確定");
    if (idx == 2) res = QObject::tr("取消");
    if (idx == 3) res = QObject::tr("濾鏡");
    if (idx == 4) res = QObject::tr("透視校正");
    if (idx == 5) res = QObject::tr("最接近像素 (鋸齒)");
    if (idx == 6) res = QObject::tr("縱橫增值法 (平滑)");
    if (idx == 7) res = QObject::tr("環迴增值法 (銳利)");
    if (idx == 10) res = QObject::tr("縱向分割");
    if (idx == 11) res = QObject::tr("橫向分割");
    if (idx == 12) res = QObject::tr("縱向連動");
    if (idx == 13) res = QObject::tr("橫向連動");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) res = QObject::tr("이미지의 변형 (Ctrl 키를 누른상태로 정점조작으로 자유변형)");
    if (idx == 1) res = QObject::tr("Ok");
    if (idx == 2) res = QObject::tr("취소");
    if (idx == 3) res = QObject::tr("필터링");
    if (idx == 4) res = QObject::tr("투시 보정");
    if (idx == 5) res = QObject::tr("Nearest neighbor (계단현상)");
    if (idx == 6) res = QObject::tr("Bilinear (스무스)");
    if (idx == 7) res = QObject::tr("Bicubic (샤프)");
    if (idx == 10) res = QObject::tr("세로분할");
    if (idx == 11) res = QObject::tr("가로분할");
    if (idx == 12) res = QObject::tr("세로연동");
    if (idx == 13) res = QObject::tr("가로연동");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) res = QObject::tr("Transformar Imagem");
    if (idx == 1) res = QObject::tr("Ok");
    if (idx == 2) res = QObject::tr("Cancelar");
    if (idx == 3) res = QObject::tr("Filtragem");
    if (idx == 4) res = QObject::tr("Perspectiva");
    if (idx == 5) res = QObject::tr("Vizinho mais próximo (Jaggies)");
    if (idx == 6) res = QObject::tr("Bilinear (Suave)");
    if (idx == 7) res = QObject::tr("Bicubica (Nítido)");
    if (idx == 10) res = QObject::tr("Partição vertical");
    if (idx == 11) res = QObject::tr("Partição horizontal");
    if (idx == 12) res = QObject::tr("Unir vértices verticalmente");
    if (idx == 13) res = QObject::tr("Unir vértices horizontalmente");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) res = QObject::tr("Transformar imagen");
    if (idx == 1) res = QObject::tr("Ok");
    if (idx == 2) res = QObject::tr("Cancelar");
    if (idx == 3) res = QObject::tr("Filtering");
    if (idx == 4) res = QObject::tr("Perspectiva ");
    if (idx == 5) res = QObject::tr("El vecino cercano (Jaggies) ");
    if (idx == 6) res = QObject::tr("Bilineal (Suave) ");
    if (idx == 7) res = QObject::tr("Bicúbico (Definido) ");
    if (idx == 10) res = QObject::tr("Columnas");
    if (idx == 11) res = QObject::tr("Filas");
    if (idx == 12) res = QObject::tr("Enlace de columnas");
    if (idx == 13) res = QObject::tr("Enlace de Filas");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) res = QObject::tr("Bild transformieren");
    if (idx == 1) res = QObject::tr("Ok");
    if (idx == 2) res = QObject::tr("Löschen");
    if (idx == 3) res = QObject::tr("Filtern");
    if (idx == 4) res = QObject::tr("Perspektive");
    if (idx == 5) res = QObject::tr("Nächster Nachbar (Treppeneffekt)");
    if (idx == 6) res = QObject::tr("Bilinear (Glatt)");
    if (idx == 7) res = QObject::tr("Bikubisch (Scharf)");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) res = QObject::tr("Transformer l’image");
    if (idx == 1) res = QObject::tr("Ok");
    if (idx == 2) res = QObject::tr("Annuler");
    if (idx == 3) res = QObject::tr("Filtrage");
    if (idx == 4) res = QObject::tr("Perspective");
    if (idx == 5) res = QObject::tr("Par plus proche voisin (Crénelages)");
    if (idx == 6) res = QObject::tr("Bilinéaire (Lissage)");
    if (idx == 7) res = QObject::tr("Bicubique (Pointu)");
    if (idx == 10) res = QObject::tr("Colonne");
    if (idx == 11) res = QObject::tr("Rangée");
    if (idx == 12) res = QObject::tr("Liaison verticale");
    if (idx == 13) res = QObject::tr("Liaison horizontale");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) res = QObject::tr("Преобразовать изображение");
    if (idx == 1) res = QObject::tr("Ok");
    if (idx == 2) res = QObject::tr("Отменить");
    if (idx == 3) res = QObject::tr("Фильтр");
    if (idx == 4) res = QObject::tr("Вид");
    if (idx == 5) res = QObject::tr("По соседним (ступенчатая интерполяция)");
    if (idx == 6) res = QObject::tr("Билинейная интерполяция (гладкий)");
    if (idx == 7) res = QObject::tr("Бикубическая интерполяция (чётче)");
    if (idx == 10) res = QObject::tr("Столбец");
    if (idx == 11) res = QObject::tr("Строка");
    if (idx == 12) res = QObject::tr("Связь по вертикали");
    if (idx == 13) res = QObject::tr("Связь по горизонтали");
  }

  if (man->TranslateHindi())
  {
  }

#if defined(__NEET_QT_MAC__)
  res.replace( "Ctrl", "command" );
#endif

  return res;
}
