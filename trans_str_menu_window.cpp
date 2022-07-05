/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_window.h"

///////////////////////////////////////////////////////////////////////////
// - ウィンドウメニューで使用される文字列
// - A string used in the window menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuWindow( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("ウィンドウ(&W)");
    if (idx == 1) return QObject::tr("初期化(&I)...");
    if (idx == 2) return QObject::tr("表示・非表示(&S)");
    if (idx == 3) return QObject::tr("カラー");
    if (idx == 4) return QObject::tr("ブラシプレビュー");
    if (idx == 5) return QObject::tr("ブラシコントロール");
    if (idx == 6) return QObject::tr("ブラシ");
    if (idx == 7) return QObject::tr("ナビゲーター");
    if (idx == 8) return QObject::tr("レイヤー");
    if (idx == 9) return QObject::tr("パレット");
    if (idx == 10) return QObject::tr("ステータスバー");
    if (idx == 11) return QObject::tr("資料");
    if (idx == 13) return QObject::tr("ブラシサイズ");
    if (idx == 14) return QObject::tr("キャンバスの新規ビュー...");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("窗口(&W)");
    if (idx == 1) return QObject::tr("初始化(&I)...");
    if (idx == 2) return QObject::tr("表示 非表示(&S)");
    if (idx == 3) return QObject::tr("颜色");
    if (idx == 4) return QObject::tr("笔刷预览");
    if (idx == 5) return QObject::tr("笔刷控制");
    if (idx == 6) return QObject::tr("笔刷");
    if (idx == 7) return QObject::tr("导览");
    if (idx == 8) return QObject::tr("图层");
    if (idx == 9) return QObject::tr("色板");
    if (idx == 10) return QObject::tr("状态栏");
    if (idx == 11) return QObject::tr("资料");
    if (idx == 13) return QObject::tr("刷子大小");
    if (idx == 14) return QObject::tr("画布的新视图...");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("視窗(&W)");
    if (idx == 1) return QObject::tr("初始化(&I)...");
    if (idx == 2) return QObject::tr("表示 非表示(&S)");
    if (idx == 3) return QObject::tr("顏色");
    if (idx == 4) return QObject::tr("筆刷預覽");
    if (idx == 5) return QObject::tr("筆刷控制");
    if (idx == 6) return QObject::tr("筆刷");
    if (idx == 7) return QObject::tr("導覽");
    if (idx == 8) return QObject::tr("圖層");
    if (idx == 9) return QObject::tr("色板");
    if (idx == 10) return QObject::tr("狀態欄");
    if (idx == 11) return QObject::tr("資料");
    if (idx == 13) return QObject::tr("刷子大小");
    if (idx == 14) return QObject::tr("畫布的新視圖...");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("윈도우(&W)");
    if (idx == 1) return QObject::tr("초기화(&I)...");
    if (idx == 2) return QObject::tr("표시·비표시(&S)");
    if (idx == 3) return QObject::tr("컬러");
    if (idx == 4) return QObject::tr("브러시 미리보기");
    if (idx == 5) return QObject::tr("브러시 컨트롤");
    if (idx == 6) return QObject::tr("브러시");
    if (idx == 7) return QObject::tr("내비게이터");
    if (idx == 8) return QObject::tr("레이어");
    if (idx == 9) return QObject::tr("팔레트");
    if (idx == 10) return QObject::tr("상태 바");
    if (idx == 11) return QObject::tr("자료");
    if (idx == 13) return QObject::tr("브러쉬 크기");
    if (idx == 14) return QObject::tr("캔버스의 새보기...");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Janela(&W)");
    if (idx == 1) return QObject::tr("Inicializar(&I)...");
    if (idx == 2) return QObject::tr("Mostrar/Ocultar(&S)");
    if (idx == 3) return QObject::tr("Cor");
    if (idx == 4) return QObject::tr("Visualização do Pincel");
    if (idx == 5) return QObject::tr("Controle de Pincel");
    if (idx == 6) return QObject::tr("Pincel");
    if (idx == 7) return QObject::tr("Navegador");
    if (idx == 8) return QObject::tr("Camada");
    if (idx == 9) return QObject::tr("Paleta");
    if (idx == 10) return QObject::tr("Barra de estado");
    if (idx == 11) return QObject::tr("Referência");
    if (idx == 13) return QObject::tr("Tamanho do pincel");
    if (idx == 14) return QObject::tr("Nova visão da tela...");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Ventana(&W)");
    if (idx == 1) return QObject::tr("Inicializar(&I)...");
    if (idx == 2) return QObject::tr("Mostrar/Ocultar(&S)");
    if (idx == 3) return QObject::tr("Color");
    if (idx == 4) return QObject::tr("Vista previa del pincel");
    if (idx == 5) return QObject::tr("Control del pincel");
    if (idx == 6) return QObject::tr("Pincel");
    if (idx == 7) return QObject::tr("Navegador");
    if (idx == 8) return QObject::tr("Capa");
    if (idx == 9) return QObject::tr("Paleta");
    if (idx == 10) return QObject::tr("Barra de estado");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Fenster(&W)");
    if (idx == 1) return QObject::tr("Initialisieren(&I)...");
    if (idx == 2) return QObject::tr("Ein-/ausblenden(&S)");
    if (idx == 3) return QObject::tr("Farbe");
    if (idx == 4) return QObject::tr("Pinselprüfung ");
    if (idx == 5) return QObject::tr("Pinselkontrolle");
    if (idx == 6) return QObject::tr("Pinsel");
    if (idx == 7) return QObject::tr("Navigator");
    if (idx == 8) return QObject::tr("Ebene");
    if (idx == 9) return QObject::tr("Palette");
    if (idx == 10) return QObject::tr("Statusleiste");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Fenêtre(&W)");
    if (idx == 1) return QObject::tr("Initialiser(&I)...");
    if (idx == 2) return QObject::tr("Afficher/Masquer(&S)");
    if (idx == 3) return QObject::tr("Couleur");
    if (idx == 4) return QObject::tr("Aperçu du pinceau");
    if (idx == 5) return QObject::tr("Option du pinceau");
    if (idx == 6) return QObject::tr("Pinceau");
    if (idx == 7) return QObject::tr("Navigateur");
    if (idx == 8) return QObject::tr("Masque");
    if (idx == 9) return QObject::tr("Palette");
    if (idx == 10) return QObject::tr("Barre d'état");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Окно(&W)");
    if (idx == 1) return QObject::tr("Инициализация(&I)...");
    if (idx == 2) return QObject::tr("Показать/спрятать(&S)");
    if (idx == 3) return QObject::tr("Цвет");
    if (idx == 4) return QObject::tr("Предпросмотр кисти");
    if (idx == 5) return QObject::tr("Параметры кисти");
    if (idx == 6) return QObject::tr("Кисть");
    if (idx == 7) return QObject::tr("Навигация");
    if (idx == 8) return QObject::tr("Слой");
    if (idx == 9) return QObject::tr("Палитра");
    if (idx == 10) return QObject::tr("Панель статуса");
    if (idx == 11) return QObject::tr("Справка");
    if (idx == 13) return QObject::tr("Размер кисти");
    if (idx == 14) return QObject::tr("Новая вкладка для холста");
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

  if (idx == 0) return QObject::tr("Window(&W)");
  if (idx == 1) return QObject::tr("Initialize(&I)...");
  if (idx == 2) return QObject::tr("Show/Hide(&S)");
  if (idx == 3) return QObject::tr("Color");
  if (idx == 4) return QObject::tr("Brush Preview");
  if (idx == 5) return QObject::tr("Brush Control");
  if (idx == 6) return QObject::tr("Brush");
  if (idx == 7) return QObject::tr("Navigator");
  if (idx == 8) return QObject::tr("Layer");
  if (idx == 9) return QObject::tr("Palette");
  if (idx == 10) return QObject::tr("Status Bar");
  if (idx == 11) return QObject::tr("Reference");
  if (idx == 13) return QObject::tr("Brush Size");
  if (idx == 14) return QObject::tr("New View of Canvas");

  return "";
}
