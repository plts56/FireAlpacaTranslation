/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_layer.h"

///////////////////////////////////////////////////////////////////////////
// - レイヤーウィンドウで使用される文字列
// - A string used in the Layer window.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrLayer( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("レイヤーの追加");
    if (idx == 1) return QObject::tr("レイヤーの複製");
    if (idx == 2) return QObject::tr("レイヤーを下に統合");
    if (idx == 3) return QObject::tr("レイヤーの削除");
    if (idx == 4) return QObject::tr("レイヤーの追加 (8bpp)");
    if (idx == 5) return QObject::tr("レイヤーの追加 (1bpp)");
    if (idx == 6) return QObject::tr("レイヤーフォルダの追加");
    if (idx == 7) return QObject::tr("レイヤーの追加 (ハーフトーン)");

    if (idx == 100) return QObject::tr("前景色をレイヤーカラーに指定");
    if (idx == 101) return QObject::tr("レイヤーカラーを前景色に指定");
    if (idx == 102) return QObject::tr("ハーフトーンを定着させる");
    if (idx == 103) return QObject::tr("水彩境界を定着させる");
    if (idx == 104) return QObject::tr("フォルダにまとめる");
    if (idx == 105) return QObject::tr("選択範囲として取り込む");
    if (idx == 106) return QObject::tr("選択範囲として取り込む (追加)");
    if (idx == 107) return QObject::tr("画像を新規レイヤーとして読み込む...");
    if (idx == 108) return QObject::tr("このレイヤー位置には追加できません");
    if (idx == 109) return QObject::tr("テキストレイヤーを画像レイヤーに変換");

    if (idx == 200) return QObject::tr("全レイヤーを統合");
    if (idx == 201) return QObject::tr("統合されなかったレイヤーを残す");
    if (idx == 202) return QObject::tr("テキストレイヤーを除外");
    if (idx == 203) return QObject::tr("背景色を含めて統合する (推奨)");
    if (idx == 204) return QObject::tr("非表示レイヤーを残す");
    if (idx == 205) return QObject::tr("テキストレイヤーを残す");

    if (idx == 300) return QObject::tr("不透明度");
    if (idx == 301) return QObject::tr("ブレンド");
    if (idx == 302) return QObject::tr("透明度を保護");
    if (idx == 303) return QObject::tr("クリッピング");
    if (idx == 304) return QObject::tr("ロック");
    if (idx == 305) return QObject::tr("表示する");
    if (idx == 310) return QObject::tr("通常");
    if (idx == 311) return QObject::tr("乗算");
    if (idx == 312) return QObject::tr("加算・発光");
    if (idx == 313) return QObject::tr("オーバーレイ");
    if (idx == 314) return QObject::tr("スクリーン");
    if (idx == 315) return QObject::tr("通過");
    if (idx == 316) return QObject::tr("比較 (明)");
    if (idx == 317) return QObject::tr("比較 (暗)");
    if (idx == 318) return QObject::tr("差の絶対値");
    if (idx == 319) return QObject::tr("覆い焼き");
    if (idx == 320) return QObject::tr("焼き込み");
    if (idx == 321) return QObject::tr("ソフトライト");
    if (idx == 322) return QObject::tr("ハードライト");
    if (idx == 323) return QObject::tr("色相");
    if (idx == 324) return QObject::tr("彩度");
    if (idx == 325) return QObject::tr("カラー");
    if (idx == 326) return QObject::tr("輝度");
    if (idx == 327) return QObject::tr("ブレンドが 「通過」 の場合、クリッピングが正しく動作しません。ブレンドを確認して下さい。");
    if (idx == 328) return QObject::tr("除算");
    if (idx == 329) return QObject::tr("除外");
    if (idx == 330) return QObject::tr("減算");

    if (idx == 400) return QObject::tr("名前");
    if (idx == 401) return QObject::tr("下書きレイヤー");
    if (idx == 402) return QObject::tr("レイヤー属性");
    if (idx == 403) return QObject::tr("カラー");
    if (idx == 404) return QObject::tr("ハーフトーン");
    if (idx == 405) return QObject::tr("ハーフトーン化しない");
    if (idx == 406) return QObject::tr("アミ点");
    if (idx == 407) return QObject::tr("縦線");
    if (idx == 408) return QObject::tr("横線");
    if (idx == 409) return QObject::tr("線");
    if (idx == 410) return QObject::tr("投稿・ラスタライズ時に非表示");
    if (idx == 411) return QObject::tr("効果");
    if (idx == 412) return QObject::tr("なし");
    if (idx == 413) return QObject::tr("水彩境界");
    if (idx == 414) return QObject::tr("水彩境界 (濁り)");
    if (idx == 415) return QObject::tr("強さ");
    if (idx == 416) return QObject::tr("幅");
    if (idx == 417) return QObject::tr("トーンの濃さを固定");
    if (idx == 418) return QObject::tr("ハーフトーン表示");
    if (idx == 419) return QObject::tr("ハーフトーン線数");
    if (idx == 420) return QObject::tr("線");
    if (idx == 421) return QObject::tr("なし");
    if (idx == 422) return QObject::tr("円形");
    if (idx == 423) return QObject::tr("横線");
    if (idx == 424) return QObject::tr("縦線");
    if (idx == 425) return QObject::tr("有効にする");
    if (idx == 426) return QObject::tr("表示フレーム数");
    if (idx == 427) return QObject::tr("フレーム");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("追加图层");
    if (idx == 1) return QObject::tr("复制图层");
    if (idx == 2) return QObject::tr("向下合并图层");
    if (idx == 3) return QObject::tr("删除图层");
    if (idx == 4) return QObject::tr("追加图层 (8bpp)");
    if (idx == 5) return QObject::tr("追加图层 (1bpp)");
    if (idx == 6) return QObject::tr("添加图层文件夹");

    if (idx == 100) return QObject::tr("将前景色指定为图层颜色");
    if (idx == 101) return QObject::tr("将图层颜色指定为前景色");

    if (idx == 200) return QObject::tr("合并所有图层");
    if (idx == 201) return QObject::tr("保留未合并图层");
    if (idx == 202) return QObject::tr("排除文字图层");
    if (idx == 203) return QObject::tr("合并所有内容包括背景色");

    if (idx == 300) return QObject::tr("不透明度");
    if (idx == 301) return QObject::tr("混合");
    if (idx == 302) return QObject::tr("保护透明度");
    if (idx == 303) return QObject::tr("图层剪贴");
    if (idx == 304) return QObject::tr("锁定");
    if (idx == 310) return QObject::tr("正常");
    if (idx == 311) return QObject::tr("正片叠底");
    if (idx == 312) return QObject::tr("发光");
    if (idx == 313) return QObject::tr("叠加");
    if (idx == 314) return QObject::tr("滤色");
    if (idx == 315) return QObject::tr("通过");
    if (idx == 316) return QObject::tr("变亮");
    if (idx == 317) return QObject::tr("变暗");
    if (idx == 318) return QObject::tr("差值");
    if (idx == 319) return QObject::tr("减淡");
    if (idx == 320) return QObject::tr("加深");

    if (idx == 400) return QObject::tr("名字");
    if (idx == 401) return QObject::tr("草稿图层");
    if (idx == 402) return QObject::tr("图层属性");
    if (idx == 403) return QObject::tr("彩色");
    if (idx == 404) return QObject::tr("半色调网点");
    if (idx == 405) return QObject::tr("不进行半色调网点化");
    if (idx == 406) return QObject::tr("网点");
    if (idx == 407) return QObject::tr("纵线");
    if (idx == 408) return QObject::tr("横线");
    if (idx == 409) return QObject::tr("线");
    if (idx == 410) return QObject::tr("投稿・点阵化时隐藏");
    if (idx == 411) return QObject::tr("效果");
    if (idx == 412) return QObject::tr("无");
    if (idx == 413) return QObject::tr("水彩边缘");
    if (idx == 414) return QObject::tr("水彩边缘（浑浊）");
    if (idx == 415) return QObject::tr("强度");
    if (idx == 416) return QObject::tr("宽度");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("圖層的追加");
    if (idx == 1) return QObject::tr("圖層的複製");
    if (idx == 2) return QObject::tr("向下合併圖層");
    if (idx == 3) return QObject::tr("圖層的刪除");
    if (idx == 4) return QObject::tr("圖層的追加 (8bpp)");
    if (idx == 5) return QObject::tr("圖層的追加 (1bpp)");
    if (idx == 6) return QObject::tr("添加圖層夾");

    if (idx == 100) return QObject::tr("將前景色指定為圖層顏色");
    if (idx == 101) return QObject::tr("將圖層顏色指定為前景色");

    if (idx == 200) return QObject::tr("合併所有圖層");
    if (idx == 201) return QObject::tr("保留未合併圖層");
    if (idx == 202) return QObject::tr("排除文字圖層");
    if (idx == 203) return QObject::tr("同時合併背景色");

    if (idx == 300) return QObject::tr("不透明度");
    if (idx == 301) return QObject::tr("混合");
    if (idx == 302) return QObject::tr("保護透明度");
    if (idx == 303) return QObject::tr("剪裁遮色片");
    if (idx == 304) return QObject::tr("鎖定");
    if (idx == 310) return QObject::tr("正常");
    if (idx == 311) return QObject::tr("色彩增值");
    if (idx == 312) return QObject::tr("發光");
    if (idx == 313) return QObject::tr("覆蓋");
    if (idx == 314) return QObject::tr("濾色");
    if (idx == 315) return QObject::tr("穿透");
    if (idx == 316) return QObject::tr("變亮");
    if (idx == 317) return QObject::tr("變暗");
    if (idx == 318) return QObject::tr("差異化");
    if (idx == 319) return QObject::tr("加亮顏色");
    if (idx == 320) return QObject::tr("加深顏色");

    if (idx == 400) return QObject::tr("名字");
    if (idx == 401) return QObject::tr("草稿圖層");
    if (idx == 402) return QObject::tr("圖層屬性");
    if (idx == 403) return QObject::tr("彩色");
    if (idx == 404) return QObject::tr("半色調網點");
    if (idx == 405) return QObject::tr("不進行半色調網點化");
    if (idx == 406) return QObject::tr("網點");
    if (idx == 407) return QObject::tr("縱線");
    if (idx == 408) return QObject::tr("橫線");
    if (idx == 409) return QObject::tr("線");
    if (idx == 410) return QObject::tr("投稿・點陣化時隱藏");
    if (idx == 411) return QObject::tr("效果");
    if (idx == 412) return QObject::tr("無");
    if (idx == 413) return QObject::tr("水彩邊緣");
    if (idx == 414) return QObject::tr("水彩邊緣（混濁）");
    if (idx == 415) return QObject::tr("強度");
    if (idx == 416) return QObject::tr("寬度");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("레이어의 추가");
    if (idx == 1) return QObject::tr("레이어의 복제");
    if (idx == 2) return QObject::tr("레이어를 아래로 통합");
    if (idx == 3) return QObject::tr("레이어의 삭제");
    if (idx == 4) return QObject::tr("레이어의 추가 (8bpp)");
    if (idx == 5) return QObject::tr("레이어의 추가 (1bpp)");
    if (idx == 6) return QObject::tr("레이어 폴더의 추가");

    if (idx == 100) return QObject::tr("전경색을 레이어 컬러로 지정");
    if (idx == 101) return QObject::tr("레이어 컬러를 전경색으로 지정");

    if (idx == 200) return QObject::tr("모든 레이어를 통합");
    if (idx == 201) return QObject::tr("통합되지 않은 레이어를 남김");
    if (idx == 202) return QObject::tr("텍스트 레이어를 제외");
    if (idx == 203) return QObject::tr("배경색을 포함해 통합하기");

    if (idx == 300) return QObject::tr("불투명도");
    if (idx == 301) return QObject::tr("블렌딩");
    if (idx == 302) return QObject::tr("투명도를 보호");
    if (idx == 303) return QObject::tr("클리핑");
    if (idx == 304) return QObject::tr("잠금");
    if (idx == 310) return QObject::tr("보통");
    if (idx == 311) return QObject::tr("곱셈");
    if (idx == 312) return QObject::tr("더하기・발광");
    if (idx == 313) return QObject::tr("오버레이");
    if (idx == 314) return QObject::tr("스크린");
    if (idx == 315) return QObject::tr("통과");
    if (idx == 316) return QObject::tr("비교 (밝음)");
    if (idx == 317) return QObject::tr("비교 (어두움)");
    if (idx == 318) return QObject::tr("차의 절대치");
    if (idx == 319) return QObject::tr("닷지");
    if (idx == 320) return QObject::tr("번");

    if (idx == 400) return QObject::tr("이름");
    if (idx == 401) return QObject::tr("드래프트 레이어");
    if (idx == 402) return QObject::tr("레이어 속성");
    if (idx == 403) return QObject::tr("컬러");
    if (idx == 404) return QObject::tr("하프톤");
    if (idx == 405) return QObject::tr("하프톤을 사용안함");
    if (idx == 406) return QObject::tr("그물점");
    if (idx == 407) return QObject::tr("세로선");
    if (idx == 408) return QObject::tr("가로선");
    if (idx == 409) return QObject::tr("선");
    if (idx == 410) return QObject::tr("투고・래스터라이즈 할 경우 비표시");
    if (idx == 411) return QObject::tr("효과");
    if (idx == 412) return QObject::tr("없음");
    if (idx == 413) return QObject::tr("수채경계");
    if (idx == 414) return QObject::tr("수채경계(탁하게)");
    if (idx == 415) return QObject::tr("강도");
    if (idx == 416) return QObject::tr("폭");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Adicionar Camada");
    if (idx == 1) return QObject::tr("Duplicar Camada");
    if (idx == 2) return QObject::tr("Mesclar Camada");
    if (idx == 3) return QObject::tr("Excluir Camada");
    if (idx == 4) return QObject::tr("Adicionar Camada (8bpp)");
    if (idx == 5) return QObject::tr("Adicionar Camada (1bpp)");
    if (idx == 6) return QObject::tr("Adicionar camada de pasta");

    if (idx == 300) return QObject::tr("Opacidade");
    if (idx == 301) return QObject::tr("Combinação");
    if (idx == 302) return QObject::tr("Proteger Alfa");
    if (idx == 303) return QObject::tr("Recorte");
    if (idx == 304) return QObject::tr("Bloquear");
    if (idx == 310) return QObject::tr("Normal");
    if (idx == 311) return QObject::tr("Multiplicação");
    if (idx == 312) return QObject::tr("Adição");
    if (idx == 313) return QObject::tr("Sobreposição");
    if (idx == 314) return QObject::tr("Tela");
    if (idx == 315) return QObject::tr("Passagem");
    if (idx == 316) return QObject::tr("Clarear");
    if (idx == 317) return QObject::tr("Escurecer");
    if (idx == 318) return QObject::tr("Diferença");
    if (idx == 319) return QObject::tr("Mascarar");
    if (idx == 320) return QObject::tr("Queimar");

    if (idx == 400) return QObject::tr("Nome");
    if (idx == 401) return QObject::tr("Camada de Rascunho");
    if (idx == 402) return QObject::tr("Propriedade de Camada");
    if (idx == 403) return QObject::tr("Cor");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Agregar capa");
    if (idx == 1) return QObject::tr("Duplicar capa");
    if (idx == 2) return QObject::tr("Combinar hacia abajo");
    if (idx == 3) return QObject::tr("Borrar capa");
    if (idx == 4) return QObject::tr("Agregar capa (8bpp)");
    if (idx == 5) return QObject::tr("Agregar capa (1bpp)");
    if (idx == 6) return QObject::tr("Añadir carpeta de capas");

    if (idx == 300) return QObject::tr("Opacidad");
    if (idx == 301) return QObject::tr("Combinación");
    if (idx == 302) return QObject::tr("Proteger alfa");
    if (idx == 303) return QObject::tr("Recorte");
    if (idx == 304) return QObject::tr("Bloquear");
    if (idx == 310) return QObject::tr("Normal");
    if (idx == 311) return QObject::tr("Multiplicación");
    if (idx == 312) return QObject::tr("Suma");
    if (idx == 313) return QObject::tr("Superposición ");
    if (idx == 314) return QObject::tr("Pantalla");
    if (idx == 315) return QObject::tr("Cruzar");
    if (idx == 316) return QObject::tr("Aclarar");
    if (idx == 317) return QObject::tr("Oscurecer");
    if (idx == 318) return QObject::tr("Diferencia");
    if (idx == 319) return QObject::tr("Sobreexponer");
    if (idx == 320) return QObject::tr("Subexponer");

    if (idx == 400) return QObject::tr("Nombre");
    if (idx == 401) return QObject::tr("Capa de borrador");
    if (idx == 402) return QObject::tr("Propiedad de capa");
    if (idx == 403) return QObject::tr("Color");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Ebene hinzufügen");
    if (idx == 1) return QObject::tr("Ebene duplizieren");
    if (idx == 2) return QObject::tr("Ebene nach unten zusammenführen");
    if (idx == 3) return QObject::tr("Ebene löschen");
    if (idx == 4) return QObject::tr("Ebene hinzufügen (8bpp)");
    if (idx == 5) return QObject::tr("Ebene hinzufügen (1bpp)");
    if (idx == 6) return QObject::tr("Ebenen-Ordner hinzufügen");

    if (idx == 300) return QObject::tr("Deckkraft");
    if (idx == 301) return QObject::tr("Mischen");
    if (idx == 302) return QObject::tr("Alpha schützen");
    if (idx == 303) return QObject::tr("Ausschnitt");
    if (idx == 304) return QObject::tr("Sperre");
    if (idx == 310) return QObject::tr("Normal");
    if (idx == 311) return QObject::tr("Multiplikation");
    if (idx == 312) return QObject::tr("Zusatz");
    if (idx == 313) return QObject::tr("Überlagerung");
    if (idx == 314) return QObject::tr("Bildschirm");
    if (idx == 315) return QObject::tr("Durchlass");
    if (idx == 316) return QObject::tr("Aufhellen");
    if (idx == 317) return QObject::tr("Abdunkeln");
    if (idx == 318) return QObject::tr("Differenz");
    if (idx == 319) return QObject::tr("Abwedeln");
    if (idx == 320) return QObject::tr("Nachbelichten");

    if (idx == 400) return QObject::tr("Name");
    if (idx == 401) return QObject::tr("Entwurf von Ebene");
    if (idx == 402) return QObject::tr("Eigenschaft der Ebene");
    if (idx == 403) return QObject::tr("Farbe");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Ajouter un calque");
    if (idx == 1) return QObject::tr("Dupliquer le calque");
    if (idx == 2) return QObject::tr("Fusionner avec le calque inférieur");
    if (idx == 3) return QObject::tr("Supprimer le calque");
    if (idx == 4) return QObject::tr("Ajouter un calque (8bpp)");
    if (idx == 5) return QObject::tr("Ajouter un calque (1bpp)");
    if (idx == 6) return QObject::tr("Ajouter un dossier de calques");

    if (idx == 300) return QObject::tr("Opacité");
    if (idx == 301) return QObject::tr("Fusion");
    if (idx == 302) return QObject::tr("Protéger un alpha");
    if (idx == 303) return QObject::tr("Écrêtage");
    if (idx == 304) return QObject::tr("Verrouillage");
    if (idx == 310) return QObject::tr("Normal");
    if (idx == 311) return QObject::tr("Multiplication");
    if (idx == 312) return QObject::tr("Addition");
    if (idx == 313) return QObject::tr("Superposer");
    if (idx == 314) return QObject::tr("Écran");
    if (idx == 315) return QObject::tr("Transférer");
    if (idx == 316) return QObject::tr("Éclaircir");
    if (idx == 317) return QObject::tr("Obscurcir");
    if (idx == 318) return QObject::tr("Différence");
    if (idx == 319) return QObject::tr("Densité -");
    if (idx == 320) return QObject::tr("Densité +");

    if (idx == 400) return QObject::tr("Nom");
    if (idx == 401) return QObject::tr("Masque brouillon");
    if (idx == 402) return QObject::tr("Propriété du masque");
    if (idx == 403) return QObject::tr("Couleur");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Добавить слой");
    if (idx == 1) return QObject::tr("Дубликат слоя");
    if (idx == 2) return QObject::tr("Объединить с нижним слоем");
    if (idx == 3) return QObject::tr("Удалить слой");
    if (idx == 4) return QObject::tr("Добавить слой (8bpp)");
    if (idx == 5) return QObject::tr("Добавить слой (1bpp)");
    if (idx == 6) return QObject::tr("Добавить папку слоев");

    if (idx == 300) return QObject::tr("Непрозрачность");
    if (idx == 301) return QObject::tr("Наложение");
    if (idx == 302) return QObject::tr("Альфа-канал");
    if (idx == 303) return QObject::tr("Вырезать");
    if (idx == 304) return QObject::tr("Заблокировать");
    if (idx == 310) return QObject::tr("Нормальный");
    if (idx == 311) return QObject::tr("Умножение");
    if (idx == 312) return QObject::tr("Сложение");
    if (idx == 313) return QObject::tr("Наложение");
    if (idx == 314) return QObject::tr("Экран");
    if (idx == 315) return QObject::tr("Прямой доступ");
    if (idx == 316) return QObject::tr("Светлее");
    if (idx == 317) return QObject::tr("Темнее");
    if (idx == 318) return QObject::tr("Разница");
    if (idx == 319) return QObject::tr("Осветление");
    if (idx == 320) return QObject::tr("Затемнение");

    if (idx == 400) return QObject::tr("Имя");
    if (idx == 401) return QObject::tr("Черновой слой");
    if (idx == 402) return QObject::tr("Настройка слоев");
    if (idx == 403) return QObject::tr("Цвет");
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
  if (idx == 0) return QObject::tr("Add Layer");
  if (idx == 1) return QObject::tr("Duplicate Layer");
  if (idx == 2) return QObject::tr("Merge Layer");
  if (idx == 3) return QObject::tr("Delete Layer");
  if (idx == 4) return QObject::tr("Add Layer (8bpp)");
  if (idx == 5) return QObject::tr("Add Layer (1bpp)");
  if (idx == 6) return QObject::tr("Add Layer Folder");
  if (idx == 7) return QObject::tr("Add Layer (Halftone)");

  if (idx == 100) return QObject::tr("Set foreground color as layer color");
  if (idx == 101) return QObject::tr("Set layer color as foreground color");
  if (idx == 102) return QObject::tr("Establish Halftone");
  if (idx == 103) return QObject::tr("Establish Watercolor Edge");
  if (idx == 104) return QObject::tr("Combine In Folder");
  if (idx == 105) return QObject::tr("Import As Selection");
  if (idx == 106) return QObject::tr("Import As Selection (Add)");
  if (idx == 107) return QObject::tr("Import an Image as a New Layer...");
  if (idx == 108) return QObject::tr("Cannot add to this layer position");
  if (idx == 109) return QObject::tr("Convert Text Layer to Image Layer");

  if (idx == 200) return QObject::tr("Merge All Layers");
  if (idx == 201) return QObject::tr("Preserve Unmerged Layers");
  if (idx == 202) return QObject::tr("Exclude Text Layers");
  if (idx == 203) return QObject::tr("Merge Including Background Color (Recommended)");
  if (idx == 204) return QObject::tr("Preserve Invisible Layers");
  if (idx == 205) return QObject::tr("Preserve Text Layers");

  if (idx == 300) return QObject::tr("Opacity");
  if (idx == 301) return QObject::tr("Blending");
  if (idx == 302) return QObject::tr("Protect Alpha");
  if (idx == 303) return QObject::tr("Clipping");
  if (idx == 304) return QObject::tr("Lock");
  if (idx == 305) return QObject::tr("Visible");
  if (idx == 310) return QObject::tr("Normal");
  if (idx == 311) return QObject::tr("Multiply");
  if (idx == 312) return QObject::tr("Add");
  if (idx == 313) return QObject::tr("Overlay");
  if (idx == 314) return QObject::tr("Screen");
  if (idx == 315) return QObject::tr("Pass Through");
  if (idx == 316) return QObject::tr("Lighten");
  if (idx == 317) return QObject::tr("Darken");
  if (idx == 318) return QObject::tr("Difference");
  if (idx == 319) return QObject::tr("Dodge");
  if (idx == 320) return QObject::tr("Burn");
  if (idx == 321) return QObject::tr("Soft Light");
  if (idx == 322) return QObject::tr("Hard Light");
  if (idx == 323) return QObject::tr("Hue");
  if (idx == 324) return QObject::tr("Saturation");
  if (idx == 325) return QObject::tr("Color");
  if (idx == 326) return QObject::tr("Luminosity");
  if (idx == 327) return QObject::tr("If the Blending Filter is set to Pass Through, then Clipping will not operate correctly. Please check your Blending Filter.");
  if (idx == 328) return QObject::tr("Divide");
  if (idx == 329) return QObject::tr("Exclusion");
  if (idx == 330) return QObject::tr("Subtract");

  if (idx == 400) return QObject::tr("Name");
  if (idx == 401) return QObject::tr("Draft Layer");
  if (idx == 402) return QObject::tr("Layer Property");
  if (idx == 403) return QObject::tr("Color");
  if (idx == 404) return QObject::tr("Halftone");
  if (idx == 405) return QObject::tr("Don't halftone");
  if (idx == 406) return QObject::tr("Not dots");
  if (idx == 407) return QObject::tr("Vertical lines");
  if (idx == 408) return QObject::tr("Horizontal lines");
  if (idx == 409) return QObject::tr("Lines");
  if (idx == 410) return QObject::tr("Submit・Hide when rasterizing");
  if (idx == 411) return QObject::tr("Effect");
  if (idx == 412) return QObject::tr("None");
  if (idx == 413) return QObject::tr("Watercolor edge");
  if (idx == 414) return QObject::tr("Watercolor edge (Cloudy)");
  if (idx == 415) return QObject::tr("Strength");
  if (idx == 416) return QObject::tr("Width");
  if (idx == 417) return QObject::tr("Set tone depth");
  if (idx == 418) return QObject::tr("Halftoning");
  if (idx == 419) return QObject::tr("Halftone density");
  if (idx == 420) return QObject::tr("lines");
  if (idx == 421) return QObject::tr("None");
  if (idx == 422) return QObject::tr("Circle");
  if (idx == 423) return QObject::tr("Horizontal line");
  if (idx == 424) return QObject::tr("Vertical line");
  if (idx == 425) return QObject::tr("Enable");
  if (idx == 426) return QObject::tr("Number of display frames");
  if (idx == 427) return QObject::tr("frames");

  return "";
}
