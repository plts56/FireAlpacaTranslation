/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_new.h"

///////////////////////////////////////////////////////////////////////////
// - 新規作成ダイアログで使用される文字列
// - The string used in the New dialog.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrNew( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("幅");
    if (idx == 1) return QObject::tr("高さ");
    if (idx == 2) return QObject::tr("画像の新規作成");
    if (idx == 3) return QObject::tr("初期レイヤー");
    if (idx == 4) return QObject::tr("カラーレイヤー");
    if (idx == 5) return QObject::tr("8 bit レイヤー");
    if (idx == 6) return QObject::tr("用紙サイズ");
    if (idx == 7) return QObject::tr("LINE スタンプ");
    if (idx == 8) return QObject::tr("はがき");
    if (idx == 9) return QObject::tr("幅と高さを入れ替える");
    if (idx == 10) return QObject::tr("標準");
    if (idx == 11) return QObject::tr("漫画原稿");
    if (idx == 12) return QObject::tr("外枠 (製本サイズ)");
    if (idx == 13) return QObject::tr("内枠");
    if (idx == 14) return QObject::tr("塗り足し");
    if (idx == 15) return QObject::tr("テンプレート");
    if (idx == 16) return QObject::tr("同人誌 入稿用");
    if (idx == 17) return QObject::tr("商業誌");
    if (idx == 18) return QObject::tr("商業誌 4コマ");
    if (idx == 19) return QObject::tr("履歴");
    if (idx == 20) return QObject::tr("コマ");
    if (idx == 21) return QObject::tr("解像度");
    if (idx == 22) return QObject::tr("背景色");
    if (idx == 23) return QObject::tr("透明");
    if (idx == 24) return QObject::tr("色指定");
    if (idx == 25) return QObject::tr("漫画原稿ガイド設定");
    if (idx == 26) return QObject::tr("商業誌 4コマ (タイトルあり)");
    if (idx == 27) return QObject::tr("見開き/くるみ表紙");
    if (idx == 28) return QObject::tr("コマの線幅");
    if (idx == 29) return QObject::tr("白");
    if (idx == 30) return QObject::tr("背表紙幅");
    if (idx == 31) return QObject::tr("Twitter表示サイズ");
    if (idx == 32) return QObject::tr("Twitterヘッダ");
    if (idx == 33) return QObject::tr("Twitterアイコン");
    if (idx == 40) return QObject::tr("履歴の削除");
    if (idx == 41) return QObject::tr("ストリエ (キャラ) ");
    if (idx == 42) return QObject::tr("ストリエ (背景) ");
    if (idx == 43) return QObject::tr("ストリエ (挿絵) ");
    if (idx == 44) return QObject::tr("4コマ");
    if (idx == 45) return QObject::tr("4コマ(タイトルあり)");

    if (idx == 54) return QObject::tr("RGBプロファイル");
    if (idx == 55) return QObject::tr("CMYKプロファイル");
    if (idx == 56) return QObject::tr("RGBプロファイルを選択");
    if (idx == 57) return QObject::tr("CMYKプロファイルを選択");

    if (idx == 60) return QObject::tr("アニメーション");
    if (idx == 61) return QObject::tr("フレーム用フォルダを作成する");
    if (idx == 62) return QObject::tr("フレーム数");
    if (idx == 63) return QObject::tr("フレーム");
    if (idx == 64) return QObject::tr("フレームレート");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("宽度");
    if (idx == 1) return QObject::tr("高度");
    if (idx == 2) return QObject::tr("新建图像");
    if (idx == 3) return QObject::tr("初始图层");
    if (idx == 4) return QObject::tr("彩色图层");
    if (idx == 5) return QObject::tr("8bit图层");
    if (idx == 6) return QObject::tr("纸张尺寸");

    if (idx == 8) return QObject::tr("明信片（日本）");
    if (idx == 9) return QObject::tr("替换宽度和高度");
    if (idx == 10) return QObject::tr("标准");
    if (idx == 11) return QObject::tr("漫画原稿");
    if (idx == 12) return QObject::tr("外框 (装订尺寸)");
    if (idx == 13) return QObject::tr("内框");
    if (idx == 14) return QObject::tr("出血框");
    if (idx == 15) return QObject::tr("模板");
    if (idx == 16) return QObject::tr("同人志 交稿用");
    if (idx == 17) return QObject::tr("商业志");
    if (idx == 18) return QObject::tr("商业志 四格");
    if (idx == 19) return QObject::tr("纪录");
    if (idx == 20) return QObject::tr("框格");
    if (idx == 21) return QObject::tr("分辨率");
    if (idx == 22) return QObject::tr("背景色");
    if (idx == 23) return QObject::tr("透明");
    if (idx == 24) return QObject::tr("色彩指定");
    if (idx == 25) return QObject::tr("漫画原稿指南设定");
    if (idx == 26) return QObject::tr("商业志 四格(有标题)");
    if (idx == 27) return QObject::tr("跨页");
    if (idx == 28) return QObject::tr("框架线宽");
    if (idx == 29) return QObject::tr("白色");
    if (idx == 30) return QObject::tr("书脊宽度");
    if (idx == 31) return QObject::tr("Twitter显示尺寸");
    if (idx == 32) return QObject::tr("Twitter页面标题图");
    if (idx == 33) return QObject::tr("Twitter头像");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("寬度");
    if (idx == 1) return QObject::tr("高度");
    if (idx == 2) return QObject::tr("建立新圖像");
    if (idx == 3) return QObject::tr("初始圖層");
    if (idx == 4) return QObject::tr("彩色圖層");
    if (idx == 5) return QObject::tr("8bit圖層");
    if (idx == 6) return QObject::tr("紙張大小");

    if (idx == 8) return QObject::tr("明信片(日本)");
    if (idx == 9) return QObject::tr("高度與寬度對調");
    if (idx == 10) return QObject::tr("標準");
    if (idx == 11) return QObject::tr("漫畫原稿");
    if (idx == 12) return QObject::tr("外框(完稿尺寸)");
    if (idx == 13) return QObject::tr("內框");
    if (idx == 14) return QObject::tr("出血框");
    if (idx == 15) return QObject::tr("格式");
    if (idx == 16) return QObject::tr("同人誌 交稿用");
    if (idx == 17) return QObject::tr("商業誌");
    if (idx == 18) return QObject::tr("商業誌 四格漫畫");
    if (idx == 19) return QObject::tr("紀錄");
    if (idx == 20) return QObject::tr("面板");
    if (idx == 21) return QObject::tr("解析度");
    if (idx == 22) return QObject::tr("背景顏色");
    if (idx == 23) return QObject::tr("透明");
    if (idx == 24) return QObject::tr("顏色");
    if (idx == 25) return QObject::tr("漫畫原稿導覽設定");
    if (idx == 26) return QObject::tr("商業誌 四格漫畫(含標題）");
    if (idx == 27) return QObject::tr("跨頁");
    if (idx == 28) return QObject::tr("框格線寬");
    if (idx == 29) return QObject::tr("白");
    if (idx == 30) return QObject::tr("書背寬度");
    if (idx == 31) return QObject::tr("Twitter顯示尺寸");
    if (idx == 32) return QObject::tr("Twitter頁首尺寸");
    if (idx == 33) return QObject::tr("Twitter頭像尺寸");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("폭");
    if (idx == 1) return QObject::tr("높이");
    if (idx == 2) return QObject::tr("이미지의 신규 작성");
    if (idx == 3) return QObject::tr("초기 레이어");
    if (idx == 4) return QObject::tr("컬러 레이어");
    if (idx == 5) return QObject::tr("8비트 레이어");
    if (idx == 6) return QObject::tr("용지 사이즈");

    if (idx == 8) return QObject::tr("엽서");
    if (idx == 9) return QObject::tr("폭과 높이를 교체");
    if (idx == 10) return QObject::tr("표준");
    if (idx == 11) return QObject::tr("만화 원고");
    if (idx == 12) return QObject::tr("외곽선 (제본 사이즈)");
    if (idx == 13) return QObject::tr("내곽선");
    if (idx == 14) return QObject::tr("도련");
    if (idx == 15) return QObject::tr("템플릿");
    if (idx == 16) return QObject::tr("동인지 입고용");
    if (idx == 17) return QObject::tr("상업지");
    if (idx == 18) return QObject::tr("상업지 4칸");
    if (idx == 19) return QObject::tr("이력");
    if (idx == 20) return QObject::tr("칸");
    if (idx == 21) return QObject::tr("해상도");
    if (idx == 22) return QObject::tr("배경색");
    if (idx == 23) return QObject::tr("투명");
    if (idx == 24) return QObject::tr("색 지정");
    if (idx == 25) return QObject::tr("만화 원고 가이드 설정");
    if (idx == 26) return QObject::tr("상업지 4칸 (타이틀 있음)");
    if (idx == 27) return QObject::tr("양페이지/통표지");
    if (idx == 28) return QObject::tr("칸의 폭");
    if (idx == 29) return QObject::tr("흰색");
    if (idx == 30) return QObject::tr("책등 폭");
    if (idx == 31) return QObject::tr("Twitter표시 사이즈");
    if (idx == 32) return QObject::tr("Twitter헤더");
    if (idx == 33) return QObject::tr("Twitter아이콘");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Largura");
    if (idx == 1) return QObject::tr("Altura");
    if (idx == 2) return QObject::tr("Criar Nova Imagem");
    if (idx == 3) return QObject::tr("Camada inicial");
    if (idx == 4) return QObject::tr("Camada de Cor");
    if (idx == 5) return QObject::tr("Camada de 8 bits");
    if (idx == 6) return QObject::tr("Tamanho do papel");

    if (idx == 8) return QObject::tr("Cartão-postal (Japão)");
    if (idx == 9) return QObject::tr("Inverter altura e largura");
    if (idx == 10) return QObject::tr("Padrão");
    if (idx == 11) return QObject::tr("Quadrinhos");
    if (idx == 12) return QObject::tr("Linha de término (encapamento)");
    if (idx == 13) return QObject::tr("Linha de segurança");
    if (idx == 14) return QObject::tr("Sangrar");
    if (idx == 15) return QObject::tr("Modelo");
    if (idx == 16) return QObject::tr("Doujinshi");
    if (idx == 17) return QObject::tr("Profissional");
    if (idx == 18) return QObject::tr("Yonkoma");
    if (idx == 19) return QObject::tr("História");
    if (idx == 20) return QObject::tr("Painéis");
    if (idx == 21) return QObject::tr("Resolução");
    if (idx == 22) return QObject::tr("Cor de plano de fundo");
    if (idx == 23) return QObject::tr("Transparente");
    if (idx == 24) return QObject::tr("Cor");
    if (idx == 25) return QObject::tr("Configurações do guia de quadrinhos");
    if (idx == 26) return QObject::tr("Yonkoma (título)");
    if (idx == 27) return QObject::tr("Ampliar");
    if (idx == 28) return QObject::tr("Largura de quadro");
    if (idx == 29) return QObject::tr("Branco");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Ancho");
    if (idx == 1) return QObject::tr("Altura");
    if (idx == 2) return QObject::tr("Crear nueva imagen");
    if (idx == 3) return QObject::tr("Capa inicial");
    if (idx == 4) return QObject::tr("Capa de Color");
    if (idx == 5) return QObject::tr("Capa de 8 bits");
    if (idx == 6) return QObject::tr("Tamaño del papel");
    if (idx == 7) return QObject::tr("Pegatinas LINE");
    if (idx == 8) return QObject::tr("Postal (Japón)");
    if (idx == 9) return QObject::tr("Voltear ancho y alto");
    if (idx == 10) return QObject::tr("Estándar");
    if (idx == 11) return QObject::tr("Cómic");
    if (idx == 12) return QObject::tr("Marco exterior (encuadernación)");
    if (idx == 13) return QObject::tr("Marco interior");
    if (idx == 14) return QObject::tr("Sangrado");
    if (idx == 15) return QObject::tr("Plantilla");
    if (idx == 16) return QObject::tr("Doujinshi");
    if (idx == 17) return QObject::tr("Profesional");
    if (idx == 18) return QObject::tr("Yonkoma");
    if (idx == 19) return QObject::tr("Historial");
    if (idx == 20) return QObject::tr("Paneles");
    if (idx == 21) return QObject::tr("Resolución");
    if (idx == 22) return QObject::tr("Color de fondo");
    if (idx == 23) return QObject::tr("Transparente");
    if (idx == 24) return QObject::tr("Color");
    if (idx == 25) return QObject::tr("Ajustes de líneas para guía cómic");
    if (idx == 26) return QObject::tr("Yonkoma (título)");
    if (idx == 27) return QObject::tr("Extensión");
    if (idx == 28) return QObject::tr("Ancho del marco");
    if (idx == 29) return QObject::tr("Blanco");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Weite");
    if (idx == 1) return QObject::tr("Höhe");
    if (idx == 2) return QObject::tr("Neues Bild erstellen");
    if (idx == 3) return QObject::tr("Anfangsebene");
    if (idx == 4) return QObject::tr("Farbschicht");
    if (idx == 5) return QObject::tr("8-Bit-Schicht");
    if (idx == 6) return QObject::tr("Papiergröße");

    if (idx == 8) return QObject::tr("Postkarte (Japan)");
    if (idx == 9) return QObject::tr("Breite und Höhe umkehren");
    if (idx == 10) return QObject::tr("Standard");
    if (idx == 11) return QObject::tr("Comic");
    if (idx == 12) return QObject::tr("Schlusslinie (Buchbinden)");
    if (idx == 13) return QObject::tr("Sicherheitslinie");
    if (idx == 14) return QObject::tr("Beschnitt");
    if (idx == 15) return QObject::tr("Vorlage");
    if (idx == 16) return QObject::tr("Fan-Comic");
    if (idx == 17) return QObject::tr("Professionell");
    if (idx == 18) return QObject::tr("Vier-Panel-Comic ");
    if (idx == 19) return QObject::tr("Geschichte");
    if (idx == 20) return QObject::tr("Panels");
    if (idx == 21) return QObject::tr("Auflösung");
    if (idx == 22) return QObject::tr("Hintergrundfarbe");
    if (idx == 23) return QObject::tr("Transparent");
    if (idx == 24) return QObject::tr("Farbe");
    if (idx == 25) return QObject::tr("Einstellung der Comic-Richtlinien");
    if (idx == 26) return QObject::tr("Vier-Panel-Comic (Titel)");
    if (idx == 27) return QObject::tr("Doppelseite");
    if (idx == 28) return QObject::tr("Rahmenbreite");
    if (idx == 29) return QObject::tr("Weiß");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Largeur");
    if (idx == 1) return QObject::tr("Hauteur");
    if (idx == 2) return QObject::tr("Créer une image");
    if (idx == 3) return QObject::tr("Calque initial");
    if (idx == 4) return QObject::tr("Couche de couleur");
    if (idx == 5) return QObject::tr("Couche 8 bit");
    if (idx == 6) return QObject::tr("Taille du papier");

    if (idx == 8) return QObject::tr("Carte postale (Japon)");
    if (idx == 9) return QObject::tr("Inverser largeur et hauteur");
    if (idx == 10) return QObject::tr("Standard");
    if (idx == 11) return QObject::tr("Manga");
    if (idx == 12) return QObject::tr("Cadre extérieur (reliure)");
    if (idx == 13) return QObject::tr("Cadre intérieur");
    if (idx == 14) return QObject::tr("Marge perdue");
    if (idx == 15) return QObject::tr("Template");
    if (idx == 16) return QObject::tr("Dōjinshi");
    if (idx == 17) return QObject::tr("Professionnel");
    if (idx == 18) return QObject::tr("Yonkoma");
    if (idx == 19) return QObject::tr("Historique");
    if (idx == 20) return QObject::tr("Cases");
    if (idx == 21) return QObject::tr("Résolution");
    if (idx == 22) return QObject::tr("Couleur d'arrière-plan");
    if (idx == 23) return QObject::tr("Transparent");
    if (idx == 24) return QObject::tr("Couleur");
    if (idx == 25) return QObject::tr("Paramètres lignes du guide manga");
    if (idx == 26) return QObject::tr("Yonkoma (titre)");
    if (idx == 27) return QObject::tr("Étaler");
    if (idx == 28) return QObject::tr("Largeur du cadre");
    if (idx == 29) return QObject::tr("Blanc");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Ширина");
    if (idx == 1) return QObject::tr("Высота");
    if (idx == 2) return QObject::tr("Создать новое изображение");
    if (idx == 3) return QObject::tr("Начальный слой");
    if (idx == 4) return QObject::tr("Цветовой  слой");
    if (idx == 5) return QObject::tr("8-битный слой");
    if (idx == 6) return QObject::tr("Размер бумаги");

    if (idx == 8) return QObject::tr("Открытка (Япония)");
    if (idx == 9) return QObject::tr("Инвертировать ширину и высоту");
    if (idx == 10) return QObject::tr("Стандартный");
    if (idx == 11) return QObject::tr("Комикс");
    if (idx == 12) return QObject::tr("Финишная черта (Переплет)");
    if (idx == 13) return QObject::tr("Внутренняя рамка");
    if (idx == 14) return QObject::tr("Поле под обрез");
    if (idx == 15) return QObject::tr("Образец");
    if (idx == 16) return QObject::tr("Додзинси");
    if (idx == 17) return QObject::tr("Профессионал");
    if (idx == 18) return QObject::tr("Йонкома");
    if (idx == 19) return QObject::tr("История");
    if (idx == 20) return QObject::tr("Кадры");
    if (idx == 21) return QObject::tr("Разрешение");
    if (idx == 22) return QObject::tr("Цвет фона");
    if (idx == 23) return QObject::tr("Прозрачный");
    if (idx == 24) return QObject::tr("Цвет");
    if (idx == 25) return QObject::tr("Настройки направляющих линий комикса");
    if (idx == 26) return QObject::tr("Йонкома (Название)");
    if (idx == 27) return QObject::tr("Разворот");
    if (idx == 28) return QObject::tr("Ширина кадра");
    if (idx == 29) return QObject::tr("Белый");
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  if (man->TranslatePolish())
  {
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Width");
  if (idx == 1) return QObject::tr("Height");
  if (idx == 2) return QObject::tr("Create New Image");
  if (idx == 3) return QObject::tr("Initial Layer");
  if (idx == 4) return QObject::tr("Color Layer");
  if (idx == 5) return QObject::tr("8 bit Layer");
  if (idx == 6) return QObject::tr("Paper Size");
  if (idx == 7) return QObject::tr("LINE Stickers");
  if (idx == 8) return QObject::tr("Postcard (Japan)");
  if (idx == 9) return QObject::tr("Reverse Width and Height");
  if (idx == 10) return QObject::tr("Standard");
  if (idx == 11) return QObject::tr("Comic");
  if (idx == 12) return QObject::tr("Finish Line (Bookbinding)");
  if (idx == 13) return QObject::tr("Safe Line");
  if (idx == 14) return QObject::tr("Bleed");
  if (idx == 15) return QObject::tr("Template");
  if (idx == 16) return QObject::tr("Doujinshi");
  if (idx == 17) return QObject::tr("Professional");
  if (idx == 18) return QObject::tr("Yonkoma");
  if (idx == 19) return QObject::tr("History");
  if (idx == 20) return QObject::tr("Panels");
  if (idx == 21) return QObject::tr("Resolution");
  if (idx == 22) return QObject::tr("Background Color");
  if (idx == 23) return QObject::tr("Transparent");
  if (idx == 24) return QObject::tr("Color");
  if (idx == 25) return QObject::tr("Comic Guide Lines Settings");
  if (idx == 26) return QObject::tr("Yonkoma (Title)");
  if (idx == 27) return QObject::tr("Spread / Cover Page");
  if (idx == 28) return QObject::tr("Frame Width");
  if (idx == 29) return QObject::tr("White");
  if (idx == 30) return QObject::tr("Spine Width");
  if (idx == 31) return QObject::tr("Twitter Image size");
  if (idx == 32) return QObject::tr("Twitter Header Size");
  if (idx == 33) return QObject::tr("Twitter Icon");
  if (idx == 40) return QObject::tr("Delete History");
  if (idx == 41) return QObject::tr("Storie (Characters)");
  if (idx == 42) return QObject::tr("Storie (Backgrounds)");
  if (idx == 43) return QObject::tr("Storie (Clipart)");
  if (idx == 44) return QObject::tr("Yonkoma");
  if (idx == 45) return QObject::tr("Yonkoma (Title)");

  if (idx == 54) return QObject::tr("RGB Profile");
  if (idx == 55) return QObject::tr("CMYK Profile");
  if (idx == 56) return QObject::tr("Select RGB Profile");
  if (idx == 57) return QObject::tr("Select CMYK Profile");

  if (idx == 60) return QObject::tr("Animation");
  if (idx == 61) return QObject::tr("Create Folder　for Frame");
  if (idx == 62) return QObject::tr("Number of Frames");
  if (idx == 63) return QObject::tr("Frame");
  if (idx == 64) return QObject::tr("Frame Rate");

  return "";
}
