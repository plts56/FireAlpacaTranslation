/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_file.h"

///////////////////////////////////////////////////////////////////////////
// - ファイルメニューで使用される文字列
// - A string used in the file menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuFile( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("ファイル(&F)");
    if (idx == 1) return QObject::tr("新規作成(&N)...");
    if (idx == 2) return QObject::tr("クリップボードから新規作成(&V)");
    if (idx == 3) return QObject::tr("開く(&O)...");
    if (idx == 4) return QObject::tr("最近使ったファイル(&R)");
    if (idx == 5) return QObject::tr("保存(&S)");
    if (idx == 6) return QObject::tr("名前をつけて保存(&A)...");
    if (idx == 7) return QObject::tr("ラスタライズ(&Z)...");
    if (idx == 8) return QObject::tr("環境設定(&K)...");
    if (idx == 9) return QObject::tr("閉じる(&C)");
    if (idx == 10) return QObject::tr("ショートカット設定(&H)...");
    if (idx == 11) return QObject::tr("印刷(&P)...");
    if (idx == 12) return QObject::tr("レイヤーを連番出力...");
    if (idx == 13) return QObject::tr("書き出し...");
    if (idx == 14) return QObject::tr("画像をレイヤーとして開く...");
    if (idx == 15) return QObject::tr("書き出し (CMYK形式 PSD)...");
    if (idx == 16) return QObject::tr("ブラシ環境設定(&B)...");
    if (idx == 17) return QObject::tr("新規レイヤーとして開く(&L)...");
    if (idx == 18) return QObject::tr("名前をつけて保存(日時を指定)(&D)...");
    if (idx == 19) return QObject::tr("書き出し (APNG)...");
    if (idx == 20) return QObject::tr("書き出し (アニメーションGIF)...");
    if (idx == 21) return QObject::tr("最近使ったフォルダ(&F)");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("档案(&F)");
    if (idx == 1) return QObject::tr("新建档案(&N)...");
    if (idx == 2) return QObject::tr("从剪贴板新建(&V)");
    if (idx == 3) return QObject::tr("打开(&O)...");
    if (idx == 4) return QObject::tr("最近使用的档案(&R)");
    if (idx == 5) return QObject::tr("保存(&S)");
    if (idx == 6) return QObject::tr("另存为(&A)...");
    if (idx == 7) return QObject::tr("点阵化(&Z)...");
    if (idx == 8) return QObject::tr("环境设定(&K)...");
    if (idx == 9) return QObject::tr("关闭(&C)");
    if (idx == 10) return QObject::tr("设定快捷键(&H)...");
    if (idx == 11) return QObject::tr("打印(&P)...");
    if (idx == 12) return QObject::tr("按序导出图层(描图纸模式)...");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("檔案(&F)");
    if (idx == 1) return QObject::tr("新建檔案(&N)...");
    if (idx == 2) return QObject::tr("從剪貼簿新建檔案(&V)");
    if (idx == 3) return QObject::tr("開啟(&O)...");
    if (idx == 4) return QObject::tr("最近使用的檔案(&R)");
    if (idx == 5) return QObject::tr("儲存(&S)");
    if (idx == 6) return QObject::tr("另存新檔(&A)...");
    if (idx == 7) return QObject::tr("點陣化(&Z)...");
    if (idx == 8) return QObject::tr("環境設定(&K)...");
    if (idx == 9) return QObject::tr("關閉(&C)");
    if (idx == 10) return QObject::tr("設定快捷鍵(&H)...");
    if (idx == 11) return QObject::tr("列印(&P)...");
    if (idx == 12) return QObject::tr("連續匯出圖層（描圖紙模式）...");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("파일(&F)");
    if (idx == 1) return QObject::tr("신규 작성(&N)...");
    if (idx == 2) return QObject::tr("클립 보드에서 신규 작성(&V)");
    if (idx == 3) return QObject::tr("열기(&O)...");
    if (idx == 4) return QObject::tr("최근 사용한 파일(&R)");
    if (idx == 5) return QObject::tr("저장(&S)");
    if (idx == 6) return QObject::tr("다른 이름으로 저장(&A)...");
    if (idx == 7) return QObject::tr("래스터화(&Z)...");
    if (idx == 8) return QObject::tr("환경설정(&K)...");
    if (idx == 9) return QObject::tr("닫기(&C)");
    if (idx == 10) return QObject::tr("단축키 설정(&H)...");
    if (idx == 11) return QObject::tr("인쇄(&P)...");
    if (idx == 12) return QObject::tr("레이어 일련번호 출력(어니언스킨 모드)...");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Arquivo(&F)");
    if (idx == 1) return QObject::tr("Novo(&N)...");
    if (idx == 2) return QObject::tr("Novo via Área de Transferência(&V)");
    if (idx == 3) return QObject::tr("Abrir(&O)...");
    if (idx == 4) return QObject::tr("Abrir Arquivo Recente(&R)");
    if (idx == 5) return QObject::tr("Salvar(&S)");
    if (idx == 6) return QObject::tr("Salvar Como(&A)...");
    if (idx == 7) return QObject::tr("Rasterizar(&Z)...");
    if (idx == 8) return QObject::tr("Configuração do Ambiente(&K)...");
    if (idx == 9) return QObject::tr("Fechar(&C)");
    if (idx == 10) return QObject::tr("Configuração de Atalhos(&H)...");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Archivo(&F)");
    if (idx == 1) return QObject::tr("Nuevo(&N)...");
    if (idx == 2) return QObject::tr("Nuevo desde el portapapeles(&V)");
    if (idx == 3) return QObject::tr("Abrir(&O)...");
    if (idx == 4) return QObject::tr("Abrir archivo reciente(&R)");
    if (idx == 5) return QObject::tr("Guardar(&S)");
    if (idx == 6) return QObject::tr("Guardar como(&A)...");
    if (idx == 7) return QObject::tr("Rasterizar(&Z)...");
    if (idx == 8) return QObject::tr("Configurar entorno(&K)...");
    if (idx == 9) return QObject::tr("Cerrar(&C)");
    if (idx == 10) return QObject::tr("Configurar acceso rápido(&H)...");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Datei(&F)");
    if (idx == 1) return QObject::tr("Neu(&N)...");
    if (idx == 2) return QObject::tr("Neues über Zwischenablage(&V)");
    if (idx == 3) return QObject::tr("Öffnen(&O)...");
    if (idx == 4) return QObject::tr("Kürzliche Datei öffnen(&R)");
    if (idx == 5) return QObject::tr("Speichern(&S)");
    if (idx == 6) return QObject::tr("Speichern als(&A)...");
    if (idx == 7) return QObject::tr("Rastern(&Z)...");
    if (idx == 8) return QObject::tr("Umgebungseinstellung(&K)...");
    if (idx == 9) return QObject::tr("Schließen(&C)");
    if (idx == 10) return QObject::tr("Einstellung für Abkürzung(&H)...");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Fichier(&F)");
    if (idx == 1) return QObject::tr("Nouveau(&N)...");
    if (idx == 2) return QObject::tr("Nouveau via le presse-papiers(&V)");
    if (idx == 3) return QObject::tr("Ouvrir(&O)...");
    if (idx == 4) return QObject::tr("Ouvrir un fichier récent(&R)");
    if (idx == 5) return QObject::tr("Enregistrer(&S)");
    if (idx == 6) return QObject::tr("Enregistrer sous(&A)...");
    if (idx == 7) return QObject::tr("Pixellisation (&Z)...");
    if (idx == 8) return QObject::tr("Paramètre d'environnement(&K)...");
    if (idx == 9) return QObject::tr("Fermer(&C)");
    if (idx == 10) return QObject::tr("Paramètre de raccourci(&H)...");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Файл(&F)");
    if (idx == 1) return QObject::tr("Новый(&N)...");
    if (idx == 2) return QObject::tr("Новый через буфер обмена(&V)");
    if (idx == 3) return QObject::tr("Открыть(&O)...");
    if (idx == 4) return QObject::tr("Открыть последний файл(&R)");
    if (idx == 5) return QObject::tr("Сохранить(&S)");
    if (idx == 6) return QObject::tr("Сохранить как(&A)...");
    if (idx == 7) return QObject::tr("Растрировать(&Z)...");
    if (idx == 8) return QObject::tr("Настройки среды(&K)...");
    if (idx == 9) return QObject::tr("Закрыть(&C)");
    if (idx == 10) return QObject::tr("Настройки горячих клавиш(&H)...");
  }

  if (man->TranslateHindi())
  {
  }

  if (idx == 0) return QObject::tr("File(&F)");
  if (idx == 1) return QObject::tr("New(&N)...");
  if (idx == 2) return QObject::tr("New via Clipboard(&V)");
  if (idx == 3) return QObject::tr("Open(&O)...");
  if (idx == 4) return QObject::tr("Open Recent File(&R)");
  if (idx == 5) return QObject::tr("Save(&S)");
  if (idx == 6) return QObject::tr("Save As(&A)...");
  if (idx == 7) return QObject::tr("Rasterize(&Z)...");
  if (idx == 8) return QObject::tr("Environment Settings(&K)...");
  if (idx == 9) return QObject::tr("Close(&C)");
  if (idx == 10) return QObject::tr("Shortcut Settings(&H)...");
  if (idx == 11) return QObject::tr("Print(&P)...");
  if (idx == 12) return QObject::tr("Export Layers...");
  if (idx == 13) return QObject::tr("Export...");
  if (idx == 14) return QObject::tr("Open the image as a layer.");
  if (idx == 15) return QObject::tr("Export (CMYK format PSD)...");
  if (idx == 16) return QObject::tr("Brush Environment Settings(&B)...");
  if (idx == 17) return QObject::tr("Open As a New Layer(&L)...");
  if (idx == 18) return QObject::tr("Save As (Specify Date)(&D)...");
  if (idx == 19) return QObject::tr("Export (APNG)...");
  if (idx == 20) return QObject::tr("Export (Animated GIF)...");
  if (idx == 21) return QObject::tr("Open Recent Folder(&F)");

  return "";
}
